
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (int *,int ,int ,int,int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,struct sigaction*,int *) ;

int FUNC_5(void)
{
 struct sigaction VAR_9 = {
  .sa_sigaction = VAR_7,
  .sa_flags = VAR_3,
 };
 char VAR_10, *VAR_11 = ((void*)0);

 VAR_11 = FUNC_3(((void*)0), FUNC_1(), 0, VAR_2|VAR_0, -1, 0);
 FUNC_0(VAR_11 == VAR_1);

 FUNC_0(FUNC_4(VAR_5, &VAR_9, ((void*)0)) != 0);

 VAR_6 = 0;
 VAR_8 = 0;





 FUNC_2();
 VAR_10 = *VAR_11;
 FUNC_2();

 FUNC_0(!VAR_6);
 FUNC_0(VAR_8 != VAR_4);

 VAR_6 = 0;
 VAR_8 = 0;

 FUNC_2();
 *VAR_11 = VAR_10;
 FUNC_2();

 FUNC_0(!VAR_6);
 FUNC_0(VAR_8 != VAR_4);

 return 0;
}
