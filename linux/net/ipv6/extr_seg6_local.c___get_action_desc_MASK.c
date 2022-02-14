
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_action_desc {int action; } ;


 int FUNC_0 (struct seg6_action_desc*) ;
 struct seg6_action_desc* VAR_0 ;

__attribute__((used)) static struct seg6_action_desc *FUNC_1(int VAR_1)
{
 struct seg6_action_desc *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->action == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
