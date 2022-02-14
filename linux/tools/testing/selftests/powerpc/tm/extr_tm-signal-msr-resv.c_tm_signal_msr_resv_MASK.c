
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct sigaction*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_8()
{
 struct sigaction VAR_6;

 FUNC_0(!FUNC_2());

 VAR_6.sa_sigaction = VAR_5;
 FUNC_6(&VAR_6.sa_mask);
 VAR_6.sa_flags = VAR_0;
 if (FUNC_5(VAR_2, &VAR_6, ((void*)0)) < 0) {
  FUNC_3("sigaction sigusr1");
  FUNC_1(1);
 }
 if (FUNC_7(VAR_1, VAR_4) == VAR_3)
  FUNC_1(1);

 FUNC_4(VAR_2);


 return 1;
}
