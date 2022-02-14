
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct snd_soc_card*) ;
 struct snd_soc_card VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct snd_soc_card *VAR_3 = &VAR_0;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_1,
     FUNC_0(VAR_1));
 if (VAR_4)
  return VAR_4;

 VAR_3->dev = &VAR_2->dev;

 VAR_4 = FUNC_2(&VAR_2->dev, VAR_3);
 if (VAR_4) {
  FUNC_1(&VAR_2->dev, "snd_soc_register_card() failed: %d\n",
   VAR_4);
  FUNC_3(VAR_1, FUNC_0(VAR_1));
 }
 return VAR_4;
}
