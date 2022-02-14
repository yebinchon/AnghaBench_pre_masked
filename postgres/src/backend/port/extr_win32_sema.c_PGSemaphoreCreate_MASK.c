
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sec_attrs ;
struct TYPE_4__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef int PGSemaphore ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;

PGSemaphore
FUNC_7(void)
{
 HANDLE VAR_6;
 SECURITY_ATTRIBUTES VAR_7;


 FUNC_0(!VAR_0);

 if (VAR_5 >= VAR_3)
  FUNC_4(VAR_1, "too many semaphores created");

 FUNC_3(&VAR_7, sizeof(VAR_7));
 VAR_7.nLength = sizeof(VAR_7);
 VAR_7.lpSecurityDescriptor = ((void*)0);
 VAR_7.bInheritHandle = VAR_2;


 VAR_6 = FUNC_1(&VAR_7, 1, 32767, ((void*)0));
 if (VAR_6)
 {

  VAR_4[VAR_5++] = VAR_6;
 }
 else
  FUNC_5(VAR_1,
    (FUNC_6("could not create semaphore: error code %lu",
      FUNC_2())));

 return (PGSemaphore) VAR_6;
}
