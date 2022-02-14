
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_restorer; int sa_flags; int sa_mask; int sa_sigaction; scalar_t__ sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sigaction*,struct sigaction*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int *) ;

void FUNC_3(void)
{
 int VAR_5, VAR_6;
 struct sigaction VAR_7;
 struct sigaction VAR_8;


 int VAR_9 = VAR_2;

 VAR_7.sa_handler = 0;
 VAR_7.sa_sigaction = VAR_4;



 VAR_6 = FUNC_2(VAR_3, 0, &VAR_7.sa_mask);
 FUNC_0(VAR_6 == 0);


 VAR_7.sa_flags = VAR_0;

 VAR_7.sa_restorer = 0;
 VAR_5 = FUNC_1(VAR_9, &VAR_7, &VAR_8);
 VAR_5 = FUNC_1(VAR_1, &VAR_7, &VAR_8);
 FUNC_0(VAR_5 == 0);
}
