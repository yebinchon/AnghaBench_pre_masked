
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimeLineID ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,char*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ VAR_5 ;

bool
FUNC_8(TimeLineID VAR_6)
{
 char VAR_7[VAR_4];
 char VAR_8[VAR_3];
 FILE *VAR_9;


 if (VAR_6 == 1)
  return 0;

 if (VAR_0)
 {
  FUNC_3(VAR_8, VAR_6);
  FUNC_2(VAR_7, VAR_8, "RECOVERYHISTORY", 0, 0);
 }
 else
  FUNC_4(VAR_7, VAR_6);

 VAR_9 = FUNC_0(VAR_7, "r");
 if (VAR_9 != ((void*)0))
 {
  FUNC_1(VAR_9);
  return 1;
 }
 else
 {
  if (VAR_5 != VAR_1)
   FUNC_5(VAR_2,
     (FUNC_6(),
      FUNC_7("could not open file \"%s\": %m", VAR_7)));
  return 0;
 }
}
