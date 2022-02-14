
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hrtimer_clock_base {scalar_t__ cpu_base; } ;
struct hrtimer {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct hrtimer*,struct hrtimer_clock_base*,int ,int) ;
 int FUNC_1 (struct hrtimer*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct hrtimer*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline int
FUNC_4(struct hrtimer *VAR_2, struct hrtimer_clock_base *VAR_3, bool VAR_4)
{
 if (FUNC_2(VAR_2)) {
  u8 VAR_5 = VAR_2->state;
  int VAR_6;
  FUNC_1(VAR_2);
  VAR_6 = VAR_3->cpu_base == FUNC_3(&VAR_1);

  if (!VAR_4)
   VAR_5 = VAR_0;

  FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6);
  return 1;
 }
 return 0;
}
