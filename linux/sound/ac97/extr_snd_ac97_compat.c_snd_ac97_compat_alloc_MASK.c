
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; int * parent; } ;
struct snd_ac97 {TYPE_1__ dev; int * bus; struct ac97_codec_device* private_data; } ;
struct ac97_codec_device {int dev; } ;


 int VAR_0 ;
 struct snd_ac97* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct snd_ac97* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;

struct snd_ac97 *FUNC_6(struct ac97_codec_device *VAR_4)
{
 struct snd_ac97 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(struct snd_ac97), VAR_1);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_5->private_data = VAR_4;
 VAR_5->bus = &VAR_3;

 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.release = VAR_2;
 FUNC_2(&VAR_5->dev, "%s-compat", FUNC_1(&VAR_4->dev));
 VAR_6 = FUNC_3(&VAR_5->dev);
 if (VAR_6) {
  FUNC_5(&VAR_5->dev);
  return FUNC_0(VAR_6);
 }

 return VAR_5;
}
