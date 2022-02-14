
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 scalar_t__ FUNC_0 (char const*,char const* const) ;

__attribute__((used)) static int16_t FUNC_1(const char* const* VAR_0, const char* VAR_1)
{
 const char* const* VAR_2 = VAR_0;
 while (*VAR_0 != ((void*)0)) {
  if (FUNC_0(VAR_1, *VAR_0) == 0) {
   return (int16_t)(VAR_0 - VAR_2);
  }
  VAR_0++;
 }

 return -1;

}
