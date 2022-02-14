
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_match {int dummy; } ;
struct sw_flow_key {int dummy; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct nlattr const*,struct sw_flow_match*,int,int,int) ;
 int FUNC_1 (struct sw_flow_match*,struct sw_flow_key*,int,int *) ;

__attribute__((used)) static bool FUNC_2(const struct nlattr *VAR_0, bool VAR_1,
    bool VAR_2, bool VAR_3)
{
 struct sw_flow_match VAR_4;
 struct sw_flow_key VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_4, &VAR_5, 1, ((void*)0));
 VAR_6 = FUNC_0(VAR_0, &VAR_4, VAR_1,
          VAR_2, VAR_3);
 return !VAR_6;
}
