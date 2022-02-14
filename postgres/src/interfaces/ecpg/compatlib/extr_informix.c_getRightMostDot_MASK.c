
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 size_t VAR_1 = FUNC_0(VAR_0);
 int VAR_2,
    VAR_3;

 VAR_3 = 0;
 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
 {
  if (VAR_0[VAR_2] == '.')
   return VAR_1 - VAR_3 - 1;
  VAR_3++;
 }
 return -1;
}
