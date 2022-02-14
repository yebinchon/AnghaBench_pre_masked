
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;

void
FUNC_8(const char *VAR_3)
{
 char VAR_4[VAR_1];
 char VAR_5[VAR_1];
 struct stat VAR_6;
 FILE *VAR_7;


 FUNC_2(VAR_5, VAR_3, ".done");
 if (FUNC_7(VAR_5, &VAR_6) == 0)
  return;


 FUNC_2(VAR_4, VAR_3, ".ready");
 if (FUNC_7(VAR_4, &VAR_6) == 0)
 {
  (void) FUNC_3(VAR_4, VAR_5, VAR_2);
  return;
 }


 VAR_7 = FUNC_0(VAR_5, "w");
 if (VAR_7 == ((void*)0))
 {
  FUNC_4(VAR_0,
    (FUNC_5(),
     FUNC_6("could not create archive status file \"%s\": %m",
      VAR_5)));
  return;
 }
 if (FUNC_1(VAR_7))
 {
  FUNC_4(VAR_0,
    (FUNC_5(),
     FUNC_6("could not write archive status file \"%s\": %m",
      VAR_5)));
  return;
 }
}
