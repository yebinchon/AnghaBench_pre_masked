
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__,int,int*,int *) ;

u16 FUNC_1(u32 VAR_1, u32 *VAR_2,
 u32 *VAR_3)
{
 u32 VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_1,
  VAR_0, 4, &VAR_4,
  (u8 *)&VAR_6);

 if (!VAR_5) {
  *VAR_2 =
   ((VAR_6 & 0xff000000) >> 8) | ((VAR_6 & 0x00ff0000) << 8)
   | ((VAR_6 & 0x0000ff00) >> 8) | ((VAR_6 & 0x000000ff) <<
   8);

  VAR_5 = FUNC_0(VAR_1,
   VAR_0 + 1, 4,
   &VAR_4, (u8 *)&VAR_6);
 }

 if (!VAR_5) {
  *VAR_3 =
   ((VAR_6 & 0xff000000) >> 8) | ((VAR_6 & 0x00ff0000) << 8)
   | ((VAR_6 & 0x0000ff00) >> 8) | ((VAR_6 & 0x000000ff) <<
   8);
 } else {
  *VAR_2 = 0;
  *VAR_3 = 0;
 }

 return VAR_5;
}
