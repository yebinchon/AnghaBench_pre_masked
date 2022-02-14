
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int dummy; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sw_flow_actions**,int,void*,int,int) ;

int FUNC_2(struct sw_flow_actions **VAR_0, int VAR_1, void *VAR_2,
         int VAR_3, bool VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_5);
}
