
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timer_t ;
struct TYPE_5__ {scalar_t__ sival_int; } ;
struct sigevent {TYPE_1__ sigev_value; int sigev_signo; int sigev_notify; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct itimerspec {TYPE_2__ it_interval; TYPE_3__ it_value; } ;
typedef int se ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,TYPE_3__*) ;
 char* FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct sigevent*,int ,int) ;
 int FUNC_3 (char*,char*,...) ;
 TYPE_3__ VAR_7 ;
 int FUNC_4 (int,struct sigevent*,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int,struct itimerspec*,struct itimerspec*) ;

int FUNC_6(int VAR_9, int VAR_10, int VAR_11, timer_t *VAR_12)
{
 struct sigevent VAR_13;
 struct itimerspec VAR_14, VAR_15;
 int VAR_16;


 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.sigev_notify = VAR_2;
 VAR_13.sigev_signo = VAR_3;
 VAR_13.sigev_value.sival_int = 0;

 VAR_6 = 0;
 VAR_5 = 0;
 VAR_8 = 0;

 VAR_16 = FUNC_4(VAR_9, &VAR_13, VAR_12);
 if (VAR_16) {
  if ((VAR_9 == VAR_1) ||
      (VAR_9 == VAR_0)) {
   FUNC_3("%-22s %s missing CAP_WAKE_ALARM?    : [UNSUPPORTED]\n",
     FUNC_1(VAR_9),
     VAR_10 ? "ABSTIME":"RELTIME");

   return 1;
  }
  FUNC_3("%s - timer_create() failed\n", FUNC_1(VAR_9));
  return -1;
 }

 FUNC_0(VAR_9, &VAR_7);
 if (VAR_10) {
  VAR_14 = VAR_7;
  VAR_14 += VAR_4;
 } else {
  VAR_14 = VAR_4;
  VAR_14 = 0;
 }
 VAR_14 = VAR_11;
 VAR_14 = 0;

 VAR_16 = FUNC_5(*VAR_12, VAR_10, &VAR_14, &VAR_15);
 if (VAR_16) {
  FUNC_3("%s - timer_settime() failed\n", FUNC_1(VAR_9));
  return -1;
 }

 return 0;
}
