
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; struct mt8183_afe_private* platform_priv; } ;
struct mt8183_afe_private {int mtkaif_protocol; int* mtkaif_phase_cycle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_9)
{
 struct mt8183_afe_private *VAR_10 = VAR_9->platform_priv;
 int VAR_11;
 int VAR_12;

 switch (VAR_10->mtkaif_protocol) {
 case 128:
  FUNC_1(VAR_9->regmap, VAR_2, 0x38);
  FUNC_1(VAR_9->regmap, VAR_2, 0x39);

  FUNC_1(VAR_9->regmap, VAR_0,
        0x80010000);

  if (VAR_10->mtkaif_phase_cycle[0] >=
      VAR_10->mtkaif_phase_cycle[1]) {
   VAR_11 = VAR_3;
   VAR_12 = VAR_10->mtkaif_phase_cycle[0] -
          VAR_10->mtkaif_phase_cycle[1];
  } else {
   VAR_11 = VAR_4;
   VAR_12 = VAR_10->mtkaif_phase_cycle[1] -
          VAR_10->mtkaif_phase_cycle[0];
  }

  FUNC_0(VAR_9->regmap,
       VAR_1,
       VAR_7,
       VAR_11 << VAR_8);

  FUNC_0(VAR_9->regmap,
       VAR_1,
       VAR_5,
       VAR_12 << VAR_6);
  break;
 case 129:
  FUNC_1(VAR_9->regmap, VAR_2, 0x31);
  FUNC_1(VAR_9->regmap, VAR_0,
        0x00010000);
  break;
 case 130:
  FUNC_1(VAR_9->regmap, VAR_2, 0x31);
  FUNC_1(VAR_9->regmap, VAR_0, 0x0);
 default:
  break;
 }

 return 0;
}
