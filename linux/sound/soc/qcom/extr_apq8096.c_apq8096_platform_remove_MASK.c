
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {struct snd_soc_card* dai_link; } ;
struct platform_device {int dev; } ;


 struct snd_soc_card* FUNC_0 (int *) ;
 int FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->dai_link);
 FUNC_1(VAR_1);

 return 0;
}
