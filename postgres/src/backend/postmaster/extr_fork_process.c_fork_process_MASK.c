
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimerval {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,struct itimerval*) ;
 int FUNC_6 (char const*,int ,int ) ;
 int FUNC_7 (int ,struct itimerval*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,char const*,int ) ;

pid_t
FUNC_10(void)
{
 pid_t VAR_4;
 const char *VAR_5;
 FUNC_2(VAR_3);
 FUNC_2(VAR_2);
 VAR_4 = FUNC_3();
 if (VAR_4 == 0)
 {
  VAR_5 = FUNC_4("PG_OOM_ADJUST_FILE");

  if (VAR_5 != ((void*)0))
  {




   int VAR_6 = FUNC_6(VAR_5, VAR_1, 0);


   if (VAR_6 >= 0)
   {
    const char *VAR_7 = FUNC_4("PG_OOM_ADJUST_VALUE");
    int VAR_8;

    if (VAR_7 == ((void*)0))
     VAR_7 = "0";

    VAR_8 = FUNC_9(VAR_6, VAR_7, FUNC_8(VAR_7));
    (void) VAR_8;
    FUNC_1(VAR_6);
   }
  }







 }

 return VAR_4;
}
