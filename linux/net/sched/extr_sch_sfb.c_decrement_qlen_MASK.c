
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct sfb_sched_data {int dummy; } ;


 int FUNC_0 (scalar_t__,int,struct sfb_sched_data*) ;
 scalar_t__ FUNC_1 (struct sk_buff const*,int) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_0, struct sfb_sched_data *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0);
 if (VAR_2)
  FUNC_0(VAR_2, 0, VAR_1);

 VAR_2 = FUNC_1(VAR_0, 1);
 if (VAR_2)
  FUNC_0(VAR_2, 1, VAR_1);
}
