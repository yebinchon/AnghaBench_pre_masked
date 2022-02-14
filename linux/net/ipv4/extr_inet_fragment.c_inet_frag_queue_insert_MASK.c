
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int ip_defrag_offset; int len; int rbnode; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_3__ {struct rb_node* rb_node; } ;
struct inet_frag_queue {TYPE_1__ rb_fragments; struct sk_buff* fragments_tail; } ;
struct TYPE_4__ {int frag_run_len; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct inet_frag_queue*,struct sk_buff*) ;
 int FUNC_3 (struct inet_frag_queue*,struct sk_buff*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,struct rb_node*,struct rb_node**) ;
 struct sk_buff* FUNC_6 (struct rb_node*) ;

int FUNC_7(struct inet_frag_queue *VAR_3, struct sk_buff *VAR_4,
      int VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7 = VAR_3->fragments_tail;
 if (!VAR_7)
  FUNC_3(VAR_3, VAR_4);
 else if (VAR_7->ip_defrag_offset + VAR_7->len < VAR_6) {


  if (VAR_5 < VAR_7->ip_defrag_offset + VAR_7->len)
   return VAR_2;
  if (VAR_5 == VAR_7->ip_defrag_offset + VAR_7->len)
   FUNC_2(VAR_3, VAR_4);
  else
   FUNC_3(VAR_3, VAR_4);
 } else {



  struct rb_node **VAR_8, *VAR_9;

  VAR_8 = &VAR_3->rb_fragments.rb_node;
  do {
   struct sk_buff *VAR_10;
   int VAR_11;

   VAR_9 = *VAR_8;
   VAR_10 = FUNC_6(VAR_9);
   VAR_11 = VAR_10->ip_defrag_offset +
     FUNC_0(VAR_10)->frag_run_len;
   if (VAR_6 <= VAR_10->ip_defrag_offset)
    VAR_8 = &VAR_9->rb_left;
   else if (VAR_5 >= VAR_11)
    VAR_8 = &VAR_9->rb_right;
   else if (VAR_5 >= VAR_10->ip_defrag_offset &&
     VAR_6 <= VAR_11)
    return VAR_0;
   else
    return VAR_2;
  } while (*VAR_8);



  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->rbnode, VAR_9, VAR_8);
  FUNC_4(&VAR_4->rbnode, &VAR_3->rb_fragments);
 }

 VAR_4->ip_defrag_offset = VAR_5;

 return VAR_1;
}
