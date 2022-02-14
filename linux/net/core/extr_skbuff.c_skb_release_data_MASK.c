
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int nr_frags; scalar_t__ frag_list; int * frags; int dataref; } ;
struct sk_buff {scalar_t__ nohdr; scalar_t__ cloned; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1)
{
 struct skb_shared_info *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 if (VAR_1->cloned &&
     FUNC_1(VAR_1->nohdr ? (1 << VAR_0) + 1 : 1,
         &VAR_2->dataref))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_frags; VAR_3++)
  FUNC_0(&VAR_2->frags[VAR_3]);

 if (VAR_2->frag_list)
  FUNC_2(VAR_2->frag_list);

 FUNC_5(VAR_1, 1);
 FUNC_3(VAR_1);
}
