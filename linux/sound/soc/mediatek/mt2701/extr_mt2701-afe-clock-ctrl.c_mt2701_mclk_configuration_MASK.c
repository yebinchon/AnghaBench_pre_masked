
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int dev; struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {int mclk_rate; int div_ck; int sel_ck; } ;
struct mt2701_afe_private {int * base_ck; struct mt2701_i2s_path* i2s_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct mtk_base_afe *VAR_5, int VAR_6)

{
 struct mt2701_afe_private *VAR_7 = VAR_5->platform_priv;
 struct mt2701_i2s_path *VAR_8 = &VAR_7->i2s_path[VAR_6];
 int VAR_9 = -VAR_0;


 if (!(VAR_1 % VAR_8->mclk_rate))
  VAR_9 = FUNC_0(VAR_8->sel_ck,
         VAR_7->base_ck[VAR_3]);
 else if (!(VAR_2 % VAR_8->mclk_rate))
  VAR_9 = FUNC_0(VAR_8->sel_ck,
         VAR_7->base_ck[VAR_4]);

 if (VAR_9) {
  FUNC_2(VAR_5->dev, "failed to set mclk source\n");
  return VAR_9;
 }


 VAR_9 = FUNC_1(VAR_8->div_ck, VAR_8->mclk_rate);
 if (VAR_9) {
  FUNC_2(VAR_5->dev, "failed to set mclk divider %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
