
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

const char *FUNC_1(const char *VAR_0, size_t VAR_1)
{
 for (; VAR_1 && FUNC_0(*VAR_0); --VAR_1)
  ++VAR_0;
 if (VAR_1)
  return (char *)VAR_0;
 return ((void*)0);
}
