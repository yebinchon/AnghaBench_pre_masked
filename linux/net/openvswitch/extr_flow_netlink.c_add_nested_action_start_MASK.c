
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int actions_len; } ;


 int FUNC_0 (struct sw_flow_actions**,int,int *,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct sw_flow_actions **VAR_0,
       int VAR_1, bool VAR_2)
{
 int VAR_3 = (*VAR_0)->actions_len;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, ((void*)0), 0, VAR_2);
 if (VAR_4)
  return VAR_4;

 return VAR_3;
}
