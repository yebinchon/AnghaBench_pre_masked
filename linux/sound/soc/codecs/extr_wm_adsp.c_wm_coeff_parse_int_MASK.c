
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, const u8 **VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_0) {
 case 2:
  VAR_2 = FUNC_0(*((__le16 *)*VAR_1));
  break;
 case 4:
  VAR_2 = FUNC_1(*((__le32 *)*VAR_1));
  break;
 default:
  break;
 }

 *VAR_1 += VAR_0;

 return VAR_2;
}
