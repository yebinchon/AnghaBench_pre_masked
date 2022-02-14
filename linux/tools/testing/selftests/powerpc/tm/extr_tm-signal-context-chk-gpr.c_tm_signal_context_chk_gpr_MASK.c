
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;
typedef long pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 long FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,struct sigaction*,int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 long FUNC_8 (long,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_9()
{
 struct sigaction VAR_6;
 int VAR_7;
 long VAR_8;
 pid_t VAR_9 = FUNC_3();

 FUNC_1(!FUNC_4());

 VAR_6.sa_sigaction = VAR_5;
 FUNC_7(&VAR_6.sa_mask);
 VAR_6.sa_flags = VAR_1;
 if (FUNC_6(VAR_2, &VAR_6, ((void*)0)) < 0) {
  FUNC_5("sigaction sigusr1");
  FUNC_2(1);
 }

 VAR_7 = 0;
 while (VAR_7 < VAR_0 && !VAR_3) {






  VAR_8 = FUNC_8(VAR_9, VAR_4, ((void*)0), ((void*)0), ((void*)0));
  FUNC_0(VAR_8 != VAR_9);
  VAR_7++;
 }

 return VAR_3;
}
