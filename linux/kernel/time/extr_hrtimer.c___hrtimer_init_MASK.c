
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {int * clock_base; } ;
struct hrtimer {int is_soft; int is_hard; int node; int * base; } ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;
typedef scalar_t__ clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hrtimer*,int ,int) ;
 struct hrtimer_cpu_base* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hrtimer *VAR_8, clockid_t VAR_9,
      enum hrtimer_mode VAR_10)
{
 bool VAR_11 = !!(VAR_10 & VAR_6);
 struct hrtimer_cpu_base *VAR_12;
 int VAR_13;







 if (FUNC_0(VAR_2) && !(VAR_10 & VAR_4))
  VAR_11 = 1;

 FUNC_2(VAR_8, 0, sizeof(struct hrtimer));

 VAR_12 = FUNC_3(&VAR_7);






 if (VAR_9 == VAR_1 && VAR_10 & VAR_5)
  VAR_9 = VAR_0;

 VAR_13 = VAR_11 ? VAR_3 / 2 : 0;
 VAR_13 += FUNC_1(VAR_9);
 VAR_8->is_soft = VAR_11;
 VAR_8->is_hard = !VAR_11;
 VAR_8->base = &VAR_12->clock_base[VAR_13];
 FUNC_4(&VAR_8->node);
}
