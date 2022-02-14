
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function_flags; int misc_flags; int dac_i2s_format; int device_config; int adc_i2s_format; int adc_mclks; int dac_mclks; int dac_volume_min; } ;
struct oxygen {int dac_routing; int dac_mute; int spdif_bits; int spdif_pcm_bits; int has_ac97_0; int has_ac97_1; TYPE_1__ model; scalar_t__ spdif_playback_enable; int * dac_volume; } ;


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
 unsigned int VAR_51 ;
 unsigned int VAR_52 ;
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
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int FUNC_0 (int ) ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int VAR_132 ;
 int VAR_133 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct oxygen*,int ,int ,int ) ;
 int FUNC_3 (struct oxygen*,int,int,int) ;
 int FUNC_4 (struct oxygen*,int ,int) ;
 int FUNC_5 (struct oxygen*,int ,int ) ;
 unsigned int FUNC_6 (struct oxygen*,int ) ;
 int FUNC_7 (struct oxygen*,int ) ;
 int FUNC_8 (struct oxygen*,int ,int ) ;
 int FUNC_9 (struct oxygen*,int ,int) ;
 int FUNC_10 (struct oxygen*,int ,int ) ;
 int FUNC_11 (struct oxygen*,int ,int) ;
 int FUNC_12 (struct oxygen*,int ,int) ;
 int FUNC_13 (struct oxygen*,int ,int,int) ;
 int FUNC_14 (struct oxygen*,int ,int) ;
 int FUNC_15 (struct oxygen*,int ,int,int) ;
 int FUNC_16 (struct oxygen*,int,int ,int) ;

