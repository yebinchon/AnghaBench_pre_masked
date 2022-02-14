
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGSemaphore ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

void
FUNC_3(PGSemaphore VAR_3)
{
 int VAR_4;







 do
 {
  VAR_4 = FUNC_2(FUNC_0(VAR_3));
 } while (VAR_4 < 0 && VAR_2 == VAR_0);

 if (VAR_4 < 0)
  FUNC_1(VAR_1, "sem_post failed: %m");
}
