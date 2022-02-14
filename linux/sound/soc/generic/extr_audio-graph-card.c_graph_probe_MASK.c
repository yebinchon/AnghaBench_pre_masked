
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int probe; int num_dapm_widgets; int dapm_widgets; struct device* dev; int owner; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct link_info {int dais; int link; } ;
struct asoc_simple_priv {int pa_gpio; } ;
typedef int li ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (struct asoc_simple_priv*) ;
 int FUNC_5 (struct asoc_simple_priv*,struct link_info*) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,int ) ;
 struct asoc_simple_priv* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,struct snd_soc_card*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct asoc_simple_priv*,struct link_info*) ;
 int FUNC_11 (struct asoc_simple_priv*) ;
 int FUNC_12 (struct link_info*,int ,int) ;
 struct snd_soc_card* FUNC_13 (struct asoc_simple_priv*) ;
 int FUNC_14 (struct snd_soc_card*,struct asoc_simple_priv*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct asoc_simple_priv *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 struct snd_soc_card *VAR_11;
 struct link_info VAR_12;
 int VAR_13;


 VAR_9 = FUNC_8(VAR_10, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_13(VAR_9);
 VAR_11->owner = VAR_5;
 VAR_11->dev = VAR_10;
 VAR_11->dapm_widgets = VAR_7;
 VAR_11->num_dapm_widgets = FUNC_0(VAR_7);
 VAR_11->probe = VAR_6;

 FUNC_12(&VAR_12, 0, sizeof(VAR_12));
 FUNC_10(VAR_9, &VAR_12);
 if (!VAR_12.link || !VAR_12.dais)
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_9, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_9->pa_gpio = FUNC_7(VAR_10, "pa", VAR_4);
 if (FUNC_1(VAR_9->pa_gpio)) {
  VAR_13 = FUNC_2(VAR_9->pa_gpio);
  FUNC_6(VAR_10, "failed to get amplifier gpio: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_11(VAR_9);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_2)
   FUNC_6(VAR_10, "parse error %d\n", VAR_13);
  goto err;
 }

 FUNC_14(VAR_11, VAR_9);

 FUNC_4(VAR_9);

 VAR_13 = FUNC_9(VAR_10, VAR_11);
 if (VAR_13 < 0)
  goto err;

 return 0;
err:
 FUNC_3(VAR_11);

 return VAR_13;
}
