
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int,char*,scalar_t__) ;
 int FUNC_7 (int,int ,int *,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_5, VAR_6, VAR_7;
 char VAR_8[256];
 pid_t VAR_9;
 const char *VAR_10 = "pidfd_send_signal signal exited process";

 VAR_9 = FUNC_2();
 if (VAR_9 < 0)
  FUNC_3("%s test: Failed to create new process\n",
       VAR_10);

 if (VAR_9 == 0)
  FUNC_0(VAR_1);

 FUNC_6(VAR_8, sizeof(VAR_8), "/proc/%d", VAR_9);

 VAR_5 = FUNC_5(VAR_8, VAR_3 | VAR_2);

 (void)FUNC_8(VAR_9);

 if (VAR_5 < 0)
  FUNC_3(
   "%s test: Failed to open process file descriptor\n",
   VAR_10);

 VAR_6 = FUNC_7(VAR_5, 0, ((void*)0), 0);
 VAR_7 = VAR_4;
 FUNC_1(VAR_5);
 if (VAR_6 == 0)
  FUNC_3(
   "%s test: Managed to send signal to process even though it should have failed\n",
   VAR_10);

 if (VAR_7 != VAR_0)
  FUNC_3(
   "%s test: Expected to receive ESRCH as errno value but received %d instead\n",
   VAR_10, VAR_7);

 FUNC_4("%s test: Failed to send signal as expected\n",
         VAR_10);
 return 0;
}
