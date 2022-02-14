
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char* time_t ;
struct timeval {char* tv_sec; scalar_t__ tv_usec; } ;
struct fpm_worker_pool_s {TYPE_1__* config; int scoreboard; } ;
struct fpm_child_s {struct fpm_worker_pool_s* wp; int started; int scoreboard_i; int (* tracer ) (struct fpm_child_s*) ;scalar_t__ idle_kill; } ;
typedef int pid_t ;
typedef int buf ;
struct TYPE_6__ {int emergency_restart_threshold; char* emergency_restart_interval; } ;
struct TYPE_5__ {scalar_t__ is_child; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct fpm_child_s*,int) ;
 struct fpm_child_s* FUNC_7 (int) ;
 int FUNC_8 (struct fpm_child_s*) ;
 int FUNC_9 (struct fpm_worker_pool_s*,int,int,int ) ;
 int FUNC_10 (struct timeval*) ;
 TYPE_3__ VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 char** VAR_15 ;
 char** VAR_16 ;
 int FUNC_15 (char*,int,char*,int,...) ;
 int FUNC_16 (struct fpm_child_s*) ;
 int FUNC_17 (struct timeval*,int *,struct timeval*) ;
 int FUNC_18 (int,int*,int) ;
 int FUNC_19 (int,char*,int,...) ;

void FUNC_20()
{
 int VAR_17;
 pid_t VAR_18;
 struct fpm_child_s *VAR_19;

 while ( (VAR_18 = FUNC_18(-1, &VAR_17, VAR_6 | VAR_7)) > 0) {
  char VAR_20[128];
  int VAR_21 = VAR_10;
  int VAR_22 = 1;

  VAR_19 = FUNC_7(VAR_18);

  if (FUNC_2(VAR_17)) {

   FUNC_15(VAR_20, sizeof(VAR_20), "with code %d", FUNC_1(VAR_17));




   if (VAR_19 && VAR_19->idle_kill) {
    VAR_22 = 0;
   }

   if (FUNC_1(VAR_17) != VAR_0) {
    VAR_21 = VAR_11;
   }

  } else if (FUNC_3(VAR_17)) {
   const char *VAR_23 = VAR_15[FUNC_5(VAR_17)];



   const char* VAR_24 = "";


   if (VAR_23 == ((void*)0)) {
    VAR_23 = "";
   }

   FUNC_15(VAR_20, sizeof(VAR_20), "on signal %d (%s%s)", FUNC_5(VAR_17), VAR_23, VAR_24);




   if (VAR_19 && VAR_19->idle_kill && FUNC_5(VAR_17) == VAR_4) {
    VAR_22 = 0;
   }

   if (FUNC_5(VAR_17) != VAR_4) {
    VAR_21 = VAR_11;
   }
  } else if (FUNC_4(VAR_17)) {

   FUNC_19(VAR_10, "child %d stopped for tracing", (int) VAR_18);

   if (VAR_19 && VAR_19->tracer) {
    VAR_19->tracer(VAR_19);
   }

   continue;
  }

  if (VAR_19) {
   struct fpm_worker_pool_s *VAR_25 = VAR_19->wp;
   struct timeval VAR_26, VAR_27;

   FUNC_8(VAR_19);

   FUNC_14(VAR_25->scoreboard, VAR_19->scoreboard_i);

   FUNC_10(&VAR_26);

   FUNC_17(&VAR_26, &VAR_19->started, &VAR_27);

   if (VAR_22) {
    if (!FUNC_12()) {
     VAR_21 = VAR_9;
    }
    FUNC_19(VAR_21, "[pool %s] child %d exited %s after %ld.%06d seconds from start", VAR_19->wp->config->name, (int) VAR_18, VAR_20, VAR_27, (int) VAR_27);
   } else {
    FUNC_19(VAR_9, "[pool %s] child %d has been killed by the process management after %ld.%06d seconds from start", VAR_19->wp->config->name, (int) VAR_18, VAR_27, (int) VAR_27);
   }

   FUNC_6(VAR_19, 1 );

   FUNC_13();

   if (VAR_16 && (FUNC_5(VAR_17) == VAR_5 || FUNC_5(VAR_17) == VAR_3)) {
    time_t VAR_28 = VAR_26;
    int VAR_29 = 1;
    int VAR_30;

    VAR_16[VAR_12++] = VAR_28;

    if (VAR_12 == VAR_13.emergency_restart_threshold) {
     VAR_12 = 0;
    }

    for (VAR_30 = 0; VAR_30 < VAR_13.emergency_restart_threshold; VAR_30++) {
     if (VAR_28 - VAR_16[VAR_30] > VAR_13.emergency_restart_interval) {
      VAR_29 = 0;
      break;
     }
    }

    if (VAR_29) {

     FUNC_19(VAR_11, "failed processes threshold (%d in %d sec) is reached, initiating reload", VAR_13.emergency_restart_threshold, VAR_13.emergency_restart_interval);

     FUNC_11(VAR_2, VAR_1);
    }
   }

   if (VAR_22) {
    FUNC_9(VAR_25, 1 , 1, 0);

    if (VAR_14.is_child) {
     break;
    }
   }
  } else {
   FUNC_19(VAR_8, "oops, unknown child (%d) exited %s. Please open a bug report (https://bugs.php.net).", VAR_18, VAR_20);
  }
 }
}
