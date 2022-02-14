
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* mute_stream ) (struct snd_soc_dai*,int,int) ;int (* digital_mute ) (struct snd_soc_dai*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_dai*,int,int) ;
 int FUNC_1 (struct snd_soc_dai*,int) ;

int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3,
        int VAR_4)
{
 if (VAR_2->driver->ops->mute_stream)
  return VAR_2->driver->ops->mute_stream(VAR_2, VAR_3, VAR_4);
 else if (VAR_4 == VAR_1 &&
   VAR_2->driver->ops->digital_mute)
  return VAR_2->driver->ops->digital_mute(VAR_2, VAR_3);
 else
  return -VAR_0;
}
