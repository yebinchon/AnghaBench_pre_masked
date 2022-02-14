
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct sk_buff {int truesize; scalar_t__ ip_summed; int tstamp; int * prev; struct sk_buff* next; scalar_t__ len; int data_len; int * sk; struct rb_node rbnode; int csum; scalar_t__ data; } ;
struct inet_frag_queue {int stamp; int fqdir; int rb_fragments; } ;
struct TYPE_2__ {struct sk_buff* next_frag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct rb_node*,int ,int) ;
 int FUNC_4 (struct rb_node*,int *) ;
 struct rb_node* FUNC_5 (struct rb_node*) ;
 struct sk_buff* FUNC_6 (struct rb_node*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct sk_buff*,int*,int*) ;
 int FUNC_11 (int ,int) ;

void FUNC_12(struct inet_frag_queue *VAR_2, struct sk_buff *VAR_3,
       void *VAR_4, bool VAR_5)
{
 struct sk_buff **VAR_6 = (struct sk_buff **)VAR_4;
 struct rb_node *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 FUNC_9(VAR_3, VAR_3->data - FUNC_8(VAR_3));


 VAR_8 = FUNC_0(VAR_3)->next_frag;
 VAR_7 = FUNC_5(&VAR_3->rbnode);
 FUNC_4(&VAR_3->rbnode, &VAR_2->rb_fragments);

 VAR_9 = VAR_3->truesize;
 while (VAR_7 || VAR_8) {




  while (VAR_8) {
   struct sk_buff *VAR_10 = FUNC_0(VAR_8)->next_frag;
   bool VAR_11;
   int VAR_12;

   VAR_9 += VAR_8->truesize;
   if (VAR_3->ip_summed != VAR_8->ip_summed)
    VAR_3->ip_summed = VAR_1;
   else if (VAR_3->ip_summed == VAR_0)
    VAR_3->csum = FUNC_1(VAR_3->csum, VAR_8->csum);

   if (VAR_5 && FUNC_10(VAR_3, VAR_8, &VAR_11,
            &VAR_12)) {
    FUNC_2(VAR_8, VAR_11);
   } else {
    VAR_8->prev = ((void*)0);
    FUNC_3(&VAR_8->rbnode, 0, sizeof(VAR_8->rbnode));
    VAR_8->sk = ((void*)0);

    VAR_3->data_len += VAR_8->len;
    VAR_3->len += VAR_8->len;
    VAR_3->truesize += VAR_8->truesize;

    *VAR_6 = VAR_8;
    VAR_6 = &VAR_8->next;
   }

   VAR_8 = VAR_10;
  }

  if (VAR_7) {
   struct rb_node *VAR_13 = FUNC_5(VAR_7);

   VAR_8 = FUNC_6(VAR_7);
   FUNC_4(VAR_7, &VAR_2->rb_fragments);
   VAR_7 = VAR_13;
  }
 }
 FUNC_11(VAR_2->fqdir, VAR_9);

 *VAR_6 = ((void*)0);
 FUNC_7(VAR_3);
 VAR_3->prev = ((void*)0);
 VAR_3->tstamp = VAR_2->stamp;
}
