
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct fpm_event_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ parent_pid; int heartbeat; } ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (struct fpm_event_s*,int ) ;
 int FUNC_3 (struct fpm_event_s*,int ,void (*) (struct fpm_event_s*,short,void*),int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (struct timeval*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*,int ) ;

void FUNC_7(struct fpm_event_s *VAR_5, short VAR_6, void *VAR_7)
{
 static struct fpm_event_s VAR_8;
 struct timeval VAR_9;

 if (VAR_4.parent_pid != FUNC_5()) {
  return;
 }

 if (VAR_6 == VAR_1) {
  FUNC_1(&VAR_9);
  FUNC_4(&VAR_9);
  return;
 }


 VAR_4.heartbeat = FUNC_0(VAR_4.heartbeat, VAR_2);


 FUNC_6(VAR_3, "heartbeat have been set up with a timeout of %dms", VAR_4.heartbeat);
 FUNC_3(&VAR_8, VAR_0, &FUNC_7, ((void*)0));
 FUNC_2(&VAR_8, VAR_4.heartbeat);
}
