
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_hardware {int periods_min; int period_bytes_min; int buffer_bytes_max; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct atmel_ac97c* private_data; } ;
struct atmel_ac97c {struct snd_pcm* pcm; TYPE_2__* card; TYPE_1__* pdev; int ac97_bus; } ;
struct TYPE_4__ {int shortname; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_pcm_hardware VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int *,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct atmel_ac97c *VAR_7)
{
 struct snd_pcm *VAR_8;
 struct snd_pcm_hardware VAR_9 = VAR_6;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->ac97_bus,
         FUNC_0(VAR_3),
         VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_7->card, VAR_7->card->shortname, 0, 1, 1, &VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_8, VAR_1, &VAR_4);
 FUNC_4(VAR_8, VAR_2, &VAR_5);

 FUNC_2(VAR_8, VAR_0,
   &VAR_7->pdev->dev, VAR_9.periods_min * VAR_9.period_bytes_min,
   VAR_9.buffer_bytes_max);

 VAR_8->private_data = VAR_7;
 VAR_8->info_flags = 0;
 FUNC_5(VAR_8->name, VAR_7->card->shortname);
 VAR_7->pcm = VAR_8;

 return 0;
}
