
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;

void
FUNC_7(const char *VAR_4)
{
 char VAR_5[VAR_2];
 FILE *VAR_6;


 FUNC_3(VAR_5, VAR_4, ".ready");
 VAR_6 = FUNC_0(VAR_5, "w");
 if (VAR_6 == ((void*)0))
 {
  FUNC_4(VAR_1,
    (FUNC_5(),
     FUNC_6("could not create archive status file \"%s\": %m",
      VAR_5)));
  return;
 }
 if (FUNC_1(VAR_6))
 {
  FUNC_4(VAR_1,
    (FUNC_5(),
     FUNC_6("could not write archive status file \"%s\": %m",
      VAR_5)));
  return;
 }


 if (VAR_0)
  FUNC_2(VAR_3);
}
