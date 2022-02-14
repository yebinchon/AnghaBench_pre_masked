
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;




 int VAR_0 ;
 int FUNC_0 (struct hw*,int ) ;
 unsigned int FUNC_1 (struct hw*,int) ;
 int FUNC_2 (struct hw*,int ,int) ;
 int FUNC_3 (struct hw*,int,int) ;
 int FUNC_4 (struct hw*) ;
 scalar_t__ FUNC_5 (struct hw*) ;
 int FUNC_6 (struct hw*,int,int,int) ;

__attribute__((used)) static int
FUNC_7(struct hw *VAR_1, enum ADCSRC VAR_2, unsigned char VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 unsigned int VAR_6;

 if (FUNC_5(VAR_1))
  return -1;

 do {
  VAR_6 = FUNC_1(VAR_1, 0xEC);
 } while (!(VAR_6 & 0x800000));

 FUNC_3(VAR_1, 0xEC, 0x05);

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 switch (VAR_2) {
 case 128:
  VAR_4 |= (0x1 << 7);
  VAR_5 = 0x1;
  break;
 case 129:
  VAR_4 &= ~(0x1 << 7);
  VAR_5 = 0x2;
  break;
 default:
  FUNC_4(VAR_1);
  return -1;
 }
 FUNC_2(VAR_1, VAR_0, VAR_4);
 FUNC_6(VAR_1, 0x001a0080, 0x2a, VAR_5);
 if (VAR_3) {
  FUNC_6(VAR_1, 0x001a0080, 0x1c, 0xe7);
  FUNC_6(VAR_1, 0x001a0080, 0x1e, 0xe7);
 } else {
  FUNC_6(VAR_1, 0x001a0080, 0x1c, 0xcf);
  FUNC_6(VAR_1, 0x001a0080, 0x1e, 0xcf);
 }

 FUNC_4(VAR_1);

 return 0;
}
