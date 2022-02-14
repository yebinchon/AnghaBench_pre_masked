
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int const) ;
 scalar_t__ FUNC_1 (unsigned int const) ;
 int FUNC_2 (unsigned int const) ;

__attribute__((used)) static unsigned int FUNC_3(const unsigned int VAR_0)
{
 if (VAR_0 <= 0xFF) {
  return !FUNC_2(VAR_0);
 }
 if (VAR_0 > 0xFFFF || !FUNC_2((VAR_0 >> 8) & 0xFF)) {
  return 0;
 }
 if (FUNC_0((VAR_0 & 0xFF))) {
     return 2;
 }
 if (FUNC_1((VAR_0 & 0xFF))) {
  return 4;
 }

 return 0;
}
