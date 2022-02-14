
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1, VAR_0);

 switch (VAR_2 & 0x30) {
 case 0x00:
      return 0;
 case 0x10:
      return 1;
 case 0x20:
      return 2;
 default:
      return 3;
 }
}
