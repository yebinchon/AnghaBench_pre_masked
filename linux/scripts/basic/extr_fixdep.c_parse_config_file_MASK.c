
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,int,char*) ;
 char* FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0)
{
 const char *VAR_1, *VAR_2;
 const char *VAR_3 = VAR_0;

 while ((VAR_0 = FUNC_2(VAR_0, "CONFIG_"))) {
  if (VAR_0 > VAR_3 && (FUNC_0(VAR_0[-1]) || VAR_0[-1] == '_')) {
   VAR_0 += 7;
   continue;
  }
  VAR_0 += 7;
  VAR_1 = VAR_0;
  while (*VAR_1 && (FUNC_0(*VAR_1) || *VAR_1 == '_'))
   VAR_1++;
  if (FUNC_1(VAR_0, VAR_1 - VAR_0, "_MODULE"))
   VAR_2 = VAR_1 - 7;
  else
   VAR_2 = VAR_1;
  if (VAR_2 > VAR_0)
   FUNC_3(VAR_0, VAR_2 - VAR_0);
  VAR_0 = VAR_1;
 }
}
