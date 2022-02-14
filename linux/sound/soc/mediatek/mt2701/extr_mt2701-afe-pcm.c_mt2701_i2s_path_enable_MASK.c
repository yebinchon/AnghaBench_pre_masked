
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_base_afe {int regmap; struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {int* on; struct mt2701_i2s_data** i2s_data; } ;
struct mt2701_i2s_data {int i2s_ctrl_reg; int i2s_asrc_fs_mask; int i2s_asrc_fs_shift; } ;
struct mt2701_afe_private {TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ has_one_heart_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mtk_base_afe*,struct mt2701_i2s_path*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mtk_base_afe *VAR_11,
      struct mt2701_i2s_path *VAR_12,
      int VAR_13, int VAR_14)
{
 const struct mt2701_i2s_data *VAR_15 = VAR_12->i2s_data[VAR_13];
 struct mt2701_afe_private *VAR_16 = VAR_11->platform_priv;
 int VAR_17, VAR_18, VAR_19 = 1;
 unsigned int VAR_20, VAR_21;


 if (++VAR_12->on[VAR_13] != 1)
  return 0;

 VAR_18 = FUNC_3(VAR_14);

 VAR_20 = VAR_2 |
        VAR_3 |
        VAR_5 |
        VAR_8;

 VAR_21 = FUNC_0(VAR_18) |
       VAR_5 |
       FUNC_1(VAR_19);

 if (VAR_13 == VAR_10) {
  VAR_20 |= VAR_9;
  VAR_21 |= VAR_9;
  VAR_17 = VAR_0;
 } else {
  if (VAR_16->soc->has_one_heart_mode) {
   VAR_20 |= VAR_6;
   VAR_21 |= VAR_6;
  }
  VAR_17 = VAR_1;
 }

 FUNC_4(VAR_11->regmap, VAR_15->i2s_ctrl_reg, VAR_20, VAR_21);

 FUNC_4(VAR_11->regmap, VAR_17,
      VAR_15->i2s_asrc_fs_mask
      << VAR_15->i2s_asrc_fs_shift,
      VAR_18 << VAR_15->i2s_asrc_fs_shift);


 FUNC_2(VAR_11, VAR_12, VAR_13);


 FUNC_4(VAR_11->regmap, VAR_15->i2s_ctrl_reg,
      VAR_7, VAR_7);
 FUNC_5(1);
 FUNC_4(VAR_11->regmap, VAR_15->i2s_ctrl_reg,
      VAR_7, 0);
 FUNC_5(1);
 FUNC_4(VAR_11->regmap, VAR_15->i2s_ctrl_reg,
      VAR_4, VAR_4);
 return 0;
}
