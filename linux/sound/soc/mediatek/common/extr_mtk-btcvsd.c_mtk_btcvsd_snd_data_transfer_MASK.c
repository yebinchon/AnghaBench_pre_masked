
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef enum bt_sco_direct { ____Placeholder_bt_sco_direct } bt_sco_direct ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(enum bt_sco_direct VAR_1,
      u8 *VAR_2, u8 *VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (VAR_4 == 60 || VAR_4 == 120 || VAR_4 == 20) {
  u32 *VAR_8 = (u32 *)VAR_2;
  u32 *VAR_9 = (u32 *)VAR_3;

  for (VAR_6 = 0; VAR_6 < (VAR_4 * VAR_5 / 4); VAR_6++)
   *VAR_9++ = *VAR_8++;
 } else {
  u16 *VAR_10 = (u16 *)VAR_2;
  u16 *VAR_11 = (u16 *)VAR_3;

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   for (VAR_6 = 0; VAR_6 < (VAR_4 / 2); VAR_6++)
    *VAR_11++ = *VAR_10++;

   if (VAR_1 == VAR_0)
    VAR_10++;
   else
    VAR_11++;
  }
 }
}
