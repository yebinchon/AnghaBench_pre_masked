
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct timekeeper {int xtime_sec; } ;
struct TYPE_2__ {struct timekeeper timekeeper; } ;


 TYPE_1__ VAR_0 ;

time64_t FUNC_0(void)
{
 struct timekeeper *VAR_1 = &VAR_0.timekeeper;

 return VAR_1->xtime_sec;
}
