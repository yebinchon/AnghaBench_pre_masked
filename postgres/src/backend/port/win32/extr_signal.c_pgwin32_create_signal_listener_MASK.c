
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pipename ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (char*,int ,int,int ,int,int,int,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

HANDLE
FUNC_5(pid_t VAR_7)
{
 char VAR_8[128];
 HANDLE VAR_9;

 FUNC_4(VAR_8, sizeof(VAR_8), "\\\\.\\pipe\\pgsignal_%u", (int) VAR_7);

 VAR_9 = FUNC_0(VAR_8, VAR_2,
         VAR_4 | VAR_3 | VAR_6,
         VAR_5, 16, 16, 1000, ((void*)0));

 if (VAR_9 == VAR_1)
  FUNC_2(VAR_0,
    (FUNC_3("could not create signal listener pipe for PID %d: error code %lu",
      (int) VAR_7, FUNC_1())));

 return VAR_9;
}
