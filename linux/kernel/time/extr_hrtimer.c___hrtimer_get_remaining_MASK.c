
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hrtimer const*) ;
 int FUNC_2 (struct hrtimer const*) ;
 int FUNC_3 (struct hrtimer const*,unsigned long*) ;
 int FUNC_4 (struct hrtimer const*,unsigned long*) ;

ktime_t FUNC_5(const struct hrtimer *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;
 ktime_t VAR_4;

 FUNC_3(VAR_1, &VAR_3);
 if (FUNC_0(VAR_0) && VAR_2)
  VAR_4 = FUNC_2(VAR_1);
 else
  VAR_4 = FUNC_1(VAR_1);
 FUNC_4(VAR_1, &VAR_3);

 return VAR_4;
}
