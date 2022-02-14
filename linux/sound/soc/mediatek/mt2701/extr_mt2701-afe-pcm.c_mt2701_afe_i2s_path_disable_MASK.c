
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; } ;
struct mt2701_i2s_path {scalar_t__* on; struct mt2701_i2s_data** i2s_data; } ;
struct mt2701_i2s_data {int i2s_ctrl_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_base_afe*,struct mt2701_i2s_path*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_1,
           struct mt2701_i2s_path *VAR_2,
           int VAR_3)
{
 const struct mt2701_i2s_data *VAR_4 = VAR_2->i2s_data[VAR_3];

 if (--VAR_2->on[VAR_3] < 0)
  VAR_2->on[VAR_3] = 0;

 if (VAR_2->on[VAR_3])
  return 0;


 FUNC_1(VAR_1->regmap, VAR_4->i2s_ctrl_reg,
      VAR_0, 0);

 FUNC_0(VAR_1, VAR_2, VAR_3);

 return 0;
}
