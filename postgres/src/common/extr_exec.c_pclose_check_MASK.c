
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

int
FUNC_6(FILE *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2 == 0)
  return 0;

 if (VAR_2 == -1)
 {

  FUNC_2(FUNC_1(VAR_0),
      FUNC_0("pclose failed: %m"));
 }
 else
 {
  VAR_3 = FUNC_5(VAR_2);
  FUNC_2(FUNC_1(VAR_0),
      "%s", VAR_3);
  FUNC_4(VAR_3);
 }
 return VAR_2;
}
