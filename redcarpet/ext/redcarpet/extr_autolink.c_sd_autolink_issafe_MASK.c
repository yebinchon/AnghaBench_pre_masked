
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

int
FUNC_3(const uint8_t *VAR_0, size_t VAR_1)
{
 static const size_t VAR_2 = 6;
 static const char *VAR_3[] = {
  "#", "/", "http://", "https://", "ftp://", "mailto:"
 };

 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  size_t VAR_5 = FUNC_1(VAR_3[VAR_4]);

  if (VAR_1 > VAR_5 &&
   FUNC_2((char *)VAR_0, VAR_3[VAR_4], VAR_5) == 0 &&
   FUNC_0(VAR_0[VAR_5]))
   return 1;
 }

 return 0;
}
