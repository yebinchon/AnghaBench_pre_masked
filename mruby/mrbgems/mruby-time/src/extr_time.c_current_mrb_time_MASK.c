
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct mrb_time {int timezone; scalar_t__ usec; scalar_t__ sec; int member_0; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mrb_time*,int ) ;
 scalar_t__ FUNC_5 (struct timespec*,int ) ;

__attribute__((used)) static struct mrb_time*
FUNC_6(mrb_state *VAR_4)
{
  struct mrb_time VAR_5 = {0};
  struct mrb_time *VAR_6;
  time_t VAR_7, VAR_8;
  {
    struct timeval VAR_9;

    FUNC_0(&VAR_9, ((void*)0));
    VAR_7 = VAR_9.tv_sec;
    VAR_8 = VAR_9.tv_usec;
  }

  VAR_6 = (struct mrb_time *)FUNC_1(VAR_4, sizeof(*VAR_6));
  *VAR_6 = VAR_5;
  VAR_6->sec = VAR_7; VAR_6->usec = VAR_8;
  VAR_6->timezone = VAR_1;
  FUNC_4(VAR_4, VAR_6, VAR_3);

  return VAR_6;
}
