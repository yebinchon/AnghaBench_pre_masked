
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 scalar_t__ FUNC_0 (unsigned char const) ;

__attribute__((used)) static int FUNC_1(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(VAR_1[VAR_3]))
   return 1;
 return 0;
}
