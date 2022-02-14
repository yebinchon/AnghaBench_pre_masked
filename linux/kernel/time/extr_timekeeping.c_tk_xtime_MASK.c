
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {long tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int xtime_nsec; int shift; } ;
struct timekeeper {TYPE_1__ tkr_mono; int xtime_sec; } ;



__attribute__((used)) static inline struct timespec64 FUNC_0(const struct timekeeper *VAR_0)
{
 struct timespec64 VAR_1;

 VAR_1.tv_sec = VAR_0->xtime_sec;
 VAR_1.tv_nsec = (long)(VAR_0->tkr_mono.xtime_nsec >> VAR_0->tkr_mono.shift);
 return VAR_1;
}
