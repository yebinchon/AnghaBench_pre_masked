
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int channels_max; } ;
struct snd_soc_dai_driver {TYPE_1__ capture; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_soc_dai_driver* FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int *,struct snd_soc_dai_driver*,int) ;
 struct snd_soc_dai_driver VAR_3 ;
 int FUNC_2 (struct snd_soc_dai_driver*,struct snd_soc_dai_driver*,int) ;
 int FUNC_3 (scalar_t__,char*,int*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct snd_soc_dai_driver *VAR_8 = &VAR_3;

 if (VAR_5->dev.of_node) {
  VAR_6 = FUNC_3(VAR_5->dev.of_node, "num-channels", &VAR_7);
  if (VAR_6 && (VAR_6 != -VAR_0))
   return VAR_6;

  if (!VAR_6) {
   if (VAR_7 < 1 || VAR_7 > 8)
    return -VAR_0;

   VAR_8 = FUNC_0(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
   if (!VAR_8)
    return -VAR_1;

   FUNC_2(VAR_8, &VAR_3, sizeof(*VAR_8));
   VAR_8->capture.channels_max = VAR_7;
  }
 }

 return FUNC_1(&VAR_5->dev,
   &VAR_4, VAR_8, 1);
}
