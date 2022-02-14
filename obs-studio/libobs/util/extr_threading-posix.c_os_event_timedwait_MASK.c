
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int signalled; int mutex; int manual; int cond; } ;
typedef TYPE_1__ os_event_t ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*,unsigned long) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (int *,int *,struct timespec*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(os_event_t *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = 0;
 FUNC_4(&VAR_1->mutex);
 if (!VAR_1->signalled) {
  struct timespec VAR_4;






  FUNC_1(VAR_0, &VAR_4);

  FUNC_0(&VAR_4, VAR_2);
  VAR_3 = FUNC_3(&VAR_1->cond, &VAR_1->mutex, &VAR_4);
 }

 if (VAR_3 == 0) {
  if (!VAR_1->manual)
   VAR_1->signalled = 0;
 }

 FUNC_5(&VAR_1->mutex);

 return VAR_3;
}
