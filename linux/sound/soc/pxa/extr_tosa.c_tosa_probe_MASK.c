
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct snd_soc_card*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 struct snd_soc_card VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct snd_soc_card *VAR_4 = &VAR_2;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_0,
          "Headphone Jack");
 if (VAR_5)
  return VAR_5;

 VAR_4->dev = &VAR_3->dev;

 VAR_5 = FUNC_1(&VAR_3->dev, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "snd_soc_register_card() failed: %d\n",
   VAR_5);
  FUNC_2(VAR_1);
 }
 return VAR_5;
}
