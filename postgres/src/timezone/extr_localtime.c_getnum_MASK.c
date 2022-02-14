
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0, int *const VAR_1, const int VAR_2, const int VAR_3)
{
 char VAR_4;
 int VAR_5;

 if (VAR_0 == ((void*)0) || !FUNC_0(VAR_4 = *VAR_0))
  return ((void*)0);
 VAR_5 = 0;
 do
 {
  VAR_5 = VAR_5 * 10 + (VAR_4 - '0');
  if (VAR_5 > VAR_3)
   return ((void*)0);
  VAR_4 = *++VAR_0;
 } while (FUNC_0(VAR_4));
 if (VAR_5 < VAR_2)
  return ((void*)0);
 *VAR_1 = VAR_5;
 return VAR_0;
}
