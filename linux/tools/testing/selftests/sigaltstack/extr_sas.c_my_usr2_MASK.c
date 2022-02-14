
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_data {scalar_t__ flag; int msg; } ;
typedef int siginfo_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct stk_data* FUNC_3 (char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 char *VAR_5;
 struct stk_data *VAR_6;

 FUNC_1("[RUN]\tsignal USR2\n");
 VAR_5 = FUNC_0(1024);


 VAR_6 = FUNC_3(VAR_5, 1024, VAR_0, FUNC_5(VAR_0));
 if (VAR_6) {
  FUNC_2("sigaltstack re-used\n");

  FUNC_4(VAR_6->msg, VAR_1);

  VAR_6->flag = 0;
 }
}
