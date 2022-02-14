
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;


 int FUNC_0 (int const*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int const,struct sigaction*,int *) ;

void FUNC_4(void)
{
 struct sigaction VAR_4 = { .sa_handler = VAR_3 };
 const int VAR_5[] = { VAR_1, VAR_2, VAR_0 };
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); ++VAR_7) {
  VAR_6 = FUNC_3(VAR_5[VAR_7], &VAR_4, ((void*)0));
  if (VAR_6) {
   FUNC_2("Failed to register signal handler");
   FUNC_1(-1);
  }
 }
}
