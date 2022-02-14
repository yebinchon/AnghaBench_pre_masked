
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int name; int * dev; } ;
struct platform_device {int dev; } ;


 struct snd_soc_card VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,struct snd_soc_card*) ;
 int FUNC_2 (struct platform_device*,struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 int VAR_2;
 struct snd_soc_card *VAR_3;

 VAR_3 = &VAR_0;
 VAR_0.dev = &VAR_1->dev;
 FUNC_2(VAR_1, VAR_3);
 VAR_2 = FUNC_1(&VAR_1->dev, &VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev,
    "devm_snd_soc_register_card(%s) failed: %d\n",
    VAR_0.name, VAR_2);
  return VAR_2;
 }
 return 0;
}
