
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_event_s {int fd; } ;
struct TYPE_2__ {scalar_t__ is_child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *,int *) ;
 TYPE_1__ VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_14 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct fpm_event_s *VAR_15, short VAR_16, void *VAR_17)
{
 char VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = VAR_15->fd;

 do {
  do {
   VAR_19 = FUNC_5(VAR_21, &VAR_18, 1);
  } while (VAR_19 == -1 && VAR_12 == VAR_1);

  if (VAR_19 <= 0) {
   if (VAR_19 < 0 && VAR_12 != VAR_0 && VAR_12 != VAR_2) {
    FUNC_6(VAR_10, "unable to read from the signal pipe");
   }
   return;
  }

  switch (VAR_18) {
   case 'C' :
    FUNC_6(VAR_7, "received SIGCHLD");




    FUNC_1(&VAR_11, 0, &VAR_14, ((void*)0));
    FUNC_0(&VAR_11, 0);
    break;
   case 'I' :
    FUNC_6(VAR_7, "received SIGINT");
    FUNC_6(VAR_9, "Terminating ...");
    FUNC_3(VAR_6, VAR_3);
    break;
   case 'T' :
    FUNC_6(VAR_7, "received SIGTERM");
    FUNC_6(VAR_9, "Terminating ...");
    FUNC_3(VAR_6, VAR_3);
    break;
   case 'Q' :
    FUNC_6(VAR_7, "received SIGQUIT");
    FUNC_6(VAR_9, "Finishing ...");
    FUNC_3(VAR_4, VAR_3);
    break;
   case '1' :
    FUNC_6(VAR_7, "received SIGUSR1");
    if (0 == FUNC_4(1)) {
     FUNC_6(VAR_9, "error log file re-opened");
    } else {
     FUNC_6(VAR_8, "unable to re-opened error log file");
    }

    VAR_20 = FUNC_2(1);
    if (VAR_20 == 0) {
     FUNC_6(VAR_9, "access log file re-opened");
    } else if (VAR_20 == -1) {
     FUNC_6(VAR_8, "unable to re-opened access log file");
    }


    break;
   case '2' :
    FUNC_6(VAR_7, "received SIGUSR2");
    FUNC_6(VAR_9, "Reloading in progress ...");
    FUNC_3(VAR_5, VAR_3);
    break;
  }

  if (VAR_13.is_child) {
   break;
  }
 } while (1);
 return;
}
