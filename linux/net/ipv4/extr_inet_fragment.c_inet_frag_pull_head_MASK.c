
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int truesize; int rbnode; } ;
struct inet_frag_queue {int fqdir; struct sk_buff* fragments_tail; int rb_fragments; } ;
struct TYPE_2__ {struct sk_buff* next_frag; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

struct sk_buff *FUNC_7(struct inet_frag_queue *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2;

 VAR_1 = FUNC_5(&VAR_0->rb_fragments);
 if (!VAR_1)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_1)->next_frag;
 if (VAR_2)
  FUNC_4(&VAR_1->rbnode, &VAR_2->rbnode,
    &VAR_0->rb_fragments);
 else
  FUNC_3(&VAR_1->rbnode, &VAR_0->rb_fragments);
 FUNC_2(&VAR_1->rbnode, 0, sizeof(VAR_1->rbnode));
 FUNC_1();

 if (VAR_1 == VAR_0->fragments_tail)
  VAR_0->fragments_tail = ((void*)0);

 FUNC_6(VAR_0->fqdir, VAR_1->truesize);

 return VAR_1;
}
