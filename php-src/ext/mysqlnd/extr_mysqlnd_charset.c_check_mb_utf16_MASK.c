
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static unsigned int FUNC_2(const char * const VAR_0, const char * const VAR_1)
{
 if (VAR_0 + 2 > VAR_1) {
  return 0;
 }

 if (FUNC_0(*VAR_0)) {
  return (VAR_0 + 4 <= VAR_1) && FUNC_1(VAR_0[2]) ? 4 : 0;
 }

 if (FUNC_1(*VAR_0)) {
  return 0;
 }
 return 2;
}
