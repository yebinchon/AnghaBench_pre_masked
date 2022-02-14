
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;




 int VAR_0 ;
 int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int,int) ;
 int FUNC_2 (struct hw*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hw *VAR_1, enum ADCSRC VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 switch (VAR_2) {
 case 128:
  VAR_3 |= (0x1 << 14);
  FUNC_2(VAR_1, VAR_0, VAR_3);
  FUNC_1(VAR_1, 0, 20);
  break;
 case 129:
  VAR_3 &= ~(0x1 << 14);
  FUNC_2(VAR_1, VAR_0, VAR_3);
  FUNC_1(VAR_1, 1, 0);
  break;
 default:
  break;
 }

 return 0;
}
