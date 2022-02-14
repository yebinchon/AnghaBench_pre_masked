
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_i2s_data {struct snd_soc_dai_driver* dai_drv; } ;
struct snd_soc_dai_driver {int id; int capture; int playback; int * ops; int probe; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dai_driver* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_4,
          struct stm32_i2s_data *VAR_5)
{
 struct snd_soc_dai_driver *VAR_6;

 VAR_6 = FUNC_0(&VAR_4->dev, sizeof(struct snd_soc_dai_driver),
          VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->probe = VAR_2;
 VAR_6->ops = &VAR_3;
 VAR_6->id = 1;
 FUNC_1(&VAR_6->playback, "playback");
 FUNC_1(&VAR_6->capture, "capture");
 VAR_5->dai_drv = VAR_6;

 return 0;
}
