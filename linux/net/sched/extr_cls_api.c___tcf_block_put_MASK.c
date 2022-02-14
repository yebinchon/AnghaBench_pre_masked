
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block_ext_info {int dummy; } ;
struct tcf_block {int net; int lock; int chain_list; int refcnt; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct tcf_block*) ;
 int FUNC_4 (struct tcf_block*,int) ;
 int FUNC_5 (struct tcf_block*,struct Qdisc*,struct tcf_block_ext_info*) ;
 int FUNC_6 (struct tcf_block*,int ) ;
 scalar_t__ FUNC_7 (struct tcf_block*) ;

__attribute__((used)) static void FUNC_8(struct tcf_block *VAR_0, struct Qdisc *VAR_1,
       struct tcf_block_ext_info *VAR_2, bool VAR_3)
{
 if (FUNC_2(&VAR_0->refcnt, &VAR_0->lock)) {






  bool VAR_4 = FUNC_0(&VAR_0->chain_list);

  FUNC_1(&VAR_0->lock);
  if (FUNC_7(VAR_0))
   FUNC_6(VAR_0, VAR_0->net);

  if (VAR_1)
   FUNC_5(VAR_0, VAR_1, VAR_2);

  if (VAR_4)
   FUNC_3(VAR_0);
  else
   FUNC_4(VAR_0, VAR_3);
 } else if (VAR_1) {
  FUNC_5(VAR_0, VAR_1, VAR_2);
 }
}
