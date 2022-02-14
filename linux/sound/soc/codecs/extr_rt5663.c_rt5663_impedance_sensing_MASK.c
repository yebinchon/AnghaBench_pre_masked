
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {unsigned int impedance_sensing_num; } ;
struct rt5663_priv {scalar_t__ jack_type; TYPE_2__* imp_table; TYPE_1__ pdata; } ;
struct TYPE_4__ {int vol; int dc_offset_l_manual_mic; int dc_offset_r_manual_mic; int dc_offset_l_manual; int dc_offset_r_manual; unsigned int imp_min; unsigned int imp_max; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
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
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 scalar_t__ VAR_67 ;
 int FUNC_0 (int) ;
 struct rt5663_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_68)
{
 struct rt5663_priv *VAR_69 = FUNC_1(VAR_68);
 unsigned int VAR_70, VAR_71, VAR_72, VAR_73, VAR_74, VAR_75, VAR_76, VAR_77;

 for (VAR_71 = 0; VAR_71 < VAR_69->pdata.impedance_sensing_num; VAR_71++) {
  if (VAR_69->imp_table[VAR_71].vol == 7)
   break;
 }

 if (VAR_69->jack_type == VAR_67) {
  FUNC_4(VAR_68, VAR_29,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual_mic >> 16);
  FUNC_4(VAR_68, VAR_30,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual_mic & 0xffff);
  FUNC_4(VAR_68, VAR_31,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual_mic >> 16);
  FUNC_4(VAR_68, VAR_32,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual_mic & 0xffff);
 } else {
  FUNC_4(VAR_68, VAR_29,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual >> 16);
  FUNC_4(VAR_68, VAR_30,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual & 0xffff);
  FUNC_4(VAR_68, VAR_31,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual >> 16);
  FUNC_4(VAR_68, VAR_32,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual & 0xffff);
 }

 VAR_72 = FUNC_2(VAR_68, VAR_3);
 VAR_73 = FUNC_2(VAR_68, VAR_61);
 VAR_74 = FUNC_2(VAR_68, VAR_14);
 VAR_75 = FUNC_2(VAR_68, VAR_19);
 VAR_76 = FUNC_2(VAR_68, VAR_58);
 VAR_77 = FUNC_2(VAR_68, VAR_16);

 FUNC_3(VAR_68, VAR_64, 0x8000, 0);
 FUNC_4(VAR_68, VAR_3, 0);
 FUNC_4(VAR_68, VAR_61, 0x4040);
 FUNC_3(VAR_68, VAR_38,
  VAR_54 | VAR_56 |
  VAR_46 | VAR_48,
  VAR_53 | VAR_55);
 FUNC_5(10000, 10005);
 FUNC_3(VAR_68, VAR_38,
  VAR_46 | VAR_48,
  VAR_45 | VAR_47);
 FUNC_3(VAR_68, VAR_16, VAR_59,
  VAR_60);
 FUNC_3(VAR_68, VAR_57, VAR_12,
  VAR_11);
 FUNC_3(VAR_68, VAR_0, VAR_26, 0);
 FUNC_4(VAR_68, VAR_33, 0xff00);
 FUNC_4(VAR_68, VAR_34, 0xfffc);
 FUNC_4(VAR_68, VAR_19, 0x1232);
 FUNC_4(VAR_68, VAR_24, 0x0005);
 FUNC_4(VAR_68, VAR_9, 0x3003);
 FUNC_3(VAR_68, VAR_8, 0x0030, 0x0030);
 FUNC_3(VAR_68, VAR_8, 0x0003, 0x0003);
 FUNC_3(VAR_68, VAR_44,
  VAR_37 | VAR_42,
  VAR_37 | VAR_42);
 FUNC_3(VAR_68, VAR_43,
  VAR_40 | VAR_41 |
  VAR_49 | VAR_35 |
  VAR_36,
  VAR_40 | VAR_41 |
  VAR_50 | VAR_35 |
  VAR_36);
 FUNC_0(40);
 FUNC_3(VAR_68, VAR_39,
  VAR_51 | VAR_52,
  VAR_51 | VAR_52);
 FUNC_0(30);
 FUNC_4(VAR_68, VAR_20, 0x1371);
 FUNC_4(VAR_68, VAR_63, 0);
 FUNC_4(VAR_68, VAR_4, 0x000c);
 FUNC_4(VAR_68, VAR_17, 0xafaa);
 FUNC_4(VAR_68, VAR_5, 0x2224);
 FUNC_4(VAR_68, VAR_25, 0x8088);
 FUNC_4(VAR_68, VAR_7, 0x3000);
 FUNC_4(VAR_68, VAR_1, 0xc000);
 FUNC_4(VAR_68, VAR_62, 0x3320);
 FUNC_4(VAR_68, VAR_18, 0x00c9);
 FUNC_4(VAR_68, VAR_14, 0x004c);
 FUNC_4(VAR_68, VAR_2, 0x7733);
 FUNC_4(VAR_68, VAR_6, 0x7777);
 FUNC_4(VAR_68, VAR_66, 0x0007);
 FUNC_4(VAR_68, VAR_65, 0x0007);
 FUNC_4(VAR_68, VAR_15, 0x02a4);
 FUNC_4(VAR_68, VAR_58, 0x0005);
 FUNC_4(VAR_68, VAR_21, 0x4334);
 FUNC_3(VAR_68, VAR_28, 0x0004, 0x0004);
 FUNC_4(VAR_68, VAR_23, 0x2200);
 FUNC_3(VAR_68, VAR_8, 0x3000, 0x3000);
 FUNC_4(VAR_68, VAR_23, 0x6200);

