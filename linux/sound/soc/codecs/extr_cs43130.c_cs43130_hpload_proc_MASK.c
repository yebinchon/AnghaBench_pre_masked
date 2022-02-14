
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dev; } ;
struct reg_sequence {int dummy; } ;
struct cs43130_private {int hpload_stat; int regmap; int hpload_evt; int * ac_freq; struct snd_soc_component* component; } ;


 unsigned int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct reg_sequence*,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct cs43130_private *VAR_12,
          struct reg_sequence *VAR_13, int VAR_14,
          unsigned int VAR_15, int VAR_16)
{
 int VAR_17;
 unsigned int VAR_18;
 u16 VAR_19;
 struct snd_soc_component *VAR_20 = VAR_12->component;

 FUNC_7(&VAR_12->hpload_evt);

 if (VAR_15 == VAR_0) {
  VAR_19 = FUNC_0(VAR_12->ac_freq[VAR_16]);
  FUNC_6(VAR_12->regmap, VAR_5,
       VAR_1, 0);
  FUNC_6(VAR_12->regmap, VAR_6,
       VAR_10,
       VAR_19 >> VAR_7);
  FUNC_6(VAR_12->regmap, VAR_8,
       VAR_10,
       VAR_19 >> VAR_9);
 }

 FUNC_4(VAR_12->regmap, VAR_13,
          VAR_14);

 VAR_17 = FUNC_8(&VAR_12->hpload_evt,
       FUNC_3(1000));
 FUNC_5(VAR_12->regmap, VAR_11, &VAR_18);
 if (!VAR_17) {
  FUNC_2(VAR_20->dev, "Timeout waiting for HPLOAD interrupt\n");
  return -1;
 }

 FUNC_1(VAR_20->dev, "HP load stat: %x, INT_MASK_4: %x\n",
  VAR_12->hpload_stat, VAR_18);
 if ((VAR_12->hpload_stat & (VAR_2 |
         VAR_4 |
         VAR_3)) ||
     !(VAR_12->hpload_stat & VAR_15)) {
  FUNC_1(VAR_20->dev, "HP load measure failed\n");
  return -1;
 }

 return 0;
}
