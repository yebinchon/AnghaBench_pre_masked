
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {int id; TYPE_3__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {int* tdm_width; int* tdm_slots; } ;
struct TYPE_5__ {int channels_max; } ;
struct TYPE_4__ {int channels_max; } ;
struct TYPE_6__ {int base; TYPE_2__ capture; TYPE_1__ playback; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_dai*,scalar_t__,int,unsigned int) ;
 struct arizona_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, int VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_4->component;
 struct arizona_priv *VAR_10 = FUNC_1(VAR_9);
 struct arizona *VAR_11 = VAR_10->arizona;
 int VAR_12 = VAR_4->driver->base;
 int VAR_13 = VAR_4->driver->playback.channels_max;
 int VAR_14 = VAR_4->driver->capture.channels_max;


 if (VAR_4->id > VAR_2)
  return -VAR_3;

 if (VAR_7 == 0) {
  VAR_5 = (1 << VAR_14) - 1;
  VAR_6 = (1 << VAR_13) - 1;
 }

 FUNC_0(VAR_4, VAR_12 + VAR_1,
         VAR_14, VAR_5);
 FUNC_0(VAR_4, VAR_12 + VAR_0,
         VAR_13, VAR_6);

 VAR_11->tdm_width[VAR_4->id - 1] = VAR_8;
 VAR_11->tdm_slots[VAR_4->id - 1] = VAR_7;

 return 0;
}
