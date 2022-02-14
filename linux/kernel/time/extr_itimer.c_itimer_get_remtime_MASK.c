
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct hrtimer {int dummy; } ;
typedef scalar_t__ ktime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hrtimer*,int) ;
 scalar_t__ FUNC_1 (struct hrtimer*) ;
 struct timeval FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct timeval FUNC_3(struct hrtimer *VAR_1)
{
 ktime_t VAR_2 = FUNC_0(VAR_1, 1);






 if (FUNC_1(VAR_1)) {
  if (VAR_2 <= 0)
   VAR_2 = VAR_0;
 } else
  VAR_2 = 0;

 return FUNC_2(VAR_2);
}
