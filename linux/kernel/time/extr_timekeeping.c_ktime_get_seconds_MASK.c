
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct timekeeper {int ktime_sec; } ;
struct TYPE_2__ {struct timekeeper timekeeper; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

time64_t FUNC_1(void)
{
 struct timekeeper *VAR_2 = &VAR_1.timekeeper;

 FUNC_0(VAR_0);
 return VAR_2->ktime_sec;
}
