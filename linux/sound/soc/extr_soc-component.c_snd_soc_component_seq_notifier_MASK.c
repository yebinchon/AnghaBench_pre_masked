
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; } ;
typedef enum snd_soc_dapm_type { ____Placeholder_snd_soc_dapm_type } snd_soc_dapm_type ;
struct TYPE_2__ {int (* seq_notifier ) (struct snd_soc_component*,int,int) ;} ;


 int FUNC_0 (struct snd_soc_component*,int,int) ;

void FUNC_1(struct snd_soc_component *VAR_0,
        enum snd_soc_dapm_type VAR_1, int VAR_2)
{
 if (VAR_0->driver->seq_notifier)
  VAR_0->driver->seq_notifier(VAR_0, VAR_1, VAR_2);
}
