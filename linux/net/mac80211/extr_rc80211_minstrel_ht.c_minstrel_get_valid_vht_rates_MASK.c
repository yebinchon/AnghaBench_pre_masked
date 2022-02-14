
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u16
FUNC_3(int VAR_3, int VAR_4, __le16 VAR_5)
{
 u16 VAR_6 = 0;

 if (VAR_3 == VAR_0) {
  if (VAR_4 != 3 && VAR_4 != 6)
   VAR_6 = FUNC_0(9);
 } else if (VAR_3 == VAR_2) {
  if (VAR_4 == 3 || VAR_4 == 7)
   VAR_6 = FUNC_0(6);
  else if (VAR_4 == 6)
   VAR_6 = FUNC_0(9);
 } else {
  FUNC_1(VAR_3 != VAR_1);
 }

 switch ((FUNC_2(VAR_5) >> (2 * (VAR_4 - 1))) & 3) {
 case 130:
  VAR_6 |= 0x300;
  break;
 case 129:
  VAR_6 |= 0x200;
  break;
 case 128:
  break;
 default:
  VAR_6 = 0x3ff;
 }

 return 0x3ff & ~VAR_6;
}
