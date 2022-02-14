
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct itimerval {int dummy; } ;
struct TYPE_2__ {int active; int indicator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct itimerval*,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,struct itimerval*,int *) ;

void
FUNC_4(bool VAR_5)
{
 int VAR_6;

 FUNC_1();






 if (VAR_4 > 0)
 {
  struct itimerval VAR_7;

  FUNC_0(&VAR_7, 0, sizeof(struct itimerval));
  if (FUNC_3(VAR_1, &VAR_7, ((void*)0)) != 0)
   FUNC_2(VAR_0, "could not disable SIGALRM timer: %m");
 }

 VAR_4 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  VAR_3[VAR_6].active = 0;
  if (!VAR_5)
   VAR_3[VAR_6].indicator = 0;
 }
}
