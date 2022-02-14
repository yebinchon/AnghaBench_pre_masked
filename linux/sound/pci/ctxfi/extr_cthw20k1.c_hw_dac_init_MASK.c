
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hw {scalar_t__ model; } ;
struct dac_conf {int msr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hw*,int ) ;
 unsigned int FUNC_1 (struct hw*,int) ;
 int FUNC_2 (struct hw*) ;
 int FUNC_3 (struct hw*,int ,int) ;
 int FUNC_4 (struct hw*,int,int) ;
 int FUNC_5 (struct hw*) ;
 scalar_t__ FUNC_6 (struct hw*) ;
 int FUNC_7 (struct hw*,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct hw *VAR_2, const struct dac_conf *VAR_3)
{
 u32 VAR_4;
 u16 VAR_5;
 unsigned int VAR_6;

 if (VAR_2->model == VAR_0) {

  VAR_5 = (u16)FUNC_0(VAR_2, VAR_1);
  VAR_5 &= 0xffbf;
  VAR_5 |= 2;
  FUNC_3(VAR_2, VAR_1, VAR_5);
  return 0;
 }


 VAR_5 = (u16)FUNC_0(VAR_2, VAR_1);
 VAR_5 &= 0xffbf;
 FUNC_3(VAR_2, VAR_1, VAR_5);

 FUNC_2(VAR_2);

 if (FUNC_6(VAR_2))
  return -1;

 FUNC_4(VAR_2, 0xEC, 0x05);
 do {
  VAR_6 = FUNC_1(VAR_2, 0xEC);
 } while (!(VAR_6 & 0x800000));

 switch (VAR_3->msr) {
 case 1:
  VAR_4 = 0x24;
  break;
 case 2:
  VAR_4 = 0x25;
  break;
 case 4:
  VAR_4 = 0x26;
  break;
 default:
  VAR_4 = 0x24;
  break;
 }

 FUNC_7(VAR_2, 0x00180080, 0x06, VAR_4);
 FUNC_7(VAR_2, 0x00180080, 0x09, VAR_4);
 FUNC_7(VAR_2, 0x00180080, 0x0c, VAR_4);
 FUNC_7(VAR_2, 0x00180080, 0x0f, VAR_4);

 FUNC_5(VAR_2);


 VAR_5 = (u16)FUNC_0(VAR_2, VAR_1);
 VAR_5 = VAR_5 | 0x40;
 FUNC_3(VAR_2, VAR_1, VAR_5);

 return 0;
}
