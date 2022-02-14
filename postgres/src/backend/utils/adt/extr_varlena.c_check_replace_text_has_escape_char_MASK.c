
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 char* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(const text *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0);
 const char *VAR_2 = VAR_1 + FUNC_1(VAR_0);

 if (FUNC_2() == 1)
 {
  for (; VAR_1 < VAR_2; VAR_1++)
  {
   if (*VAR_1 == '\\')
    return 1;
  }
 }
 else
 {
  for (; VAR_1 < VAR_2; VAR_1 += FUNC_3(VAR_1))
  {
   if (*VAR_1 == '\\')
    return 1;
  }
 }

 return 0;
}
