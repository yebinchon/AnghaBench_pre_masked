
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int * sa_sigaction; } ;
typedef int sigset_t ;
typedef int act ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct sigaction VAR_4;
 sigset_t VAR_5;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(&VAR_5);
 FUNC_3(&VAR_5, VAR_1);

 VAR_4.sa_sigaction = &VAR_3;
 VAR_4.sa_flags = VAR_0;
 if (FUNC_2(VAR_1, &VAR_4, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return -1;
 }
 if (FUNC_5(VAR_2, &VAR_5, ((void*)0))) {
  FUNC_1("sigprocmask");
  return -1;
 }
 return 0;
}
