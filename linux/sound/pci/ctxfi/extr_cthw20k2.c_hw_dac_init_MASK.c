
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regs_cs4382 {int mode_control_1; int mode_control_2; int mode_control_3; int filter_control; int invert_control; int mix_control_P1; int vol_control_A1; int vol_control_B1; int mix_control_P2; int vol_control_A2; int vol_control_B2; int mix_control_P3; int vol_control_A3; int vol_control_B3; int mix_control_P4; int vol_control_A4; int vol_control_B4; int member_0; } ;
struct hw {scalar_t__ model; } ;
struct dac_conf {int msr; } ;
typedef int cs_read ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct hw*,int,int,int) ;
 scalar_t__ FUNC_1 (struct hw*,int ,int*) ;
 int FUNC_2 (struct hw*) ;
 int FUNC_3 (struct hw*,int ,int) ;
 int FUNC_4 (struct hw*) ;
 int FUNC_5 (struct hw*) ;
 int FUNC_6 (struct hw*) ;
 int FUNC_7 (struct hw*,int ) ;
 int FUNC_8 (struct hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct regs_cs4382*,struct regs_cs4382*,int) ;

__attribute__((used)) static int FUNC_10(struct hw *VAR_20, const struct dac_conf *VAR_21)
{
 int VAR_22;
 u32 VAR_23;
 int VAR_24;
 struct regs_cs4382 VAR_25 = {0};
 struct regs_cs4382 VAR_26 = {
  .mode_control_1 = 0x00000001,
  .mode_control_2 = 0x00000000,
  .mode_control_3 = 0x00000084,
  .filter_control = 0x00000000,
  .invert_control = 0x00000000,
  .mix_control_P1 = 0x00000024,
  .vol_control_A1 = 0x00000000,
  .vol_control_B1 = 0x00000000,
  .mix_control_P2 = 0x00000024,
  .vol_control_A2 = 0x00000000,
  .vol_control_B2 = 0x00000000,
  .mix_control_P3 = 0x00000024,
  .vol_control_A3 = 0x00000000,
  .vol_control_B3 = 0x00000000,
  .mix_control_P4 = 0x00000024,
  .vol_control_A4 = 0x00000000,
  .vol_control_B4 = 0x00000000
     };

 if (VAR_20->model == VAR_17) {
  FUNC_6(VAR_20);
  VAR_23 = FUNC_7(VAR_20, VAR_19);
  VAR_23 &= ~0x0600;
  if (1 == VAR_21->msr)
   VAR_23 |= 0x0000;
  else if (2 == VAR_21->msr)
   VAR_23 |= 0x0200;
  else
   VAR_23 |= 0x0600;
  FUNC_8(VAR_20, VAR_19, VAR_23);
  FUNC_5(VAR_20);
  return 0;
 }


 VAR_23 = FUNC_7(VAR_20, VAR_18);
 VAR_23 |= 0x02;
 FUNC_8(VAR_20, VAR_18, VAR_23);

 VAR_22 = FUNC_0(VAR_20, 0x18, 1, 1);
 if (VAR_22 < 0)
  goto End;

 for (VAR_24 = 0; VAR_24 < 2; VAR_24++) {


  FUNC_4(VAR_20);
  FUNC_4(VAR_20);

  if (FUNC_1(VAR_20, VAR_2, &VAR_25.mode_control_1))
   continue;

  if (FUNC_1(VAR_20, VAR_3, &VAR_25.mode_control_2))
   continue;

  if (FUNC_1(VAR_20, VAR_4, &VAR_25.mode_control_3))
   continue;

  if (FUNC_1(VAR_20, VAR_0, &VAR_25.filter_control))
   continue;

  if (FUNC_1(VAR_20, VAR_1, &VAR_25.invert_control))
   continue;

  if (FUNC_1(VAR_20, VAR_13, &VAR_25.mix_control_P1))
   continue;

  if (FUNC_1(VAR_20, VAR_5, &VAR_25.vol_control_A1))
   continue;

  if (FUNC_1(VAR_20, VAR_9, &VAR_25.vol_control_B1))
   continue;

  if (FUNC_1(VAR_20, VAR_14, &VAR_25.mix_control_P2))
   continue;

  if (FUNC_1(VAR_20, VAR_6, &VAR_25.vol_control_A2))
   continue;

  if (FUNC_1(VAR_20, VAR_10, &VAR_25.vol_control_B2))
   continue;

  if (FUNC_1(VAR_20, VAR_15, &VAR_25.mix_control_P3))
   continue;

  if (FUNC_1(VAR_20, VAR_7, &VAR_25.vol_control_A3))
   continue;

  if (FUNC_1(VAR_20, VAR_11, &VAR_25.vol_control_B3))
   continue;

  if (FUNC_1(VAR_20, VAR_16, &VAR_25.mix_control_P4))
   continue;

  if (FUNC_1(VAR_20, VAR_8, &VAR_25.vol_control_A4))
   continue;

  if (FUNC_1(VAR_20, VAR_12, &VAR_25.vol_control_B4))
   continue;

  if (FUNC_9(&VAR_25, &VAR_26, sizeof(VAR_25)))
   continue;
  else
   break;
 }

 if (VAR_24 >= 2)
  goto End;



 FUNC_3(VAR_20, VAR_2, 0x80);
 FUNC_3(VAR_20, VAR_3, 0x10);
 if (1 == VAR_21->msr) {
  FUNC_3(VAR_20, VAR_13, 0x24);
  FUNC_3(VAR_20, VAR_14, 0x24);
  FUNC_3(VAR_20, VAR_15, 0x24);
  FUNC_3(VAR_20, VAR_16, 0x24);
 } else if (2 == VAR_21->msr) {
  FUNC_3(VAR_20, VAR_13, 0x25);
  FUNC_3(VAR_20, VAR_14, 0x25);
  FUNC_3(VAR_20, VAR_15, 0x25);
  FUNC_3(VAR_20, VAR_16, 0x25);
 } else {
  FUNC_3(VAR_20, VAR_13, 0x26);
  FUNC_3(VAR_20, VAR_14, 0x26);
  FUNC_3(VAR_20, VAR_15, 0x26);
  FUNC_3(VAR_20, VAR_16, 0x26);
 }

 return 0;
End:

 FUNC_2(VAR_20);
 return -1;
}
