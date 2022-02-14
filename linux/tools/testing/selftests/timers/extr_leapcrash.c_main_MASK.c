
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int tv_sec; } ;
struct timex {int status; scalar_t__ modes; TYPE_1__ time; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct timespec {int tv_sec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct timeval*,int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_6 ;

int FUNC_10(void)
{
 struct timex VAR_7;
 struct timespec VAR_8;
 time_t VAR_9;
 int VAR_10 = 0;

 FUNC_7(VAR_6, ((void*)0));

 FUNC_9(VAR_2, VAR_5);
 FUNC_9(VAR_3, VAR_5);
 FUNC_6("This runs for a few minutes. Press ctrl-c to stop\n");

 FUNC_1();



 FUNC_2(VAR_1, &VAR_8);


 VAR_9 = VAR_8.tv_sec;
 VAR_9 += 86400 - (VAR_9 % 86400);

 for (VAR_10 = 0; VAR_10 < 20; VAR_10++) {
  struct timeval VAR_11;



  VAR_11.tv_sec = VAR_9 - 2;
  VAR_11.tv_usec = 0;
  if (FUNC_8(&VAR_11, ((void*)0))) {
   FUNC_6("Error: You're likely not running with proper (ie: root) permissions\n");
   return FUNC_4();
  }
  VAR_7.modes = 0;
  FUNC_0(&VAR_7);


  while (VAR_7.time.tv_sec < VAR_9 + 1) {

   VAR_7.modes = VAR_0;
   VAR_7.status = VAR_4;
   FUNC_0(&VAR_7);
  }
  FUNC_1();
  FUNC_6(".");
  FUNC_3(VAR_6);
 }
 FUNC_6("[OK]\n");
 return FUNC_5();
}
