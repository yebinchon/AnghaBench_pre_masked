
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hrtimer {int state; } ;
typedef int s64 ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hrtimer*,scalar_t__) ;
 int FUNC_2 (struct hrtimer*,int) ;
 int FUNC_3 (struct hrtimer*) ;
 scalar_t__ FUNC_4 (struct hrtimer*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

u64 FUNC_9(struct hrtimer *VAR_2, ktime_t VAR_3, ktime_t VAR_4)
{
 u64 VAR_5 = 1;
 ktime_t VAR_6;

 VAR_6 = FUNC_6(VAR_3, FUNC_3(VAR_2));

 if (VAR_6 < 0)
  return 0;

 if (FUNC_0(VAR_2->state & VAR_0))
  return 0;

 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;

 if (FUNC_8(VAR_6 >= VAR_4)) {
  s64 VAR_7 = FUNC_7(VAR_4);

  VAR_5 = FUNC_5(VAR_6, VAR_7);
  FUNC_2(VAR_2, VAR_7 * VAR_5);
  if (FUNC_4(VAR_2) > VAR_3)
   return VAR_5;




  VAR_5++;
 }
 FUNC_1(VAR_2, VAR_4);

 return VAR_5;
}
