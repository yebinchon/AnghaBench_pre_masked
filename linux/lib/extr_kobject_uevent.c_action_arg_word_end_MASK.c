
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1,
           char VAR_2)
{
 const char *VAR_3 = VAR_0;

 while (VAR_3 <= VAR_1 && *VAR_3 != VAR_2)
  if (!FUNC_0(*VAR_3++))
   return ((void*)0);

 if (VAR_3 == VAR_0)
  return ((void*)0);

 return VAR_3;
}
