
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int * FUNC_0 (int const*,char const,int) ;
 scalar_t__ FUNC_1 (int const*,char const*,int) ;

__attribute__((used)) static const uint8 *
FUNC_2(const uint8 *VAR_0, const uint8 *VAR_1, const char *VAR_2, int VAR_3)
{
 const uint8 *VAR_4 = VAR_0;

 if (!VAR_3)
  return ((void*)0);
 if (VAR_1 - VAR_0 < VAR_3)
  return ((void*)0);
 while (VAR_4 < VAR_1)
 {
  VAR_4 = FUNC_0(VAR_4, VAR_2[0], VAR_1 - VAR_4);
  if (VAR_4 == ((void*)0))
   return ((void*)0);
  if (VAR_4 + VAR_3 > VAR_1)
   return ((void*)0);
  if (FUNC_1(VAR_4, VAR_2, VAR_3) == 0)
   return VAR_4;
  VAR_4++;
 }
 return ((void*)0);
}
