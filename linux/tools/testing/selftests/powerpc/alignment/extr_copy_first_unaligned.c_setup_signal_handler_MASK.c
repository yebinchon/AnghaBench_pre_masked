
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; } ;
typedef int signal_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int VAR_2 ;

void FUNC_2(void)
{
 struct sigaction VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sa_sigaction = VAR_2;
 VAR_3.sa_flags = VAR_0;
 FUNC_1(VAR_1, &VAR_3, ((void*)0));
}
