
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Rune ;


 int VAR_0 ;
 int FUNC_0 (int*,char const*) ;

int FUNC_1(js_State *VAR_1, const char *VAR_2, int VAR_3)
{
 Rune VAR_4 = 0;
 while (VAR_3-- >= 0) {
  VAR_4 = *(unsigned char*)VAR_2;
  if (VAR_4 < VAR_0) {
   if (VAR_4 == 0)
    return 0;
   ++VAR_2;
  } else
   VAR_2 += FUNC_0(&VAR_4, VAR_2);
 }
 return VAR_4;
}
