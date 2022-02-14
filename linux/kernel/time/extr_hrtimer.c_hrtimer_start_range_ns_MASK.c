
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hrtimer_clock_base {int dummy; } ;
struct hrtimer {int is_hard; int is_soft; } ;
typedef int ktime_t ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct hrtimer*,int ,int ,int const,struct hrtimer_clock_base*) ;
 int FUNC_3 (struct hrtimer*,int) ;
 struct hrtimer_clock_base* FUNC_4 (struct hrtimer*,unsigned long*) ;
 int FUNC_5 (struct hrtimer*,unsigned long*) ;

void FUNC_6(struct hrtimer *VAR_3, ktime_t VAR_4,
       u64 VAR_5, const enum hrtimer_mode VAR_6)
{
 struct hrtimer_clock_base *VAR_7;
 unsigned long VAR_8;






 if (!FUNC_0(VAR_0))
  FUNC_1(!(VAR_6 & VAR_2) ^ !VAR_3->is_soft);
 else
  FUNC_1(!(VAR_6 & VAR_1) ^ !VAR_3->is_hard);

 VAR_7 = FUNC_4(VAR_3, &VAR_8);

 if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7))
  FUNC_3(VAR_3, 1);

 FUNC_5(VAR_3, &VAR_8);
}
