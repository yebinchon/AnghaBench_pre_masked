
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGSemaphore ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(PGSemaphore VAR_5)
{




 for (;;)
 {
  if (FUNC_2(FUNC_0(VAR_5)) < 0)
  {
   if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
    break;
   if (VAR_4 == VAR_2)
    continue;
   FUNC_1(VAR_3, "sem_trywait failed: %m");
  }
 }
}
