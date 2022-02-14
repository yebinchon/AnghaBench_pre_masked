
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_sigaction; int sa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct sigaction*,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct sigaction VAR_4;

 VAR_4.sa_flags = VAR_1;
 VAR_4.sa_sigaction = VAR_3;

 if (FUNC_2(VAR_2, &VAR_4, ((void*)0)) == -1) {
  FUNC_1("sigaction");
  FUNC_0(VAR_0);
 }
}