__attribute__((used)) static void FUNC_17(struct oxygen *VAR_134)
{
 unsigned int VAR_135;

 VAR_134->dac_routing = 1;
 for (VAR_135 = 0; VAR_135 < 8; ++VAR_135)
  VAR_134->dac_volume[VAR_135] = VAR_134->model.dac_volume_min;
 VAR_134->dac_mute = 1;
 VAR_134->spdif_playback_enable = 0;
 VAR_134->spdif_bits = VAR_119 | VAR_128 |
  (VAR_43 << VAR_120);
 VAR_134->spdif_pcm_bits = VAR_134->spdif_bits;

 if (!(FUNC_7(VAR_134, VAR_117) & VAR_118))
  FUNC_10(VAR_134, VAR_86,
     VAR_88);

 VAR_135 = FUNC_6(VAR_134, VAR_53);
 VAR_134->has_ac97_0 = (VAR_135 & VAR_51) != 0;
 VAR_134->has_ac97_1 = (VAR_135 & VAR_52) != 0;

 FUNC_15(VAR_134, VAR_71,
        VAR_74 |
        VAR_134->model.function_flags,
        VAR_74 |
        VAR_72 |
        VAR_73);
 FUNC_14(VAR_134, VAR_69, 0);
 FUNC_14(VAR_134, VAR_68, 0);
 FUNC_14(VAR_134, VAR_96,
        VAR_97 |
        VAR_66 |
        VAR_67);
 FUNC_11(VAR_134, VAR_85, 0);
 FUNC_15(VAR_134, VAR_86,
        VAR_134->model.misc_flags,
        VAR_92 |
        VAR_91 |
        VAR_90 |
        VAR_89 |
        VAR_87);
 FUNC_14(VAR_134, VAR_112,
        (VAR_70 << VAR_113) |
        (VAR_70 << VAR_114) |
        (VAR_70 << VAR_115));
 FUNC_14(VAR_134, VAR_102,
        (VAR_70 << VAR_122) |
        (VAR_70 << VAR_95));
 FUNC_14(VAR_134, VAR_109, VAR_110);
 FUNC_11(VAR_134, VAR_83,
         VAR_106 |
         VAR_134->model.dac_i2s_format |
         FUNC_0(VAR_134->model.dac_mclks) |
         VAR_79 |
         VAR_82 |
         VAR_78);
 if (VAR_134->model.device_config & VAR_21)
  FUNC_11(VAR_134, VAR_77,
          VAR_106 |
          VAR_134->model.adc_i2s_format |
          FUNC_0(VAR_134->model.adc_mclks) |
          VAR_79 |
          VAR_82 |
          VAR_78);
 else
  FUNC_11(VAR_134, VAR_77,
          VAR_82 |
          VAR_84);
 if (VAR_134->model.device_config & (VAR_22 |
      VAR_24))
  FUNC_11(VAR_134, VAR_80,
          VAR_106 |
          VAR_134->model.adc_i2s_format |
          FUNC_0(VAR_134->model.adc_mclks) |
          VAR_79 |
          VAR_82 |
          VAR_78);
 else
  FUNC_11(VAR_134, VAR_80,
          VAR_82 |
          VAR_84);
 if (VAR_134->model.device_config & VAR_25)
  FUNC_11(VAR_134, VAR_81,
          VAR_106 |
          VAR_134->model.adc_i2s_format |
          FUNC_0(VAR_134->model.adc_mclks) |
          VAR_79 |
          VAR_82 |
          VAR_78);
 else
  FUNC_11(VAR_134, VAR_81,
          VAR_82 |
          VAR_84);
 FUNC_4(VAR_134, VAR_121,
       VAR_130 |
       VAR_127);
 if (VAR_134->model.device_config & VAR_23)
  FUNC_13(VAR_134, VAR_121,
          VAR_132 |
          VAR_125 |
          VAR_131 |
          VAR_126 |
          VAR_123,
          VAR_132 |
          VAR_125 |
          VAR_131 |
          VAR_133 |
          VAR_126 |
          VAR_124);
 else
  FUNC_4(VAR_134, VAR_121,
        VAR_132 |
        VAR_125 |
        VAR_131);
 FUNC_12(VAR_134, VAR_129, VAR_134->spdif_bits);
 FUNC_11(VAR_134, VAR_44,
         VAR_46 |
         VAR_45 |
         VAR_47);
 FUNC_5(VAR_134, VAR_93, VAR_94);
 FUNC_14(VAR_134, VAR_76, 0);
 FUNC_11(VAR_134, VAR_75, 0);
 FUNC_11(VAR_134, VAR_104,
         VAR_103 |
         VAR_105 |
         (0 << VAR_98) |
         (1 << VAR_99) |
         (2 << VAR_100) |
         (3 << VAR_101));
 FUNC_14(VAR_134, VAR_116,
        VAR_107 |
        VAR_108 |
        VAR_111);
 FUNC_14(VAR_134, VAR_60, 0);
 FUNC_14(VAR_134, VAR_65,
        (0 << VAR_61) |
        (1 << VAR_62) |
        (2 << VAR_63) |
        (3 << VAR_64));

 if (VAR_134->has_ac97_0 | VAR_134->has_ac97_1)
  FUNC_14(VAR_134, VAR_54,
         VAR_55 |
         VAR_56);
 else
  FUNC_14(VAR_134, VAR_54, 0);
 FUNC_12(VAR_134, VAR_59, 0);
 FUNC_12(VAR_134, VAR_57, 0);
 if (!(VAR_134->has_ac97_0 | VAR_134->has_ac97_1))
  FUNC_8(VAR_134, VAR_53,
      VAR_48);
 if (!VAR_134->has_ac97_0) {
  FUNC_8(VAR_134, VAR_53,
      VAR_58);
 } else {
  FUNC_16(VAR_134, 0, VAR_18, 0);
  FUNC_1(1);
  FUNC_3(VAR_134, 0, VAR_31,
         VAR_29 | VAR_30);
  FUNC_3(VAR_134, 0, VAR_38,
         VAR_26 | VAR_42 |
         VAR_37 | VAR_39);
  FUNC_3(VAR_134, 0, VAR_34,
         VAR_40 | VAR_27 |
         VAR_41 | VAR_28 |
         VAR_36 | VAR_35);
  FUNC_16(VAR_134, 0, VAR_9, 0x0000);
  FUNC_16(VAR_134, 0, VAR_12, 0x8000);
  FUNC_16(VAR_134, 0, VAR_10, 0x8808);
  FUNC_16(VAR_134, 0, VAR_8, 0x0808);
  FUNC_16(VAR_134, 0, VAR_1, 0x8808);
  FUNC_16(VAR_134, 0, VAR_20, 0x8808);
  FUNC_16(VAR_134, 0, VAR_0, 0x8808);
  FUNC_16(VAR_134, 0, VAR_16, 0x8000);
  FUNC_16(VAR_134, 0, VAR_2, 0x8080);
  FUNC_16(VAR_134, 0, VAR_19, 0x8080);
  FUNC_2(VAR_134, 0, VAR_32,
           VAR_33);

  FUNC_3(VAR_134, 0, VAR_15,
         VAR_13 | VAR_14);
  FUNC_3(VAR_134, 0, VAR_6,
         VAR_3 | VAR_4 | VAR_5);
 }
 if (VAR_134->has_ac97_1) {
  FUNC_9(VAR_134, VAR_59,
      VAR_49 |
      VAR_50);
  FUNC_16(VAR_134, 1, VAR_18, 0);
  FUNC_1(1);
  FUNC_16(VAR_134, 1, VAR_9, 0x0000);
  FUNC_16(VAR_134, 1, VAR_7, 0x8000);
  FUNC_16(VAR_134, 1, VAR_12, 0x8000);
  FUNC_16(VAR_134, 1, VAR_10, 0x8808);
  FUNC_16(VAR_134, 1, VAR_8, 0x8808);
  FUNC_16(VAR_134, 1, VAR_1, 0x8808);
  FUNC_16(VAR_134, 1, VAR_20, 0x8808);
  FUNC_16(VAR_134, 1, VAR_0, 0x8808);
  FUNC_16(VAR_134, 1, VAR_11, 0x0808);
  FUNC_16(VAR_134, 1, VAR_17, 0x0000);
  FUNC_16(VAR_134, 1, VAR_16, 0x0000);
  FUNC_3(VAR_134, 1, 0x6a, 0x0040);
 }
}
