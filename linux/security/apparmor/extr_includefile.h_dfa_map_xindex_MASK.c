
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline u16 FUNC_0(u16 VAR_6)
{
 u16 VAR_7 = (VAR_6 >> 10) & 0xf;
 u16 VAR_8 = 0;

 if (VAR_6 & 0x100)
  VAR_8 |= VAR_5;
 if (VAR_6 & 0x200)
  VAR_8 |= VAR_1;
 if (VAR_6 & 0x80)
  VAR_8 |= VAR_4;

 if (VAR_7 == 1) {
  VAR_8 |= VAR_4;
 } else if (VAR_7 == 2) {
  VAR_8 |= VAR_2;
 } else if (VAR_7 == 3) {
  VAR_8 |= VAR_2 | VAR_0;
 } else if (VAR_7) {
  VAR_8 |= VAR_3;
  VAR_8 |= VAR_7 - 4;
 }

 return VAR_8;
}
