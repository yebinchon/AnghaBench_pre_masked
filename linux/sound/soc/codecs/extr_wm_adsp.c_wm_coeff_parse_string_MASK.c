
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int VAR_0, const u8 **VAR_1, const u8 **VAR_2)
{
 int VAR_3;

 switch (VAR_0) {
 case 1:
  VAR_3 = **VAR_1;
  break;
 case 2:
  VAR_3 = FUNC_0(*((__le16 *)*VAR_1));
  break;
 default:
  return 0;
 }

 if (VAR_2)
  *VAR_2 = *VAR_1 + VAR_0;

 *VAR_1 += ((VAR_3 + VAR_0) + 3) & ~0x03;

 return VAR_3;
}
