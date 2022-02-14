
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {int setup; int index; } ;


 int FUNC_0 (struct dsa_switch_tree*) ;
 int FUNC_1 (struct dsa_switch_tree*) ;
 int FUNC_2 (struct dsa_switch_tree*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch_tree *VAR_0)
{
 if (!VAR_0->setup)
  return;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 FUNC_0(VAR_0);

 FUNC_3("DSA: tree %d torn down\n", VAR_0->index);

 VAR_0->setup = 0;
}
