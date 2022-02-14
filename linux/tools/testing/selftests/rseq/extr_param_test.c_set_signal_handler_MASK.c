
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2 = 0;
 struct sigaction VAR_3;
 sigset_t VAR_4;

 VAR_2 = FUNC_3(&VAR_4);
 if (VAR_2 < 0) {
  FUNC_0("sigemptyset");
  return VAR_2;
 }

 VAR_3.sa_handler = VAR_1;
 VAR_3.sa_mask = VAR_4;
 VAR_3.sa_flags = 0;
 VAR_2 = FUNC_2(VAR_0, &VAR_3, ((void*)0));
 if (VAR_2 < 0) {
  FUNC_0("sigaction");
  return VAR_2;
 }

 FUNC_1("Signal handler set for SIGUSR1\n");

 return VAR_2;
}
