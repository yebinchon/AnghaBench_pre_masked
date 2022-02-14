
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGSemaphore ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;

bool
FUNC_4(PGSemaphore VAR_5)
{
 DWORD VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0);

 if (VAR_6 == VAR_2)
 {

  return 1;
 }
 else if (VAR_6 == VAR_3)
 {

  VAR_4 = VAR_0;
  return 0;
 }


 FUNC_2(VAR_1,
   (FUNC_3("could not try-lock semaphore: error code %lu",
     FUNC_0())));


 return 0;
}
