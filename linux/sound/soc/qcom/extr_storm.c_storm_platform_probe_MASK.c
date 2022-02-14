
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int num_links; int * dai_link; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct snd_soc_card* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct snd_soc_card *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = &VAR_3->dev;

 VAR_5 = FUNC_3(VAR_4, "qcom,model");
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "error parsing card name: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_4->dai_link = &VAR_2;
 VAR_4->num_links = 1;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "error resolving dai links: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_3->dev, VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_3->dev, "error registering soundcard: %d\n", VAR_5);

 return VAR_5;

}
