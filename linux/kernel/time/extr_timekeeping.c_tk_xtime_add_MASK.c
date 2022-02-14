
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {int xtime_nsec; int shift; } ;
struct timekeeper {TYPE_1__ tkr_mono; int xtime_sec; } ;


 int FUNC_0 (struct timekeeper*) ;

__attribute__((used)) static void FUNC_1(struct timekeeper *VAR_0, const struct timespec64 *VAR_1)
{
 VAR_0->xtime_sec += VAR_1->tv_sec;
 VAR_0->tkr_mono.xtime_nsec += (u64)VAR_1->tv_nsec << VAR_0->tkr_mono.shift;
 FUNC_0(VAR_0);
}
