
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*) ;

__attribute__((used)) static bool FUNC_1(struct dsa_switch_tree *VAR_1)
{
 struct dsa_switch *VAR_2;
 bool VAR_3 = 1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1->ds[VAR_4];
  if (!VAR_2)
   continue;

  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3)
   break;
 }

 return VAR_3;
}
