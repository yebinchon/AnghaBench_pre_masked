
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,scalar_t__*) ;
 int FUNC_3 (int *,struct snd_soc_card*) ;
 scalar_t__ VAR_0 ;
 struct snd_soc_card VAR_1 ;
 int FUNC_4 (int *,struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct snd_soc_card *VAR_3 = &VAR_1;
 int VAR_4;

 VAR_4 = FUNC_4(&VAR_2->dev, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->dev, "Failed to parse dais: %d\n", VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_2(&VAR_2->dev, "dmic-wakeup-delay-ms",
     &VAR_0);
 if (VAR_4) {
  VAR_0 = 0;
  FUNC_0(&VAR_2->dev,
   "no optional property 'dmic-wakeup-delay-ms' found, default: no delay\n");
 }

 VAR_3->dev = &VAR_2->dev;
 return FUNC_3(&VAR_2->dev, VAR_3);
}
