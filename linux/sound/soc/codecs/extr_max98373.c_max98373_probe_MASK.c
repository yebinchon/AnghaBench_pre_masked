
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98373_priv {int i_slot; int v_slot; int spkfb_slot; int regmap; scalar_t__ interleave_mode; } ;


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
 int FUNC_0 (struct max98373_priv*,int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct max98373_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_15)
{
 struct max98373_priv *VAR_16 = FUNC_3(VAR_15);


 FUNC_0(VAR_16, VAR_15->dev);


 FUNC_2(VAR_16->regmap,
  VAR_2,
  0xFF);
 FUNC_2(VAR_16->regmap,
  VAR_3,
  0xFF);

 FUNC_2(VAR_16->regmap,
  VAR_7,
  0x80);
 FUNC_2(VAR_16->regmap,
  VAR_8,
  0x1);

 FUNC_2(VAR_16->regmap,
  VAR_9,
  0x00);
 FUNC_2(VAR_16->regmap,
  VAR_10,
  0x00);

 FUNC_2(VAR_16->regmap,
  VAR_11,
  0x3);

 FUNC_2(VAR_16->regmap,
  VAR_13,
  0x7);

 FUNC_2(VAR_16->regmap,
  VAR_4,
  (VAR_16->i_slot << VAR_1 |
  VAR_16->v_slot) & 0xFF);
 if (VAR_16->v_slot < 8)
  FUNC_1(VAR_16->regmap,
   VAR_2,
   1 << VAR_16->v_slot, 0);
 else
  FUNC_1(VAR_16->regmap,
   VAR_3,
   1 << (VAR_16->v_slot - 8), 0);

 if (VAR_16->i_slot < 8)
  FUNC_1(VAR_16->regmap,
   VAR_2,
   1 << VAR_16->i_slot, 0);
 else
  FUNC_1(VAR_16->regmap,
   VAR_3,
   1 << (VAR_16->i_slot - 8), 0);


 FUNC_2(VAR_16->regmap,
  VAR_5,
  VAR_16->spkfb_slot & 0xFF);


 if (VAR_16->interleave_mode)
  FUNC_1(VAR_16->regmap,
   VAR_6,
   VAR_0,
   VAR_0);


 FUNC_1(VAR_16->regmap,
  VAR_12,
  VAR_14, 1);

 return 0;
}
