
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int xtime_nsec; int shift; } ;
struct TYPE_4__ {int xtime_nsec; int shift; } ;
struct timekeeper {int raw_sec; TYPE_1__ tkr_raw; int xtime_sec; TYPE_2__ tkr_mono; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct timekeeper *VAR_1)
{
 while (VAR_1->tkr_mono.xtime_nsec >= ((u64)VAR_0 << VAR_1->tkr_mono.shift)) {
  VAR_1->tkr_mono.xtime_nsec -= (u64)VAR_0 << VAR_1->tkr_mono.shift;
  VAR_1->xtime_sec++;
 }
 while (VAR_1->tkr_raw.xtime_nsec >= ((u64)VAR_0 << VAR_1->tkr_raw.shift)) {
  VAR_1->tkr_raw.xtime_nsec -= (u64)VAR_0 << VAR_1->tkr_raw.shift;
  VAR_1->raw_sec++;
 }
}
