
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,...) ;
 int VAR_6 ;
 long FUNC_5 () ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,char*,int) ;

bool
FUNC_10(void)
{
 int VAR_7;
 int VAR_8;
 long VAR_9;
 char VAR_10[VAR_0];

 VAR_7 = FUNC_6(VAR_1, VAR_3 | VAR_4, 0);
 if (VAR_7 < 0)
 {





  switch (VAR_6)
  {
   case 129:
   case 128:

    FUNC_2(VAR_2,
      (FUNC_3(),
       FUNC_4("could not open file \"%s\": %m",
        VAR_1)));
    return 0;
   default:

    FUNC_2(VAR_2,
      (FUNC_3(),
       FUNC_4("could not open file \"%s\": %m; continuing anyway",
        VAR_1)));
    return 1;
  }
 }
 FUNC_8(VAR_5);
 VAR_8 = FUNC_9(VAR_7, VAR_10, sizeof(VAR_10) - 1);
 FUNC_7();
 if (VAR_8 < 0)
 {
  FUNC_2(VAR_2,
    (FUNC_3(),
     FUNC_4("could not read from file \"%s\": %m",
      VAR_1)));
  FUNC_1(VAR_7);
  return 1;
 }
 VAR_10[VAR_8] = '\0';
 FUNC_1(VAR_7);
 VAR_9 = FUNC_0(VAR_10);
 if (VAR_9 == FUNC_5())
  return 1;


 FUNC_2(VAR_2,
   (FUNC_4("lock file \"%s\" contains wrong PID: %ld instead of %ld",
     VAR_1, VAR_9, (long) FUNC_5())));
 return 0;
}
