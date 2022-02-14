
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
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;

int
FUNC_11(void)
{
 time_t VAR_3;
 pid_t VAR_4;




 if (!FUNC_4())
  return 0;







 VAR_3 = FUNC_10(((void*)0));
 if ((unsigned int) (VAR_3 - VAR_2) <
  (unsigned int) VAR_1)
  return 0;
 VAR_2 = VAR_3;




 switch ((VAR_4 = FUNC_8()))

 {
  case -1:
   FUNC_6(VAR_0,
     (FUNC_7("could not fork archiver: %m")));
   return 0;


  case 0:

   FUNC_1();


   FUNC_0(0);


   FUNC_5();
   FUNC_2();

   FUNC_3(0, ((void*)0));
   break;


  default:
   return (int) VAR_4;
 }


 return 0;
}
