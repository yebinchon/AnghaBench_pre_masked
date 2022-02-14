
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {int setup; int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch_tree*) ;
 int FUNC_1 (struct dsa_switch_tree*) ;
 int FUNC_2 (struct dsa_switch_tree*) ;
 int FUNC_3 (struct dsa_switch_tree*) ;
 int FUNC_4 (struct dsa_switch_tree*) ;
 int FUNC_5 (struct dsa_switch_tree*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct dsa_switch_tree *VAR_1)
{
 bool VAR_2;
 int VAR_3;

 if (VAR_1->setup) {
  FUNC_6("DSA: tree %d already setup! Disjoint trees?\n",
         VAR_1->index);
  return -VAR_0;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  goto teardown_default_cpu;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto teardown_switches;

 VAR_1->setup = 1;

 FUNC_7("DSA: tree %d setup\n", VAR_1->index);

 return 0;

teardown_switches:
 FUNC_5(VAR_1);
teardown_default_cpu:
 FUNC_4(VAR_1);

 return VAR_3;
}
