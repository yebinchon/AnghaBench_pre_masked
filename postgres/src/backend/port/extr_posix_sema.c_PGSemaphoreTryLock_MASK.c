
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
 int FUNC_2 (int ) ;

bool
FUNC_3(PGSemaphore VAR_5)
{
 int VAR_6;






 do
 {
  VAR_6 = FUNC_2(FUNC_0(VAR_5));
 } while (VAR_6 < 0 && VAR_4 == VAR_2);

 if (VAR_6 < 0)
 {
  if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
   return 0;

  FUNC_1(VAR_3, "sem_trywait failed: %m");
 }

 return 1;
}
