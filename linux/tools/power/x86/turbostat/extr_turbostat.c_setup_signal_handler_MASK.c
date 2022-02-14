
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int * sa_handler; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct sigaction*,int *) ;
 int VAR_2 ;

void FUNC_3(void)
{
 struct sigaction VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.sa_handler = &VAR_2;

 if (FUNC_2(VAR_0, &VAR_3, ((void*)0)) < 0)
  FUNC_0(1, "sigaction SIGINT");
 if (FUNC_2(VAR_1, &VAR_3, ((void*)0)) < 0)
  FUNC_0(1, "sigaction SIGUSR1");
}
