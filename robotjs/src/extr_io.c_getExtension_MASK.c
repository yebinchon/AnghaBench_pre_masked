
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(const char *VAR_0, size_t VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 <= 0) return ((void*)0);

 while (--VAR_1 > 0 && VAR_0[VAR_1] != '.' && VAR_0[VAR_1] != '\0')
  ;

 return VAR_0 + VAR_1 + 1;
}
