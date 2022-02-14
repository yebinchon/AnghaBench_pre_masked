
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int optical_in; int optical_out; int adc_pads; int dac_pads; int* output_source; int internal_clock; } ;
struct snd_emu10k1 {TYPE_3__ emu1010; TYPE_2__* card_capabilities; scalar_t__ port; TYPE_1__* card; int firmware; } ;
struct TYPE_5__ {scalar_t__ emu_model; } ;
struct TYPE_4__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;
 scalar_t__ VAR_69 ;
 scalar_t__ VAR_70 ;
 scalar_t__ VAR_71 ;
 scalar_t__ VAR_72 ;
 scalar_t__ VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ VAR_75 ;
 scalar_t__ VAR_76 ;
 scalar_t__ VAR_77 ;
 scalar_t__ VAR_78 ;
 scalar_t__ VAR_79 ;
 scalar_t__ VAR_80 ;
 scalar_t__ VAR_81 ;
 scalar_t__ VAR_82 ;
 scalar_t__ VAR_83 ;
 int VAR_84 ;
 scalar_t__ VAR_85 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct snd_emu10k1*,unsigned int,scalar_t__) ;
 int FUNC_4 (struct snd_emu10k1*,int ,int*) ;
 int FUNC_5 (struct snd_emu10k1*,int ,int) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct snd_emu10k1 *VAR_86)
{
 unsigned int VAR_87;
 u32 VAR_88, VAR_89, VAR_90;
 int VAR_91;

 FUNC_1(VAR_86->card->dev, "emu1010: Special config.\n");




 FUNC_2(0x0005a00c, VAR_86->port + VAR_85);




 FUNC_2(0x0005a004, VAR_86->port + VAR_85);



 FUNC_2(0x0005a000, VAR_86->port + VAR_85);



 FUNC_2(0x0005a000, VAR_86->port + VAR_85);


 FUNC_5(VAR_86, VAR_46, 0);


 FUNC_4(VAR_86, VAR_49, &VAR_90);
 FUNC_0(VAR_86->card->dev, "reg1 = 0x%x\n", VAR_90);
 if ((VAR_90 & 0x3f) == 0x15) {



  FUNC_5(VAR_86, VAR_48, 0x02);
 }
 FUNC_4(VAR_86, VAR_49, &VAR_90);
 FUNC_0(VAR_86->card->dev, "reg2 = 0x%x\n", VAR_90);
 if ((VAR_90 & 0x3f) == 0x15) {

  FUNC_1(VAR_86->card->dev,
    "emu1010: FPGA failed to return to programming mode\n");
  return -VAR_84;
 }
 FUNC_1(VAR_86->card->dev, "emu1010: EMU_HANA_ID = 0x%x\n", VAR_90);

 VAR_91 = FUNC_6(VAR_86, 0, &VAR_86->firmware);
 if (VAR_91 < 0) {
  FUNC_1(VAR_86->card->dev, "emu1010: Loading Firmware failed\n");
  return VAR_91;
 }


 FUNC_4(VAR_86, VAR_49, &VAR_90);
 if ((VAR_90 & 0x3f) != 0x15) {

  FUNC_1(VAR_86->card->dev,
    "emu1010: Loading Hana Firmware file failed, reg = 0x%x\n",
    VAR_90);
  return -VAR_84;
 }

 FUNC_1(VAR_86->card->dev, "emu1010: Hana Firmware loaded\n");
 FUNC_4(VAR_86, VAR_51, &VAR_88);
 FUNC_4(VAR_86, VAR_54, &VAR_89);
 FUNC_1(VAR_86->card->dev, "emu1010: Hana version: %u.%u\n", VAR_88, VAR_89);

 FUNC_5(VAR_86, VAR_46, VAR_47);

 FUNC_4(VAR_86, VAR_58, &VAR_90);
 FUNC_1(VAR_86->card->dev, "emu1010: Card options = 0x%x\n", VAR_90);
 FUNC_4(VAR_86, VAR_58, &VAR_90);
 FUNC_1(VAR_86->card->dev, "emu1010: Card options = 0x%x\n", VAR_90);
 FUNC_4(VAR_86, VAR_57, &VAR_88);




 VAR_86->emu1010.optical_in = 1;
 VAR_86->emu1010.optical_out = 1;
 VAR_88 = 0;
 VAR_88 = (VAR_86->emu1010.optical_in ? VAR_55 : 0) |
  (VAR_86->emu1010.optical_out ? VAR_56 : 0);
 FUNC_5(VAR_86, VAR_57, VAR_88);
 FUNC_4(VAR_86, VAR_41, &VAR_88);

 FUNC_5(VAR_86, VAR_41, 0x00);
 VAR_86->emu1010.adc_pads = 0x00;
 FUNC_4(VAR_86, VAR_45, &VAR_88);

 FUNC_5(VAR_86, VAR_45, 0x30);
 FUNC_5(VAR_86, VAR_44, 0x12);
 FUNC_4(VAR_86, VAR_42, &VAR_88);

 FUNC_5(VAR_86, VAR_42, 0x0f);
 VAR_86->emu1010.dac_pads = 0x0f;
 FUNC_4(VAR_86, VAR_45, &VAR_88);
 FUNC_5(VAR_86, VAR_45, 0x30);
 FUNC_4(VAR_86, VAR_59, &VAR_88);

 FUNC_5(VAR_86, VAR_59, 0x10);

 FUNC_5(VAR_86, VAR_52, 0x19);

 FUNC_5(VAR_86, VAR_53, 0x0c);



 FUNC_5(VAR_86, VAR_50, 0x00);

 FUNC_4(VAR_86, VAR_58, &VAR_90);
 FUNC_1(VAR_86->card->dev, "emu1010: Card options3 = 0x%x\n", VAR_90);

 FUNC_5(VAR_86, VAR_43, 0x00);

 FUNC_5(VAR_86, VAR_61, VAR_62);


 FUNC_5(VAR_86, VAR_44, 0x12);
 FUNC_3(VAR_86,
  VAR_0, VAR_72);
 FUNC_3(VAR_86,
  VAR_1, VAR_73);
 FUNC_3(VAR_86,
  VAR_2, VAR_75);
 FUNC_3(VAR_86,
  VAR_3, VAR_75);
 FUNC_3(VAR_86,
  VAR_4, VAR_66);
 FUNC_3(VAR_86,
  VAR_5, VAR_67);
 FUNC_3(VAR_86,
  VAR_6, VAR_68);
 FUNC_3(VAR_86,
  VAR_7, VAR_69);





 FUNC_3(VAR_86,
  VAR_8, VAR_72);
 FUNC_3(VAR_86,
  VAR_9, VAR_73);
 FUNC_3(VAR_86,
  VAR_10, VAR_75);
 FUNC_3(VAR_86,
  VAR_11, VAR_75);
 FUNC_3(VAR_86,
  VAR_12, VAR_66);
 FUNC_3(VAR_86,
  VAR_13, VAR_67);
 FUNC_3(VAR_86,
  VAR_14, VAR_68);
 FUNC_3(VAR_86,
  VAR_15, VAR_69);
 for (VAR_87 = 0; VAR_87 < 0x20; VAR_87++) {

  FUNC_3(VAR_86, 0x0100 + VAR_87, VAR_83);
 }
 for (VAR_87 = 0; VAR_87 < 4; VAR_87++) {

  FUNC_3(VAR_86, 0x0200 + VAR_87, VAR_83);
 }
 for (VAR_87 = 0; VAR_87 < 7; VAR_87++) {

  FUNC_3(VAR_86, 0x0300 + VAR_87, VAR_83);
 }
 for (VAR_87 = 0; VAR_87 < 7; VAR_87++) {

  FUNC_3(VAR_86, VAR_36 + VAR_87, VAR_83);
 }
 FUNC_3(VAR_86,
  VAR_16, VAR_66);
 FUNC_3(VAR_86,
  VAR_17, VAR_67);
 FUNC_3(VAR_86,
  VAR_18, VAR_68);
 FUNC_3(VAR_86,
  VAR_19, VAR_69);
 FUNC_3(VAR_86,
  VAR_20, VAR_70);
 FUNC_3(VAR_86,
  VAR_21, VAR_71);
 FUNC_5(VAR_86, VAR_60, 0x01);

 FUNC_4(VAR_86, VAR_58, &VAR_88);





 FUNC_2(0x0000a000, VAR_86->port + VAR_85);




 FUNC_2(0x0000a001, VAR_86->port + VAR_85);



 FUNC_4(VAR_86, VAR_58, &VAR_88);
 FUNC_5(VAR_86, VAR_52, 0x19);
 FUNC_5(VAR_86, VAR_53, 0x0c);
 FUNC_5(VAR_86, VAR_52, 0x19);
 FUNC_5(VAR_86, VAR_53, 0x0c);
 FUNC_4(VAR_86, VAR_59, &VAR_88);
 FUNC_5(VAR_86, VAR_59, 0x10);
 if (VAR_86->card_capabilities->emu_model == VAR_63) {


  FUNC_3(VAR_86,
   VAR_22, VAR_64 + 0);
  VAR_86->emu1010.output_source[0] = 17;
  FUNC_3(VAR_86,
   VAR_23, VAR_64 + 1);
  VAR_86->emu1010.output_source[1] = 18;
  FUNC_3(VAR_86,
   VAR_24, VAR_64 + 2);
  VAR_86->emu1010.output_source[2] = 19;
  FUNC_3(VAR_86,
   VAR_25, VAR_64 + 3);
  VAR_86->emu1010.output_source[3] = 20;
  FUNC_3(VAR_86,
   VAR_26, VAR_64 + 4);
  VAR_86->emu1010.output_source[4] = 21;
  FUNC_3(VAR_86,
   VAR_27, VAR_64 + 5);
  VAR_86->emu1010.output_source[5] = 22;

  FUNC_3(VAR_86,
   VAR_39, VAR_64 + 0);
  VAR_86->emu1010.output_source[16] = 17;
  FUNC_3(VAR_86,
   VAR_40, VAR_64 + 1);
  VAR_86->emu1010.output_source[17] = 18;
 } else {

  FUNC_3(VAR_86,
   VAR_22, VAR_64 + 0);
  VAR_86->emu1010.output_source[0] = 21;
  FUNC_3(VAR_86,
   VAR_23, VAR_64 + 1);
  VAR_86->emu1010.output_source[1] = 22;
  FUNC_3(VAR_86,
   VAR_24, VAR_64 + 2);
  VAR_86->emu1010.output_source[2] = 23;
  FUNC_3(VAR_86,
   VAR_25, VAR_64 + 3);
  VAR_86->emu1010.output_source[3] = 24;
  FUNC_3(VAR_86,
   VAR_26, VAR_64 + 4);
  VAR_86->emu1010.output_source[4] = 25;
  FUNC_3(VAR_86,
   VAR_27, VAR_64 + 5);
  VAR_86->emu1010.output_source[5] = 26;
  FUNC_3(VAR_86,
   VAR_28, VAR_64 + 6);
  VAR_86->emu1010.output_source[6] = 27;
  FUNC_3(VAR_86,
   VAR_29, VAR_64 + 7);
  VAR_86->emu1010.output_source[7] = 28;

  FUNC_3(VAR_86,
   VAR_30, VAR_64 + 0);
  VAR_86->emu1010.output_source[8] = 21;
  FUNC_3(VAR_86,
   VAR_31, VAR_64 + 1);
  VAR_86->emu1010.output_source[9] = 22;

  FUNC_3(VAR_86,
   VAR_32, VAR_64 + 0);
  VAR_86->emu1010.output_source[10] = 21;
  FUNC_3(VAR_86,
   VAR_33, VAR_64 + 1);
  VAR_86->emu1010.output_source[11] = 22;

  FUNC_3(VAR_86,
   VAR_37, VAR_64 + 0);
  VAR_86->emu1010.output_source[12] = 21;
  FUNC_3(VAR_86,
   VAR_38, VAR_64 + 1);
  VAR_86->emu1010.output_source[13] = 22;

  FUNC_3(VAR_86,
   VAR_34, VAR_64 + 0);
  VAR_86->emu1010.output_source[14] = 21;
  FUNC_3(VAR_86,
   VAR_35, VAR_64 + 1);
  VAR_86->emu1010.output_source[15] = 22;

  FUNC_3(VAR_86,
   VAR_36, VAR_64 + 0);
  VAR_86->emu1010.output_source[16] = 21;
  FUNC_3(VAR_86,
   VAR_36 + 1, VAR_64 + 1);
  VAR_86->emu1010.output_source[17] = 22;
  FUNC_3(VAR_86,
   VAR_36 + 2, VAR_64 + 2);
  VAR_86->emu1010.output_source[18] = 23;
  FUNC_3(VAR_86,
   VAR_36 + 3, VAR_64 + 3);
  VAR_86->emu1010.output_source[19] = 24;
  FUNC_3(VAR_86,
   VAR_36 + 4, VAR_64 + 4);
  VAR_86->emu1010.output_source[20] = 25;
  FUNC_3(VAR_86,
   VAR_36 + 5, VAR_64 + 5);
  VAR_86->emu1010.output_source[21] = 26;
  FUNC_3(VAR_86,
   VAR_36 + 6, VAR_64 + 6);
  VAR_86->emu1010.output_source[22] = 27;
  FUNC_3(VAR_86,
   VAR_36 + 7, VAR_64 + 7);
  VAR_86->emu1010.output_source[23] = 28;
 }




 FUNC_5(VAR_86, VAR_60, 0x0);
 FUNC_5(VAR_86, VAR_43, 0x0);

 FUNC_5(VAR_86, VAR_61, VAR_62);

 VAR_86->emu1010.internal_clock = 1;
 FUNC_5(VAR_86, VAR_44, 0x12);
 FUNC_5(VAR_86, VAR_60, 0x1);




 return 0;
}
