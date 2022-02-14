
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timer_t ;
typedef int time_t ;
struct TYPE_8__ {int tv_sec; int tv_usec; } ;
struct timex {scalar_t__ status; TYPE_4__ time; int tai; void* modes; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_5__ {scalar_t__ sival_int; } ;
struct sigevent {int sigev_signo; TYPE_1__ sigev_value; int sigev_notify; } ;
struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct itimerspec {TYPE_3__ it_interval; TYPE_2__ it_value; } ;
typedef int se ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct timespec*) ;
 scalar_t__ FUNC_4 (int ,int ,struct timespec*,int *) ;
 char* FUNC_5 (int*) ;
 int FUNC_6 (int*,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char**,char*) ;
 int VAR_13 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct sigevent*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct timeval*,int *) ;
 int FUNC_14 (int,struct sigaction*,int *) ;
 int VAR_16 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;
 char* FUNC_19 (int) ;
 int FUNC_20 (int ,struct sigevent*,int *) ;
 int FUNC_21 (int ,int ,struct itimerspec*,int *) ;

int FUNC_22(int VAR_17, char **VAR_18)
{
 timer_t VAR_19;
 struct itimerspec VAR_20;
 struct sigevent VAR_21;
 struct sigaction VAR_22;
 int VAR_23 = VAR_8;
 int VAR_24 = 1;
 int VAR_25 = 0;
 int VAR_26 = 1;
 int VAR_27 = 10;
 int VAR_28;


 while ((VAR_28 = FUNC_8(VAR_17, VAR_18, "sti:")) != -1) {
  switch (VAR_28) {
  case 'w':
   FUNC_12("Only setting leap-flag, not changing time. It could take up to a day for leap to trigger.\n");
   VAR_24 = 0;
   break;
  case 'i':
   VAR_27 = FUNC_1(VAR_15);
   break;
  case 't':
   VAR_25 = 1;
   break;
  default:
   FUNC_12("Usage: %s [-w] [-i <iterations>]\n", VAR_18[0]);
   FUNC_12("	-w: Set flag and wait for leap second each iteration");
   FUNC_12("	    (default sets time to right before leapsecond)\n");
   FUNC_12("	-i: Number of iterations (-1 = infinite, default is 10)\n");
   FUNC_12("	-t: Print TAI time\n");
   FUNC_7(-1);
  }
 }


 if (VAR_25) {
  struct timespec VAR_29;

  if (FUNC_3(VAR_3, &VAR_29)) {
   FUNC_12("System doesn't support CLOCK_TAI\n");
   FUNC_9();
  }
 }

 FUNC_16(VAR_6, VAR_13);
 FUNC_16(VAR_7, VAR_13);


 FUNC_15(&VAR_22.sa_mask);
 VAR_22.sa_flags = 0;
 VAR_22.sa_handler = VAR_16;
 FUNC_14(VAR_23, &VAR_22, ((void*)0));

 if (VAR_27 < 0)
  FUNC_12("This runs continuously. Press ctrl-c to stop\n");
 else
  FUNC_12("Running for %i iterations. Press ctrl-c to stop\n", VAR_27);

 FUNC_12("\n");
 while (1) {
  int VAR_30;
  struct timespec VAR_31;
  struct timex VAR_32;
  time_t VAR_33;


  FUNC_3(VAR_2, &VAR_31);


  VAR_14 = VAR_31.tv_sec;
  VAR_14 += 86400 - (VAR_14 % 86400);

  if (VAR_24) {
   struct timeval VAR_34;

   VAR_34.tv_sec = VAR_14 - 10;
   VAR_34.tv_usec = 0;
   FUNC_13(&VAR_34, ((void*)0));
   FUNC_12("Setting time to %s", FUNC_5(&VAR_34.tv_sec));
  }


  FUNC_2();


  VAR_32.modes = VAR_0;
  if (VAR_26)
   VAR_32.status = VAR_10;
  else
   VAR_32.status = VAR_9;
  VAR_30 = FUNC_0(&VAR_32);
  if (VAR_30 < 0) {
   FUNC_12("Error: Problem setting STA_INS/STA_DEL!: %s\n",
       FUNC_19(VAR_30));
   return FUNC_9();
  }


  VAR_32.modes = 0;
  VAR_30 = FUNC_0(&VAR_32);
  if (VAR_32.status != VAR_10 && VAR_32.status != VAR_9) {
   FUNC_12("Error: STA_INS/STA_DEL not set!: %s\n",
       FUNC_19(VAR_30));
   return FUNC_9();
  }

  if (VAR_25) {
   FUNC_12("Using TAI time,"
    " no inconsistencies should be seen!\n");
  }

  FUNC_12("Scheduling leap second for %s", FUNC_5(&VAR_14));


  FUNC_12("Setting timer for %ld -  %s", VAR_14, FUNC_5(&VAR_14));
  FUNC_11(&VAR_21, 0, sizeof(VAR_21));
  VAR_21.sigev_notify = VAR_5;
  VAR_21.sigev_signo = VAR_23;
  VAR_21.sigev_value.sival_int = 0;
  if (FUNC_20(VAR_2, &VAR_21, &VAR_19) == -1) {
   FUNC_12("Error: timer_create failed\n");
   return FUNC_9();
  }
  VAR_20 = VAR_14;
  VAR_20 = 0;
  VAR_20 = 0;
  VAR_20 = 0;
  FUNC_21(VAR_19, VAR_11, &VAR_20, ((void*)0));


  VAR_31.tv_sec = VAR_14 - 3;
  VAR_31.tv_nsec = 0;


  while (FUNC_4(VAR_2, VAR_11, &VAR_31, ((void*)0)))
   FUNC_12("Something woke us up, returning to sleep\n");


  VAR_32.modes = 0;
  VAR_30 = FUNC_0(&VAR_32);
  if (VAR_32.status != VAR_10 && VAR_32.status != VAR_9) {
   FUNC_12("Something cleared STA_INS/STA_DEL, setting it again.\n");
   VAR_32.modes = VAR_0;
   if (VAR_26)
    VAR_32.status = VAR_10;
   else
    VAR_32.status = VAR_9;
   VAR_30 = FUNC_0(&VAR_32);
  }


  VAR_33 = VAR_32.time.tv_sec;
  while (VAR_33 < VAR_14 + 2) {
   char VAR_35[26];
   struct timespec VAR_36;
   int VAR_37;

   VAR_32.modes = 0;
   VAR_37 = FUNC_0(&VAR_32);

   if (VAR_25) {
    FUNC_3(VAR_3, &VAR_36);
    FUNC_12("%ld sec, %9ld ns\t%s\n",
      VAR_36.tv_sec,
      VAR_36.tv_nsec,
      FUNC_19(VAR_37));
   } else {
    FUNC_6(&VAR_32.time.tv_sec, VAR_35);
    VAR_35[FUNC_17(VAR_35)-1] = 0;

    FUNC_12("%s + %6ld us (%i)\t%s\n",
      VAR_35,
      VAR_32.time.tv_usec,
      VAR_32.tai,
      FUNC_19(VAR_37));
   }
   VAR_33 = VAR_32.time.tv_sec;

   VAR_31.tv_sec = 0;
   VAR_31.tv_nsec = VAR_4 / 2;
   FUNC_4(VAR_1, 0, &VAR_31, ((void*)0));
  }

  VAR_26 = !VAR_26;


  FUNC_18();

  FUNC_12("Leap complete\n");
  if (VAR_12) {
   FUNC_12("Errors observed\n");
   FUNC_2();
   return FUNC_9();
  }
  FUNC_12("\n");
  if ((VAR_27 != -1) && !(--VAR_27))
   break;
 }

 FUNC_2();
 return FUNC_10();
}
