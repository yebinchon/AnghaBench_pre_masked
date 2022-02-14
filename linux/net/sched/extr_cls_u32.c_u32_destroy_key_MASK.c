
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_u_knode {scalar_t__ refcnt; int pcpu_success; int pf; int exts; int ht_down; } ;
struct tc_u_hnode {scalar_t__ refcnt; int pcpu_success; int pf; int exts; int ht_down; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tc_u_knode*) ;
 struct tc_u_knode* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tc_u_knode *VAR_0, bool VAR_1)
{
 struct tc_u_hnode *VAR_2 = FUNC_2(VAR_0->ht_down);

 FUNC_3(&VAR_0->exts);
 FUNC_4(&VAR_0->exts);
 if (VAR_2 && --VAR_2->refcnt == 0)
  FUNC_1(VAR_2);
 FUNC_1(VAR_0);
 return 0;
}
