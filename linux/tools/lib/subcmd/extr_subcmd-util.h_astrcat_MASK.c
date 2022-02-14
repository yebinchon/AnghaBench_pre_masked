
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void FUNC_3(char **VAR_0, const char *VAR_1)
{
 char *VAR_2 = *VAR_0;

 if (FUNC_0(VAR_0, "%s%s", VAR_2 ?: "", VAR_1) == -1)
  FUNC_1("asprintf failed");

 FUNC_2(VAR_2);
}
