
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *,struct stat*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool
FUNC_8(void)
{
 struct stat VAR_8;
 static bool VAR_9 = 0;

 if (VAR_9)
  return 1;

 if (FUNC_0())
 {







  if (FUNC_5(VAR_4, &VAR_8) == 0)
  {
   FUNC_7(VAR_4);
   FUNC_7(VAR_2);
   VAR_7 = 1;
  }
  else if (FUNC_5(VAR_2, &VAR_8) == 0)
  {
   FUNC_7(VAR_2);
   VAR_7 = 0;
  }

  FUNC_2(VAR_3, (FUNC_4("received promote request")));

  FUNC_1();
  VAR_9 = 1;
  return 1;
 }

 if (VAR_5 == ((void*)0) || FUNC_6(VAR_5, "") == 0)
  return 0;

 if (FUNC_5(VAR_5, &VAR_8) == 0)
 {
  FUNC_2(VAR_3,
    (FUNC_4("promote trigger file found: %s", VAR_5)));
  FUNC_7(VAR_5);
  VAR_9 = 1;
  VAR_7 = 1;
  return 1;
 }
 else if (VAR_6 != VAR_0)
  FUNC_2(VAR_1,
    (FUNC_3(),
     FUNC_4("could not stat promote trigger file \"%s\": %m",
      VAR_5)));

 return 0;
}
