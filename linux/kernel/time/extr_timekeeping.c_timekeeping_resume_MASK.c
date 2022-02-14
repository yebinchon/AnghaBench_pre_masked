
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timespec64 {int dummy; } ;
struct TYPE_4__ {scalar_t__ cycle_last; } ;
struct TYPE_6__ {scalar_t__ cycle_last; struct clocksource* clock; } ;
struct timekeeper {scalar_t__ ntp_error; TYPE_1__ tkr_raw; TYPE_3__ tkr_mono; } ;
struct clocksource {int dummy; } ;
struct TYPE_5__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timekeeper*,struct timespec64*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct clocksource*,scalar_t__) ;
 int FUNC_4 () ;
 struct timespec64 FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct timespec64*) ;
 int VAR_2 ;
 int FUNC_9 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (struct timekeeper*,int) ;
 scalar_t__ FUNC_11 (struct timespec64*,int *) ;
 struct timespec64 FUNC_12 (struct timespec64,int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void FUNC_17(void)
{
 struct timekeeper *VAR_7 = &VAR_6.timekeeper;
 struct clocksource *VAR_8 = VAR_7->tkr_mono.clock;
 unsigned long VAR_9;
 struct timespec64 VAR_10, VAR_11;
 u64 VAR_12, VAR_13;
 bool VAR_14 = 0;

 FUNC_8(&VAR_10);

 FUNC_1();
 FUNC_2();

 FUNC_6(&VAR_3, VAR_9);
 FUNC_15(&VAR_6.seq);
 VAR_12 = FUNC_13(&VAR_7->tkr_mono);
 VAR_13 = FUNC_3(VAR_8, VAR_12);
 if (VAR_13 > 0) {
  VAR_11 = FUNC_5(VAR_13);
  VAR_14 = 1;
 } else if (FUNC_11(&VAR_10, &VAR_4) > 0) {
  VAR_11 = FUNC_12(VAR_10, VAR_4);
  VAR_14 = 1;
 }

 if (VAR_14) {
  VAR_2 = 0;
  FUNC_0(VAR_7, &VAR_11);
 }


 VAR_7->tkr_mono.cycle_last = VAR_12;
 VAR_7->tkr_raw.cycle_last = VAR_12;

 VAR_7->ntp_error = 0;
 VAR_5 = 0;
 FUNC_10(VAR_7, VAR_1 | VAR_0);
 FUNC_16(&VAR_6.seq);
 FUNC_7(&VAR_3, VAR_9);

 FUNC_14();

 FUNC_9();
 FUNC_4();
}
