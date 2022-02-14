
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {struct snd_soc_card* dai_link; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_card*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_4 (int,int ) ;
 int FUNC_5 (struct snd_soc_card*) ;
 int FUNC_6 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct snd_soc_card *VAR_3;
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = VAR_4;
 FUNC_2(VAR_4, VAR_3);
 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_4, "Error parsing OF data\n");
  goto err;
 }

 FUNC_0(VAR_3);
 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  goto err_card_register;

 return 0;

err_card_register:
 FUNC_3(VAR_3->dai_link);
err:
 FUNC_3(VAR_3);
 return VAR_5;
}
