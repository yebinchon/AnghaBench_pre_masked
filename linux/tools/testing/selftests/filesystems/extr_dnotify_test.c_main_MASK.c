
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_9 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(void)
{
 struct sigaction VAR_10;
 int VAR_11;

 VAR_10.sa_sigaction = VAR_9;
 FUNC_5(&VAR_10.sa_mask);
 VAR_10.sa_flags = VAR_6;
 FUNC_4(VAR_7 + 1, &VAR_10, ((void*)0));

 VAR_11 = FUNC_1(".", VAR_5);
 FUNC_0(VAR_11, VAR_4, VAR_7 + 1);
 FUNC_0(VAR_11, VAR_3, VAR_1|VAR_0|VAR_2);


 while (1) {
  FUNC_2();
  FUNC_3("Got event on fd=%d\n", VAR_8);
 }
}
