
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4, VAR_5;
 const char *VAR_6 = "pidfd_send_signal check for support";

 VAR_4 = FUNC_4("/proc/self", VAR_2 | VAR_1);
 if (VAR_4 < 0)
  FUNC_1(
   "%s test: Failed to open process file descriptor\n",
   VAR_6);

 VAR_5 = FUNC_5(VAR_4, 0, ((void*)0), 0);
 if (VAR_5 < 0) {
  if (VAR_3 == VAR_0)
   FUNC_2(
    "%s test: pidfd_send_signal() syscall not supported\n",
    VAR_6);

  FUNC_1("%s test: Failed to send signal\n",
       VAR_6);
 }

 FUNC_0(VAR_4);
 FUNC_3(
  "%s test: pidfd_send_signal() syscall is supported. Tests can be executed\n",
  VAR_6);
 return 0;
}
