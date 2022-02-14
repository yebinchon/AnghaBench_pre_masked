
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct snd_ac97 {int dev; } ;


 struct snd_ac97* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_ac97*,int,unsigned int,unsigned int) ;
 int FUNC_6 (struct snd_ac97*,struct snd_soc_component*) ;
 struct snd_ac97* FUNC_7 (struct snd_soc_component*) ;

struct snd_ac97 *FUNC_8(struct snd_soc_component *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2)
{
 struct snd_ac97 *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_7(VAR_0);
 if (FUNC_1(VAR_3))
  return VAR_3;

 if (VAR_1) {
  VAR_4 = FUNC_5(VAR_3, 0, VAR_1, VAR_2);
  if (VAR_4 < 0) {
   FUNC_2(VAR_0->dev, "Failed to reset AC97 device: %d\n",
    VAR_4);
   goto err_put_device;
  }
 }

 VAR_4 = FUNC_3(&VAR_3->dev);
 if (VAR_4)
  goto err_put_device;

 VAR_4 = FUNC_6(VAR_3, VAR_0);
 if (VAR_4)
  goto err_put_device;

 return VAR_3;

err_put_device:
 FUNC_4(&VAR_3->dev);
 return FUNC_0(VAR_4);
}
