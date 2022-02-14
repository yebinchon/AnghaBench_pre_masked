
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_event_s {int dummy; } ;
struct TYPE_4__ {scalar_t__ systemd_interval; } ;
struct TYPE_3__ {scalar_t__ parent_pid; } ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fpm_event_s*,scalar_t__) ;
 int FUNC_1 (struct fpm_event_s*,int ,void (*) (struct fpm_event_s*,short,void*),int *) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,char*,unsigned long) ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(struct fpm_event_s *VAR_7, short VAR_8, void *VAR_9)
{
 static struct fpm_event_s VAR_10;

 if (VAR_6.parent_pid != FUNC_3()) {
  return;
 }

 if (VAR_8 == VAR_1) {
  FUNC_2();

  return;
 }

 if (0 > FUNC_4(0, "READY=1\n"
             "STATUS=Ready to handle connections\n"
             "MAINPID=%lu",
             (unsigned long) FUNC_3())) {
  FUNC_5(VAR_4, "failed to notify start to systemd");
 } else {
  FUNC_5(VAR_2, "have notify start to systemd");
 }


 if (VAR_5.systemd_interval > 0) {
  FUNC_1(&VAR_10, VAR_0, &FUNC_6, ((void*)0));
  FUNC_0(&VAR_10, VAR_5.systemd_interval);
  FUNC_5(VAR_3, "systemd monitor interval set to %dms", VAR_5.systemd_interval);
 } else {
  FUNC_5(VAR_3, "systemd monitor disabled");
 }
}
