
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tms {scalar_t__ tms_cstime; scalar_t__ tms_cutime; scalar_t__ tms_stime; scalar_t__ tms_utime; } ;
struct timeval {int dummy; } ;
struct TYPE_4__ {scalar_t__ tms_cstime; scalar_t__ tms_cutime; scalar_t__ tms_stime; scalar_t__ tms_utime; } ;
struct TYPE_3__ {scalar_t__ tms_cstime; scalar_t__ tms_cutime; scalar_t__ tms_stime; scalar_t__ tms_utime; } ;
struct fpm_scoreboard_proc_s {size_t memory; TYPE_2__ cpu_accepted; TYPE_1__ last_request_cpu; int cpu_duration; int accepted; struct timeval tv; int duration; int request_stage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 struct fpm_scoreboard_proc_s* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct fpm_scoreboard_proc_s*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timeval*,int *,int *) ;
 int FUNC_5 (struct tms*) ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(void)
{
 struct fpm_scoreboard_proc_s *VAR_2;
 struct timeval VAR_3;



 size_t VAR_4 = FUNC_6(1);

 FUNC_0(&VAR_3);




 VAR_2 = FUNC_1(((void*)0), -1, 0);
 if (VAR_2 == ((void*)0)) {
  FUNC_7(VAR_1, "failed to acquire proc scoreboard");
  return;
 }
 VAR_2->request_stage = VAR_0;
 VAR_2->tv = VAR_3;
 FUNC_4(&VAR_3, &VAR_2->accepted, &VAR_2->duration);







 VAR_2->memory = VAR_4;
 FUNC_2(VAR_2);
 FUNC_3();
}
