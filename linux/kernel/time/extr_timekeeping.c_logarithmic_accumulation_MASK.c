
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ xtime_nsec; scalar_t__ shift; int cycle_last; } ;
struct TYPE_3__ {scalar_t__ xtime_nsec; int cycle_last; } ;
struct timekeeper {scalar_t__ cycle_interval; scalar_t__ xtime_interval; scalar_t__ raw_interval; scalar_t__ ntp_error; scalar_t__ ntp_tick; scalar_t__ xtime_remainder; scalar_t__ ntp_error_shift; int raw_sec; TYPE_2__ tkr_raw; TYPE_1__ tkr_mono; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct timekeeper*) ;

__attribute__((used)) static u64 FUNC_1(struct timekeeper *VAR_1, u64 VAR_2,
        u32 VAR_3, unsigned int *VAR_4)
{
 u64 VAR_5 = VAR_1->cycle_interval << VAR_3;
 u64 VAR_6;


 if (VAR_2 < VAR_5)
  return VAR_2;


 VAR_2 -= VAR_5;
 VAR_1->tkr_mono.cycle_last += VAR_5;
 VAR_1->tkr_raw.cycle_last += VAR_5;

 VAR_1->tkr_mono.xtime_nsec += VAR_1->xtime_interval << VAR_3;
 *VAR_4 |= FUNC_0(VAR_1);


 VAR_1->tkr_raw.xtime_nsec += VAR_1->raw_interval << VAR_3;
 VAR_6 = (u64)VAR_0 << VAR_1->tkr_raw.shift;
 while (VAR_1->tkr_raw.xtime_nsec >= VAR_6) {
  VAR_1->tkr_raw.xtime_nsec -= VAR_6;
  VAR_1->raw_sec++;
 }


 VAR_1->ntp_error += VAR_1->ntp_tick << VAR_3;
 VAR_1->ntp_error -= (VAR_1->xtime_interval + VAR_1->xtime_remainder) <<
      (VAR_1->ntp_error_shift + VAR_3);

 return VAR_2;
}
