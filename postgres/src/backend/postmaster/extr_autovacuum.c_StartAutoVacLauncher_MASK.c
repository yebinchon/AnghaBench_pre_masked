
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;

int
FUNC_7(void)
{
 pid_t VAR_1;




 switch ((VAR_1 = FUNC_6()))

 {
  case -1:
   FUNC_4(VAR_0,
     (FUNC_5("could not fork autovacuum launcher process: %m")));
   return 0;


  case 0:

   FUNC_2();


   FUNC_1(0);

   FUNC_0(0, ((void*)0));
   break;

  default:
   return (int) VAR_1;
 }


 return 0;
}