 for (VAR_71 = 0; VAR_71 < 100; VAR_71++) {
  FUNC_0(20);
  if (FUNC_2(VAR_68, VAR_27) & 0x2)
   break;
 }

 VAR_70 = FUNC_2(VAR_68, VAR_22);

 FUNC_3(VAR_68, VAR_8, 0x3000, 0);
 FUNC_4(VAR_68, VAR_27, 0);
 FUNC_4(VAR_68, VAR_23, 0);
 FUNC_3(VAR_68, VAR_57, VAR_12,
  VAR_10);
 FUNC_4(VAR_68, VAR_16, VAR_77);
 FUNC_4(VAR_68, VAR_58, VAR_76);
 FUNC_4(VAR_68, VAR_15, 0x00a4);
 FUNC_4(VAR_68, VAR_14, VAR_74);
 FUNC_4(VAR_68, VAR_18, 0x00c8);
 FUNC_4(VAR_68, VAR_62, 0xb320);
 FUNC_4(VAR_68, VAR_1, 0xe400);
 FUNC_4(VAR_68, VAR_7, 0x2000);
 FUNC_4(VAR_68, VAR_25, 0x0008);
 FUNC_3(VAR_68, VAR_39,
  VAR_51 | VAR_52, 0);
 FUNC_3(VAR_68, VAR_43,
  VAR_40 | VAR_41 |
  VAR_49 | VAR_35 |
  VAR_36, 0);
 FUNC_3(VAR_68, VAR_44,
  VAR_37 | VAR_42, 0);
 FUNC_3(VAR_68, VAR_8, 0x0003, 0);
 FUNC_3(VAR_68, VAR_8, 0x0030, 0);
 FUNC_4(VAR_68, VAR_24, 0);
 FUNC_4(VAR_68, VAR_19, VAR_75);
 FUNC_3(VAR_68, VAR_38,
  VAR_54 | VAR_56, 0);
 FUNC_4(VAR_68, VAR_61, VAR_73);
 FUNC_4(VAR_68, VAR_3, VAR_72);

 for (VAR_71 = 0; VAR_71 < VAR_69->pdata.impedance_sensing_num; VAR_71++) {
  if (VAR_70 >= VAR_69->imp_table[VAR_71].imp_min &&
   VAR_70 <= VAR_69->imp_table[VAR_71].imp_max)
   break;
 }

 FUNC_3(VAR_68, VAR_66, VAR_13,
  VAR_69->imp_table[VAR_71].vol);
 FUNC_3(VAR_68, VAR_65, VAR_13,
  VAR_69->imp_table[VAR_71].vol);

 if (VAR_69->jack_type == VAR_67) {
  FUNC_4(VAR_68, VAR_29,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual_mic >> 16);
  FUNC_4(VAR_68, VAR_30,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual_mic & 0xffff);
  FUNC_4(VAR_68, VAR_31,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual_mic >> 16);
  FUNC_4(VAR_68, VAR_32,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual_mic & 0xffff);
 } else {
  FUNC_4(VAR_68, VAR_29,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual >> 16);
  FUNC_4(VAR_68, VAR_30,
   VAR_69->imp_table[VAR_71].dc_offset_l_manual & 0xffff);
  FUNC_4(VAR_68, VAR_31,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual >> 16);
  FUNC_4(VAR_68, VAR_32,
   VAR_69->imp_table[VAR_71].dc_offset_r_manual & 0xffff);
 }

 return 0;
}
