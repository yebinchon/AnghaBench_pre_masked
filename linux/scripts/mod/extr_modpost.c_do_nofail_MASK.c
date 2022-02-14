
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

void *FUNC_1(void *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  FUNC_0("modpost: Memory allocation failure: %s.\n", VAR_1);

 return VAR_0;
}
