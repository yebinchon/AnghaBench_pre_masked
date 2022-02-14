
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hw*) ;
 int FUNC_1 (struct hw*,int ) ;
 int FUNC_2 (struct hw*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hw *VAR_2, int VAR_3)
{
 u32 VAR_4;

 if (VAR_3 == FUNC_0(VAR_2))
  return 0;


 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 |= (0x03 << 11);
 FUNC_2(VAR_2, VAR_0, VAR_4);

 VAR_4 = FUNC_1(VAR_2, VAR_1) & ~0x30;
 switch (VAR_3) {
 case 0:
  break;
 case 1:
  VAR_4 |= 0x10;
  break;
 default:
  VAR_4 |= 0x20;
 }
 FUNC_2(VAR_2, VAR_1, VAR_4);


 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 &= ~(0x03 << 11);
 FUNC_2(VAR_2, VAR_0, VAR_4);

 return 1;
}
