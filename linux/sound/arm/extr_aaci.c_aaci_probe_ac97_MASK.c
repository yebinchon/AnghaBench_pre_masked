
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97_template {int scaps; scalar_t__ num; struct aaci* private_data; } ;
struct snd_ac97_bus {int clock; int * pcms; } ;
struct snd_ac97 {int dummy; } ;
struct TYPE_4__ {int * pcm; } ;
struct TYPE_3__ {int * pcm; } ;
struct aaci {TYPE_2__ capture; TYPE_1__ playback; struct snd_ac97* ac97; struct snd_ac97_bus* ac97_bus; int card; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97_template*,int ,int) ;
 int FUNC_3 (int ,int ,int *,struct aaci*,struct snd_ac97_bus**) ;
 int FUNC_4 (struct snd_ac97_bus*,struct snd_ac97_template*,struct snd_ac97**) ;
 int FUNC_5 (struct snd_ac97_bus*,int ,int ) ;
 int FUNC_6 (struct snd_ac97*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct aaci *VAR_7)
{
 struct snd_ac97_template VAR_8;
 struct snd_ac97_bus *VAR_9;
 struct snd_ac97 *VAR_10;
 int VAR_11;




 FUNC_8(0, VAR_7->base + VAR_0);
 FUNC_7(2);
 FUNC_8(VAR_4, VAR_7->base + VAR_0);





 FUNC_7(VAR_3 * 2);

 VAR_11 = FUNC_3(VAR_7->card, 0, &VAR_5, VAR_7, &VAR_9);
 if (VAR_11)
  goto out;

 VAR_9->clock = 48000;
 VAR_7->ac97_bus = VAR_9;

 FUNC_2(&VAR_8, 0, sizeof(struct snd_ac97_template));
 VAR_8.private_data = VAR_7;
 VAR_8.num = 0;
 VAR_8.scaps = VAR_2;

 VAR_11 = FUNC_4(VAR_9, &VAR_8, &VAR_10);
 if (VAR_11)
  goto out;
 VAR_7->ac97 = VAR_10;




 if (FUNC_1(VAR_10))
  FUNC_6(VAR_10, VAR_1, 0x801e);

 VAR_11 = FUNC_5(VAR_9, FUNC_0(VAR_6), VAR_6);
 if (VAR_11)
  goto out;

 VAR_7->playback.pcm = &VAR_9->pcms[0];
 VAR_7->capture.pcm = &VAR_9->pcms[1];

 out:
 return VAR_11;
}
