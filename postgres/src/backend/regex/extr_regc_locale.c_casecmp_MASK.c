
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ chr ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int
FUNC_1(const chr *VAR_0, const chr *VAR_1,
  size_t VAR_2)
{
 for (; VAR_2 > 0; VAR_2--, VAR_0++, VAR_1++)
 {
  if ((*VAR_0 != *VAR_1) && (FUNC_0(*VAR_0) != FUNC_0(*VAR_1)))
   return 1;
 }
 return 0;
}
