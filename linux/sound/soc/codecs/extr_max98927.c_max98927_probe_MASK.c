
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max98927_priv {int i_l_slot; int v_l_slot; int regmap; scalar_t__ interleave_mode; struct snd_soc_component* component; } ;


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
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct max98927_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_25)
{
 struct max98927_priv *VAR_26 = FUNC_2(VAR_25);

 VAR_26->component = VAR_25;


 FUNC_1(VAR_26->regmap,
  VAR_23, VAR_24);


 FUNC_1(VAR_26->regmap,
  VAR_4,
  0xFF);
 FUNC_1(VAR_26->regmap,
  VAR_5,
  0xFF);
 FUNC_1(VAR_26->regmap,
  VAR_8,
  0x80);
 FUNC_1(VAR_26->regmap,
  VAR_9,
  0x1);

 FUNC_1(VAR_26->regmap,
  VAR_10,
  0x38);
 FUNC_1(VAR_26->regmap,
  VAR_12,
  0x05);

 FUNC_1(VAR_26->regmap,
  VAR_11,
  0x03);

 FUNC_1(VAR_26->regmap,
  VAR_13,
  0xF7);

 FUNC_1(VAR_26->regmap,
  VAR_14,
  0x1C);
 FUNC_1(VAR_26->regmap,
  VAR_15,
  0x3E);

 FUNC_1(VAR_26->regmap,
  VAR_16,
  0x04);
 FUNC_1(VAR_26->regmap,
  VAR_17,
  0x00);
 FUNC_1(VAR_26->regmap,
  VAR_18,
  0x24);

 FUNC_1(VAR_26->regmap,
  VAR_19,
  0x06);

 FUNC_1(VAR_26->regmap,
  VAR_20,
  0x08);
 FUNC_1(VAR_26->regmap,
  VAR_21,
  0x01);
 FUNC_1(VAR_26->regmap,
  VAR_22,
  0x10);


 FUNC_1(VAR_26->regmap,
  VAR_6,
  (VAR_26->i_l_slot<<VAR_1|
  VAR_26->v_l_slot)&0xFF);

 if (VAR_26->v_l_slot < 8) {
  FUNC_0(VAR_26->regmap,
   VAR_4,
   1 << VAR_26->v_l_slot, 0);
  FUNC_0(VAR_26->regmap,
   VAR_2,
   1 << VAR_26->v_l_slot,
   1 << VAR_26->v_l_slot);
 } else {
  FUNC_0(VAR_26->regmap,
   VAR_5,
   1 << (VAR_26->v_l_slot - 8), 0);
  FUNC_0(VAR_26->regmap,
   VAR_3,
   1 << (VAR_26->v_l_slot - 8),
   1 << (VAR_26->v_l_slot - 8));
 }

 if (VAR_26->i_l_slot < 8) {
  FUNC_0(VAR_26->regmap,
   VAR_4,
   1 << VAR_26->i_l_slot, 0);
  FUNC_0(VAR_26->regmap,
   VAR_2,
   1 << VAR_26->i_l_slot,
   1 << VAR_26->i_l_slot);
 } else {
  FUNC_0(VAR_26->regmap,
   VAR_5,
   1 << (VAR_26->i_l_slot - 8), 0);
  FUNC_0(VAR_26->regmap,
   VAR_3,
   1 << (VAR_26->i_l_slot - 8),
   1 << (VAR_26->i_l_slot - 8));
 }


 if (VAR_26->interleave_mode)
  FUNC_0(VAR_26->regmap,
   VAR_7,
   VAR_0,
   VAR_0);
 return 0;
}
