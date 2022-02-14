
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dmic {unsigned int fclk_freq; int sysclk; int dev; int mutex; scalar_t__ active; int fclk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;



 struct clk* FUNC_1 (int ,char*) ;
 struct clk* FUNC_2 (int ) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,struct clk*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (struct omap_dmic*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct omap_dmic *VAR_3, int VAR_4,
     unsigned int VAR_5)
{
 struct clk *VAR_6, *VAR_7;
 char *VAR_8;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 12000000:
 case 19200000:
 case 24000000:
 case 24576000:
  break;
 default:
  FUNC_5(VAR_3->dev, "invalid input frequency: %dHz\n", VAR_5);
  VAR_3->fclk_freq = 0;
  return -VAR_1;
 }

 if (VAR_3->sysclk == VAR_4) {
  VAR_3->fclk_freq = VAR_5;
  return 0;
 }


 if (VAR_3->active && FUNC_6(VAR_3)) {
  FUNC_5(VAR_3->dev, "can't re-parent when DMIC active\n");
  return -VAR_0;
 }

 switch (VAR_4) {
 case 130:
  VAR_8 = "pad_clks_ck";
  break;
 case 129:
  VAR_8 = "slimbus_clk";
  break;
 case 128:
  VAR_8 = "dmic_sync_mux_ck";
  break;
 default:
  FUNC_5(VAR_3->dev, "fclk clk_id (%d) not supported\n", VAR_4);
  return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_3->dev, VAR_8);
 if (FUNC_0(VAR_6)) {
  FUNC_5(VAR_3->dev, "can't get %s\n", VAR_8);
  return -VAR_2;
 }

 VAR_7 = FUNC_2(VAR_3->fclk);
 if (FUNC_0(VAR_7)) {
  FUNC_5(VAR_3->dev, "can't get fck mux parent\n");
  FUNC_3(VAR_6);
  return -VAR_2;
 }

 FUNC_7(&VAR_3->mutex);
 if (VAR_3->active) {

  FUNC_10(VAR_3->dev);
  VAR_9 = FUNC_4(VAR_7, VAR_6);
  FUNC_9(VAR_3->dev);
 } else {
  VAR_9 = FUNC_4(VAR_7, VAR_6);
 }
 FUNC_8(&VAR_3->mutex);

 if (VAR_9 < 0) {
  FUNC_5(VAR_3->dev, "re-parent failed\n");
  goto err_busy;
 }

 VAR_3->sysclk = VAR_4;
 VAR_3->fclk_freq = VAR_5;

err_busy:
 FUNC_3(VAR_7);
 FUNC_3(VAR_6);

 return VAR_9;
}
