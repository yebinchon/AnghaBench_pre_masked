
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_base_afe {int dev; struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {struct clk* asrco_ck; struct clk** hop_ck; struct clk* mclk_ck; struct clk* div_ck; struct clk* sel_ck; } ;
struct mt2701_afe_private {struct clk* mrgif_ck; struct mt2701_i2s_path* i2s_path; TYPE_1__* soc; struct clk** base_ck; } ;
struct clk {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int i2s_num; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (int ,char*,char*) ;
 void* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

int FUNC_5(struct mtk_base_afe *VAR_5)
{
 struct mt2701_afe_private *VAR_6 = VAR_5->platform_priv;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6->base_ck[VAR_7] = FUNC_3(VAR_5->dev, VAR_4[VAR_7]);
  if (FUNC_0(VAR_6->base_ck[VAR_7])) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_4[VAR_7]);
   return FUNC_1(VAR_6->base_ck[VAR_7]);
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_6->soc->i2s_num; VAR_7++) {
  struct mt2701_i2s_path *VAR_8 = &VAR_6->i2s_path[VAR_7];
  struct clk *VAR_9;
  char VAR_10[13];

  FUNC_4(VAR_10, sizeof(VAR_10), "i2s%d_src_sel", VAR_7);
  VAR_8->sel_ck = FUNC_3(VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_8->sel_ck)) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_10);
   return FUNC_1(VAR_8->sel_ck);
  }

  FUNC_4(VAR_10, sizeof(VAR_10), "i2s%d_src_div", VAR_7);
  VAR_8->div_ck = FUNC_3(VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_8->div_ck)) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_10);
   return FUNC_1(VAR_8->div_ck);
  }

  FUNC_4(VAR_10, sizeof(VAR_10), "i2s%d_mclk_en", VAR_7);
  VAR_8->mclk_ck = FUNC_3(VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_8->mclk_ck)) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_10);
   return FUNC_1(VAR_8->mclk_ck);
  }

  FUNC_4(VAR_10, sizeof(VAR_10), "i2so%d_hop_ck", VAR_7);
  VAR_9 = FUNC_3(VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_9)) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_10);
   return FUNC_1(VAR_9);
  }
  VAR_8->hop_ck[VAR_3] = VAR_9;

  FUNC_4(VAR_10, sizeof(VAR_10), "i2si%d_hop_ck", VAR_7);
  VAR_9 = FUNC_3(VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_9)) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_10);
   return FUNC_1(VAR_9);
  }
  VAR_8->hop_ck[VAR_2] = VAR_9;

  FUNC_4(VAR_10, sizeof(VAR_10), "asrc%d_out_ck", VAR_7);
  VAR_8->asrco_ck = FUNC_3(VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_8->asrco_ck)) {
   FUNC_2(VAR_5->dev, "failed to get %s\n", VAR_10);
   return FUNC_1(VAR_8->asrco_ck);
  }
 }


 VAR_6->mrgif_ck = FUNC_3(VAR_5->dev, "audio_mrgif_pd");
 if (FUNC_0(VAR_6->mrgif_ck)) {
  if (FUNC_1(VAR_6->mrgif_ck) == -VAR_0)
   return -VAR_0;

  VAR_6->mrgif_ck = ((void*)0);
 }

 return 0;
}
