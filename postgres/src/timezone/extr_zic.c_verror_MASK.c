
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char* FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_5, va_list VAR_6)
{




 if (VAR_0)
  FUNC_1(VAR_4, FUNC_0("\"%s\", line %d: "), VAR_0, VAR_1);
 FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_4, FUNC_0(" (rule from \"%s\", line %d)"),
    VAR_2, VAR_3);
 FUNC_1(VAR_4, "\n");
}
