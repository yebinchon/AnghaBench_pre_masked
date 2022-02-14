
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 char* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int *) ;

__attribute__((used)) static char *
FUNC_11(text *VAR_5)
{
 char *VAR_6;

 VAR_6 = FUNC_10(VAR_5);
 FUNC_1(VAR_6);






 if (FUNC_6(FUNC_0(), VAR_0))
  return VAR_6;


 if (FUNC_5(VAR_6))
 {

  if (FUNC_7(VAR_6))
   FUNC_2(VAR_3,
     (FUNC_3(VAR_2),
      (FUNC_4("reference to parent directory (\"..\") not allowed"))));





  if (!FUNC_8(VAR_1, VAR_6) &&
   (!FUNC_5(VAR_4) ||
    !FUNC_8(VAR_4, VAR_6)))
   FUNC_2(VAR_3,
     (FUNC_3(VAR_2),
      (FUNC_4("absolute path not allowed"))));
 }
 else if (!FUNC_9(VAR_6))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     (FUNC_4("path must be in or below the current directory"))));

 return VAR_6;
}
