
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le16 ;






 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(__le16 VAR_1,
         u16 VAR_2[VAR_0])
{
 int VAR_3;
 u16 VAR_4, VAR_5 = FUNC_0(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = (VAR_5 >> VAR_3 * 2) & 131;
  switch (VAR_4) {
  case 130:
   VAR_2[VAR_3] = 0x00FF;
   break;
  case 129:
   VAR_2[VAR_3] = 0x01FF;
   break;
  case 128:
   VAR_2[VAR_3] = 0x03FF;
   break;
  case 131:
  default:
   VAR_2[VAR_3] = 0;
   break;
  }
 }
}
