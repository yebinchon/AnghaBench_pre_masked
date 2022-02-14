
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; int name; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = FUNC_1(VAR_1);





 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_1->dev,
   "ASoC: machine %s should use snd_soc_register_card()\n",
   VAR_2->name);


 VAR_2->dev = &VAR_1->dev;

 return FUNC_2(VAR_2);
}
