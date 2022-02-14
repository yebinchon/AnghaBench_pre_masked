
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_0)
{
 size_t VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = VAR_1 - 5; VAR_2 >= 0; VAR_2--) {
  if (FUNC_0(VAR_0 + VAR_2))
   return VAR_2 + 1;
 }
 return VAR_1;
}
