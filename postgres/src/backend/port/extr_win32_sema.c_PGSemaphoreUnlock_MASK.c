
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGSemaphore ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(PGSemaphore VAR_1)
{
 if (!FUNC_1(VAR_1, 1, ((void*)0)))
  FUNC_2(VAR_0,
    (FUNC_3("could not unlock semaphore: error code %lu",
      FUNC_0())));
}
