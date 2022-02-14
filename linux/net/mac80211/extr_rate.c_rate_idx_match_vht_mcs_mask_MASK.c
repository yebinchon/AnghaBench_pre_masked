
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(s8 *VAR_1, u16 *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = *VAR_1 >> 4;
 VAR_6 = *VAR_1 & 0xf;

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return 0;


 for (VAR_3 = VAR_5; VAR_3 >= 0; VAR_3--) {
  for (VAR_4 = VAR_6; VAR_4 >= 0; VAR_4--) {
   if (VAR_2[VAR_3] & FUNC_0(VAR_4)) {
    *VAR_1 = (VAR_3 << 4) | VAR_4;
    return 1;
   }
  }
  VAR_6 = 15;
 }


 VAR_5 = (*VAR_1 + 1) >> 4;
 VAR_6 = (*VAR_1 + 1) & 0xf;

 for (VAR_3 = VAR_5; VAR_3 < VAR_0; VAR_3++) {
  for (VAR_4 = VAR_6; VAR_4 < 16; VAR_4++) {
   if (VAR_2[VAR_3] & FUNC_0(VAR_4)) {
    *VAR_1 = (VAR_3 << 4) | VAR_4;
    return 1;
   }
  }
  VAR_6 = 0;
 }
 return 0;
}
