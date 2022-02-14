
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* stream_name; int channels_min; int channels_max; unsigned int rates; int formats; } ;
struct snd_soc_dai_driver {char* name; TYPE_2__ capture; int remove; int probe; int * ops; } ;
struct device {int dummy; } ;
struct axg_spdifin {TYPE_1__* conf; } ;
struct TYPE_3__ {int * mode_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dai_driver* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct snd_soc_dai_driver* FUNC_1 (struct device*,int,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static struct snd_soc_dai_driver *
FUNC_3(struct device *VAR_9, struct axg_spdifin *VAR_10)
{
 struct snd_soc_dai_driver *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_9, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->name = "SPDIF Input";
 VAR_11->ops = &VAR_8;
 VAR_11->probe = VAR_6;
 VAR_11->remove = VAR_7;
 VAR_11->capture.stream_name = "Capture";
 VAR_11->capture.channels_min = 1;
 VAR_11->capture.channels_max = 2;
 VAR_11->capture.formats = VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  unsigned int VAR_13 =
   FUNC_2(VAR_10->conf->mode_rates[VAR_12]);

  if (VAR_13 == VAR_4)
   return FUNC_0(-VAR_0);

  VAR_11->capture.rates |= VAR_13;
 }

 return VAR_11;
}
