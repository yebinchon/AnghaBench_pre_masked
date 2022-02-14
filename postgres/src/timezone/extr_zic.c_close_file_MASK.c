
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*,char const*,char*,char const*,char*,char const*) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(FILE *VAR_4, char const *VAR_5, char const *VAR_6)
{
 char const *VAR_7 = (FUNC_3(VAR_4) ? FUNC_0("I/O error")
      : FUNC_2(VAR_4) != 0 ? FUNC_5(VAR_1) : ((void*)0));

 if (VAR_7)
 {
  FUNC_4(VAR_3, "%s: %s%s%s%s%s\n", VAR_2,
    VAR_5 ? VAR_5 : "", VAR_5 ? "/" : "",
    VAR_6 ? VAR_6 : "", VAR_6 ? ": " : "",
    VAR_7);
  FUNC_1(VAR_0);
 }
}
