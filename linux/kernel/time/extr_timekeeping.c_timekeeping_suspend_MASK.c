
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_3__ {int cycle_last; struct clocksource* clock; } ;
struct timekeeper {TYPE_1__ tkr_mono; } ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct clocksource*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timekeeper*) ;
 int VAR_1 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct timespec64*) ;
 int VAR_2 ;
 int FUNC_8 () ;
 int VAR_3 ;
 int FUNC_9 (struct timekeeper*) ;
 struct timespec64 VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct timekeeper*,int ) ;
 struct timespec64 FUNC_11 (struct timespec64,struct timespec64) ;
 struct timespec64 FUNC_12 (struct timespec64,struct timespec64) ;
 TYPE_2__ VAR_6 ;
 struct timespec64 FUNC_13 (struct timekeeper*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(void)
{
 struct timekeeper *VAR_7 = &VAR_6.timekeeper;
 unsigned long VAR_8;
 struct timespec64 VAR_9, VAR_10;
 static struct timespec64 VAR_11;
 struct clocksource *VAR_12;
 u64 VAR_13;

 FUNC_7(&VAR_4);






 if (VAR_4.tv_sec || VAR_4.tv_nsec)
  VAR_1 = 1;

 VAR_2 = 1;

 FUNC_5(&VAR_3, VAR_8);
 FUNC_14(&VAR_6.seq);
 FUNC_9(VAR_7);
 VAR_5 = 1;






 VAR_12 = VAR_7->tkr_mono.clock;
 VAR_13 = VAR_7->tkr_mono.cycle_last;
 FUNC_2(VAR_12, VAR_13);

 if (VAR_1) {






  VAR_9 = FUNC_12(FUNC_13(VAR_7), VAR_4);
  VAR_10 = FUNC_12(VAR_9, VAR_11);
  if (FUNC_0(VAR_10.tv_sec) >= 2) {




   VAR_11 = VAR_9;
  } else {

   VAR_4 =
    FUNC_11(VAR_4, VAR_10);
  }
 }

 FUNC_10(VAR_7, VAR_0);
 FUNC_4(VAR_7);
 FUNC_15(&VAR_6.seq);
 FUNC_6(&VAR_3, VAR_8);

 FUNC_8();
 FUNC_3();
 FUNC_1();

 return 0;
}
