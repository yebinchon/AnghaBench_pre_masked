
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hrtimer_clock_base {int (* get_time ) () ;} ;
struct hrtimer {int dummy; } ;
typedef int ktime_t ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct hrtimer*,struct hrtimer_clock_base*,int const) ;
 int FUNC_1 (struct hrtimer*,int ,int ) ;
 int FUNC_2 (struct hrtimer*,int ,int const) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct hrtimer*,struct hrtimer_clock_base*,int) ;
 int FUNC_5 () ;
 struct hrtimer_clock_base* FUNC_6 (struct hrtimer*,struct hrtimer_clock_base*,int const) ;

__attribute__((used)) static int FUNC_7(struct hrtimer *VAR_2, ktime_t VAR_3,
        u64 VAR_4, const enum hrtimer_mode VAR_5,
        struct hrtimer_clock_base *VAR_6)
{
 struct hrtimer_clock_base *VAR_7;


 FUNC_4(VAR_2, VAR_6, 1);

 if (VAR_5 & VAR_1)
  VAR_3 = FUNC_3(VAR_3, VAR_6->get_time());

 VAR_3 = FUNC_2(VAR_2, VAR_3, VAR_5);

 FUNC_1(VAR_2, VAR_3, VAR_4);


 VAR_7 = FUNC_6(VAR_2, VAR_6, VAR_5 & VAR_0);

 return FUNC_0(VAR_2, VAR_7, VAR_5);
}
