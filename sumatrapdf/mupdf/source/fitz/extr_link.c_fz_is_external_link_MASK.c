
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;



int
FUNC_0(fz_context *VAR_0, const char *VAR_1)
{
 while (*VAR_1 >= 'a' && *VAR_1 <= 'z')
  ++VAR_1;
 return VAR_1[0] == ':';
}
