
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__**) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static bool FUNC_2(u8 *VAR_1, u16 VAR_2, u16 VAR_3, u8 (*VAR_4)[16])
{
 u16 VAR_5 = 0;

 while (VAR_5 < VAR_2) {
  u8 VAR_6 = VAR_1[0];
  u8 VAR_7[16];
  int VAR_8;

  if (VAR_6 == 0)
   break;

  if (VAR_2 - VAR_5 < VAR_6 + 1)
   break;

  switch (VAR_1[1]) {
  case 131:
  case 130:
   for (VAR_8 = 0; VAR_8 + 3 <= VAR_6; VAR_8 += 2) {
    FUNC_1(VAR_7, VAR_0, 16);
    VAR_7[13] = VAR_1[VAR_8 + 3];
    VAR_7[12] = VAR_1[VAR_8 + 2];
    if (FUNC_0(VAR_7, VAR_3, VAR_4))
     return 1;
   }
   break;
  case 129:
  case 128:
   for (VAR_8 = 0; VAR_8 + 5 <= VAR_6; VAR_8 += 4) {
    FUNC_1(VAR_7, VAR_0, 16);
    VAR_7[15] = VAR_1[VAR_8 + 5];
    VAR_7[14] = VAR_1[VAR_8 + 4];
    VAR_7[13] = VAR_1[VAR_8 + 3];
    VAR_7[12] = VAR_1[VAR_8 + 2];
    if (FUNC_0(VAR_7, VAR_3, VAR_4))
     return 1;
   }
   break;
  case 133:
  case 132:
   for (VAR_8 = 0; VAR_8 + 17 <= VAR_6; VAR_8 += 16) {
    FUNC_1(VAR_7, VAR_1 + VAR_8 + 2, 16);
    if (FUNC_0(VAR_7, VAR_3, VAR_4))
     return 1;
   }
   break;
  }

  VAR_5 += VAR_6 + 1;
  VAR_1 += VAR_6 + 1;
 }

 return 0;
}
