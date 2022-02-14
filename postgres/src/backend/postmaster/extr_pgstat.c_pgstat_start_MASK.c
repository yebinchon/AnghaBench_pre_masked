
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;

int
FUNC_10(void)
{
 time_t VAR_5;
 pid_t VAR_6;





 if (VAR_4 == VAR_1)
  return 0;







 VAR_5 = FUNC_9(((void*)0));
 if ((unsigned int) (VAR_5 - VAR_3) <
  (unsigned int) VAR_2)
  return 0;
 VAR_3 = VAR_5;







 switch ((VAR_6 = FUNC_7()))

 {
  case -1:
   FUNC_5(VAR_0,
     (FUNC_6("could not fork statistics collector: %m")));
   return 0;


  case 0:

   FUNC_1();


   FUNC_0(0);


   FUNC_4();
   FUNC_2();

   FUNC_3(0, ((void*)0));
   break;


  default:
   return (int) VAR_6;
 }


 return 0;
}
