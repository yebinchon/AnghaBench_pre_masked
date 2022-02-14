
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct timekeeper {int xtime_sec; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 TYPE_1__ VAR_1 ;

time64_t FUNC_3(void)
{
 struct timekeeper *VAR_2 = &VAR_1.timekeeper;
 time64_t VAR_3;
 unsigned int VAR_4;

 if (FUNC_0(VAR_0))
  return VAR_2->xtime_sec;

 do {
  VAR_4 = FUNC_1(&VAR_1.seq);
  VAR_3 = VAR_2->xtime_sec;

 } while (FUNC_2(&VAR_1.seq, VAR_4));

 return VAR_3;
}
