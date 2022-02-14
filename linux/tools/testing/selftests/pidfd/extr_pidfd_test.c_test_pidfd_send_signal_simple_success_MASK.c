
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_5, VAR_6;
 const char *VAR_7 = "pidfd_send_signal send SIGUSR1";

 VAR_5 = FUNC_3("/proc/self", VAR_1 | VAR_0);
 if (VAR_5 < 0)
  FUNC_1(
   "%s test: Failed to open process file descriptor\n",
   VAR_7);

 FUNC_4(VAR_2, VAR_3);

 VAR_6 = FUNC_5(VAR_5, VAR_2, ((void*)0), 0);
 FUNC_0(VAR_5);
 if (VAR_6 < 0)
  FUNC_1("%s test: Failed to send signal\n",
       VAR_7);

 if (VAR_4 != 1)
  FUNC_1("%s test: Failed to receive signal\n",
       VAR_7);

 VAR_4 = 0;
 FUNC_2("%s test: Sent signal\n", VAR_7);
 return 0;
}
