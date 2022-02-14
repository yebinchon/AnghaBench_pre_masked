
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long tv_sec; int tv_usec; } ;
struct itimerval {TYPE_1__ it_value; } ;
typedef int TimestampTz ;
struct TYPE_4__ {int fin_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct itimerval*,int ,int) ;
 int FUNC_1 (int ,int ,long*,int*) ;
 TYPE_2__** VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,struct itimerval*,int *) ;

__attribute__((used)) static void
FUNC_5(TimestampTz VAR_4)
{
 if (VAR_3 > 0)
 {
  struct itimerval VAR_5;
  long VAR_6;
  int VAR_7;

  FUNC_0(&VAR_5, 0, sizeof(struct itimerval));


  FUNC_1(VAR_4, VAR_2[0]->fin_time,
       &VAR_6, &VAR_7);





  if (VAR_6 == 0 && VAR_7 == 0)
   VAR_7 = 1;

  VAR_5.it_value.tv_sec = VAR_6;
  VAR_5.it_value.tv_usec = VAR_7;
  FUNC_3();


  if (FUNC_4(VAR_1, &VAR_5, ((void*)0)) != 0)
   FUNC_2(VAR_0, "could not enable SIGALRM timer: %m");
 }
}
