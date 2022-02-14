
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1, const char **VAR_2)
{
 const char *VAR_3;
 while (*VAR_0)
 {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3)
   return *VAR_2 = VAR_3, VAR_0;
  ++VAR_0;
 }
 return *VAR_2 = ((void*)0), ((void*)0);
}
