
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static unsigned int FUNC_3(const char * VAR_0, const char * VAR_1)
{
 if (VAR_1 - VAR_0 <= 1 || !FUNC_2(VAR_0[0])) {
  return 0;
 }

 if (FUNC_0(VAR_0[1])) {
  return 2;
 } else if (VAR_1 - VAR_0 > 3 && FUNC_1(VAR_0[1]) && FUNC_2(VAR_0[2]) && FUNC_1(VAR_0[3])) {
  return 4;
 }

 return 0;
}
