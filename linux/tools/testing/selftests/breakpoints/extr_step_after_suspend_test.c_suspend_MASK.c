
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigevent {int dummy; } ;
struct TYPE_2__ {int tv_sec; } ;
struct itimerspec {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int ,struct itimerspec*,int *) ;
 scalar_t__ FUNC_9 (int,char*,scalar_t__) ;

void FUNC_10(void)
{
 int VAR_3;
 struct sigevent VAR_4 = {};
 int VAR_5;
 int VAR_6;
 struct itimerspec VAR_7 = {};

 if (FUNC_1() != 0)
  FUNC_3("Please run the test as root - Exiting.\n");

 VAR_3 = FUNC_4("/sys/power/state", VAR_1);
 if (VAR_3 < 0)
  FUNC_2(
   "open(\"/sys/power/state\") failed %s)\n",
   FUNC_5(VAR_2));

 VAR_5 = FUNC_7(VAR_0, 0);
 if (VAR_5 < 0)
  FUNC_2("timerfd_create() failed\n");

 VAR_7.it_value.tv_sec = 5;
 VAR_6 = FUNC_8(VAR_5, 0, &VAR_7, ((void*)0));
 if (VAR_6 < 0)
  FUNC_2("timerfd_settime() failed\n");

 if (FUNC_9(VAR_3, "mem", FUNC_6("mem")) != FUNC_6("mem"))
  FUNC_2("Failed to enter Suspend state\n");

 FUNC_0(VAR_5);
 FUNC_0(VAR_3);
}
