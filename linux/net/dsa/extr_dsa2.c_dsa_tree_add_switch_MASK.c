
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {unsigned int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch_tree*) ;
 int FUNC_1 (struct dsa_switch_tree*) ;
 int FUNC_2 (struct dsa_switch_tree*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch_tree *VAR_1,
          struct dsa_switch *VAR_2)
{
 unsigned int VAR_3 = VAR_2->index;
 int VAR_4;

 if (VAR_1->ds[VAR_3])
  return -VAR_0;

 FUNC_0(VAR_1);
 VAR_1->ds[VAR_3] = VAR_2;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  VAR_1->ds[VAR_3] = ((void*)0);
  FUNC_1(VAR_1);
 }

 return VAR_4;
}
