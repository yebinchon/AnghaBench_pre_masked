
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_4(VAR_0);

 if (!FUNC_6(VAR_0, "man"))
  FUNC_2(VAR_2, VAR_1);
 else if (!FUNC_6(VAR_0, "woman"))
  FUNC_3(VAR_2, VAR_1);
 else if (!FUNC_6(VAR_0, "konqueror"))
  FUNC_1(VAR_2, VAR_1);
 else if (VAR_2)
  FUNC_0(VAR_2, VAR_1);
 else
  FUNC_5("'%s': unknown man viewer.", VAR_0);
}
