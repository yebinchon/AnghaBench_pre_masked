
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,struct snd_soc_card*) ;
 struct snd_soc_card VAR_0 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = &VAR_0;

 VAR_2->dev = &VAR_1->dev;

 return FUNC_0(&VAR_1->dev, VAR_2);
}
