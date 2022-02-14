
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int platform_data; } ;
struct snd_soc_card {TYPE_2__ dev; TYPE_1__* dai_link; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__* dai_link; } ;
struct TYPE_6__ {int dai_fmt; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_9 (char*,int) ;
 int FUNC_10 (struct snd_soc_card*) ;
 int FUNC_11 (struct snd_soc_card*,struct snd_soc_card*) ;
 int FUNC_12 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_13(struct platform_device *VAR_8,
       struct snd_soc_card *VAR_9)
{
 struct platform_device *VAR_10;
 int VAR_11;

 VAR_9->dai_link->ops = &VAR_6;
 VAR_9->dai_link->dai_fmt = VAR_3 | VAR_4 |
      VAR_2;

 VAR_5 = VAR_8->dev.platform_data;
 if (!VAR_5) {
  FUNC_6(&VAR_8->dev, "no platform data supplied\n");
  return -VAR_0;
 }

 FUNC_12(VAR_5);

 VAR_7 = FUNC_2(&VAR_8->dev, "xtal");
 if (FUNC_0(VAR_7)) {
  FUNC_6(&VAR_8->dev, "could not get clkout0\n");
  return -VAR_0;
 }

 FUNC_7(&VAR_8->dev, "xtal rate is %ld\n", FUNC_3(VAR_7));

 VAR_11 = FUNC_1(&VAR_8->dev, VAR_5);
 if (VAR_11)
  goto err_clk;

 VAR_10 = FUNC_9("soc-audio", -1);
 if (!VAR_10) {
  FUNC_6(&VAR_8->dev, "failed to alloc soc-audio devicec\n");
  VAR_11 = -VAR_1;
  goto err_gpio;
 }

 FUNC_11(VAR_10, VAR_9);

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_6(&VAR_8->dev, "failed to add soc-audio dev\n");
  goto err_pdev;
 }

 FUNC_11(VAR_8, VAR_10);
 return 0;

err_pdev:
 FUNC_10(VAR_10);

err_gpio:
 FUNC_5(VAR_5);

err_clk:
 FUNC_4(VAR_7);
 return VAR_11;
}
