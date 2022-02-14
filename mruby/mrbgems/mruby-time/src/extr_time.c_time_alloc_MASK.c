
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct mrb_time {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef enum mrb_timezone { ____Placeholder_mrb_timezone } mrb_timezone ;


 int FUNC_0 (int *,int ,int *) ;
 struct mrb_time* FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static struct mrb_time*
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1, mrb_value VAR_2, enum mrb_timezone VAR_3)
{
  time_t VAR_4, VAR_5;

  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
  VAR_5 += FUNC_0(VAR_0, VAR_2, ((void*)0));

  return FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3);
}
