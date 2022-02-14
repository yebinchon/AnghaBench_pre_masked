
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct fpm_event_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ parent_pid; scalar_t__ is_child; } ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct fpm_event_s*,int ) ;
 int FUNC_2 (struct fpm_event_s*,int ,void (*) (struct fpm_event_s*,short,void*),int *) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct timeval*) ;
 scalar_t__ FUNC_5 () ;

void FUNC_6(struct fpm_event_s *VAR_4, short VAR_5, void *VAR_6)
{
 static struct fpm_event_s VAR_7;
 struct timeval VAR_8;

 if (VAR_3.parent_pid != FUNC_5()) {
  return;
 }

 if (VAR_5 == VAR_1) {
  FUNC_0(&VAR_8);
  if (FUNC_3()) {
   FUNC_4(&VAR_8);




   if (VAR_3.is_child) {
    return;
   }
  }
  return;
 }


 FUNC_2(&VAR_7, VAR_0, &FUNC_6, ((void*)0));
 FUNC_1(&VAR_7, VAR_2);
}
