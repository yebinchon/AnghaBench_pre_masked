
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int xtime_nsec; int shift; int mult; int cycle_last; int mask; struct clocksource* clock; } ;
struct TYPE_4__ {int xtime_nsec; int shift; int mult; int cycle_last; int mask; struct clocksource* clock; } ;
struct timekeeper {int cycle_interval; int xtime_interval; int xtime_remainder; int raw_interval; int ntp_error_shift; int ntp_tick; scalar_t__ skip_second_overflow; scalar_t__ ntp_err_mult; TYPE_1__ tkr_raw; TYPE_2__ tkr_mono; scalar_t__ ntp_error; int cs_was_changed_seq; } ;
struct clocksource {int shift; int mult; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct timekeeper *VAR_2, struct clocksource *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5, VAR_6;
 struct clocksource *VAR_7;

 ++VAR_2->cs_was_changed_seq;
 VAR_7 = VAR_2->tkr_mono.clock;
 VAR_2->tkr_mono.clock = VAR_3;
 VAR_2->tkr_mono.mask = VAR_3->mask;
 VAR_2->tkr_mono.cycle_last = FUNC_1(&VAR_2->tkr_mono);

 VAR_2->tkr_raw.clock = VAR_3;
 VAR_2->tkr_raw.mask = VAR_3->mask;
 VAR_2->tkr_raw.cycle_last = VAR_2->tkr_mono.cycle_last;


 VAR_5 = VAR_0;
 VAR_5 <<= VAR_3->shift;
 VAR_6 = VAR_5;
 VAR_5 += VAR_3->mult/2;
 FUNC_0(VAR_5, VAR_3->mult);
 if (VAR_5 == 0)
  VAR_5 = 1;

 VAR_4 = (u64) VAR_5;
 VAR_2->cycle_interval = VAR_4;


 VAR_2->xtime_interval = VAR_4 * VAR_3->mult;
 VAR_2->xtime_remainder = VAR_6 - VAR_2->xtime_interval;
 VAR_2->raw_interval = VAR_4 * VAR_3->mult;


 if (VAR_7) {
  int VAR_8 = VAR_3->shift - VAR_7->shift;
  if (VAR_8 < 0) {
   VAR_2->tkr_mono.xtime_nsec >>= -VAR_8;
   VAR_2->tkr_raw.xtime_nsec >>= -VAR_8;
  } else {
   VAR_2->tkr_mono.xtime_nsec <<= VAR_8;
   VAR_2->tkr_raw.xtime_nsec <<= VAR_8;
  }
 }

 VAR_2->tkr_mono.shift = VAR_3->shift;
 VAR_2->tkr_raw.shift = VAR_3->shift;

 VAR_2->ntp_error = 0;
 VAR_2->ntp_error_shift = VAR_1 - VAR_3->shift;
 VAR_2->ntp_tick = VAR_6 << VAR_2->ntp_error_shift;






 VAR_2->tkr_mono.mult = VAR_3->mult;
 VAR_2->tkr_raw.mult = VAR_3->mult;
 VAR_2->ntp_err_mult = 0;
 VAR_2->skip_second_overflow = 0;
}
