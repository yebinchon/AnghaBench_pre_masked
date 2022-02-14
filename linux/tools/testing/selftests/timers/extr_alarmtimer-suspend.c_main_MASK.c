
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timer_t ;
struct TYPE_5__ {scalar_t__ sival_int; } ;
struct sigevent {int sigev_signo; TYPE_1__ sigev_value; int sigev_notify; } ;
struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_7__ {int tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_2__ it_interval; TYPE_3__ it_value; } ;
typedef int se ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sigevent*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,struct sigaction*,int *) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 TYPE_3__ VAR_10 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,struct sigevent*,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,struct itimerspec*,struct itimerspec*) ;

int FUNC_13(void)
{
 timer_t VAR_11;
 struct itimerspec VAR_12, VAR_13;
 struct sigevent VAR_14;
 struct sigaction VAR_15;
 int VAR_16 = VAR_3;


 FUNC_7(&VAR_15.sa_mask);
 VAR_15.sa_flags = 0;
 VAR_15.sa_handler = VAR_9;
 FUNC_6(VAR_16, &VAR_15, ((void*)0));


 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.sigev_notify = VAR_2;
 VAR_14.sigev_signo = VAR_16;
 VAR_14.sigev_value.sival_int = 0;

 for (VAR_6 = VAR_1;
   VAR_6 <= VAR_0;
   VAR_6++) {

  VAR_7 = 0;
  if (FUNC_10(VAR_6, &VAR_14, &VAR_11) == -1) {
   FUNC_5("timer_create failed, %s unsupported?\n",
     FUNC_1(VAR_6));
   break;
  }

  FUNC_0(VAR_6, &VAR_10);
  FUNC_5("Start time (%s): %ld:%ld\n", FUNC_1(VAR_6),
    VAR_10.tv_sec, VAR_10.tv_nsec);
  FUNC_5("Setting alarm for every %i seconds\n", VAR_4);
  VAR_12 = VAR_10;
  VAR_12 += VAR_4;
  VAR_12 = VAR_4;
  VAR_12 = 0;

  FUNC_12(VAR_11, VAR_5, &VAR_12, &VAR_13);

  while (VAR_7 < 5)
   FUNC_8(1);

  FUNC_5("Starting suspend loops\n");
  while (VAR_7 < 10) {
   int VAR_17;

   FUNC_8(3);
   VAR_17 = FUNC_9("echo mem > /sys/power/state");
   if (VAR_17)
    break;
  }
  FUNC_11(VAR_11);
 }
 if (VAR_8)
  return FUNC_2();
 return FUNC_3();
}
