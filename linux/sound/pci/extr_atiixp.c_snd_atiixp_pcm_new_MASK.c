
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_chmap {int channel_mask; } ;
struct snd_pcm {int name; struct atiixp* private_data; } ;
struct snd_ac97_bus {TYPE_3__* pcms; } ;
struct atiixp {int max_channels; TYPE_4__** ac97; int pci; struct snd_pcm** pcmdevs; scalar_t__ spdif_over_aclink; int card; TYPE_3__** pcms; TYPE_1__* dmas; struct snd_ac97_bus* ac97_bus; } ;
struct TYPE_8__ {struct snd_pcm_chmap** chmaps; } ;
struct TYPE_7__ {scalar_t__ rates; TYPE_2__* r; } ;
struct TYPE_6__ {int slots; } ;
struct TYPE_5__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct snd_ac97_bus*,int,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm*,size_t,int ,int,int ,struct snd_pcm_chmap**) ;
 int VAR_23 ;
 int FUNC_4 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_5 (int ,char*,size_t,int,int,struct snd_pcm**) ;
 int FUNC_6 (struct snd_pcm*,size_t,int *) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct atiixp *VAR_24)
{
 struct snd_pcm *VAR_25;
 struct snd_pcm_chmap *VAR_26;
 struct snd_ac97_bus *VAR_27 = VAR_24->ac97_bus;
 int VAR_28, VAR_29, VAR_30;


 VAR_24->dmas[VAR_4].ops = &VAR_19;
 VAR_24->dmas[VAR_3].ops = &VAR_17;
 if (! VAR_24->spdif_over_aclink)
  VAR_24->dmas[VAR_5].ops = &VAR_21;


 if (VAR_24->spdif_over_aclink)
  VAR_30 = 3;
 else
  VAR_30 = 2;
 VAR_28 = FUNC_0(VAR_27, VAR_30, VAR_16);
 if (VAR_28 < 0)
  return VAR_28;
 for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29++)
  VAR_24->pcms[VAR_29] = &VAR_27->pcms[VAR_29];

 VAR_24->max_channels = 2;
 if (VAR_27->pcms[VAR_8].r[0].slots & (1 << VAR_2)) {
  if (VAR_27->pcms[VAR_8].r[0].slots & (1 << VAR_1))
   VAR_24->max_channels = 6;
  else
   VAR_24->max_channels = 4;
 }


 VAR_28 = FUNC_5(VAR_24->card, "ATI IXP AC97",
     VAR_6, 1, 1, &VAR_25);
 if (VAR_28 < 0)
  return VAR_28;
 FUNC_6(VAR_25, VAR_14, &VAR_20);
 FUNC_6(VAR_25, VAR_13, &VAR_18);
 VAR_25->private_data = VAR_24;
 FUNC_7(VAR_25->name, "ATI IXP AC97");
 VAR_24->pcmdevs[VAR_6] = VAR_25;

 FUNC_4(VAR_25, VAR_11,
           FUNC_2(VAR_24->pci),
           64*1024, 128*1024);

 VAR_28 = FUNC_3(VAR_25, VAR_14,
         VAR_23, VAR_24->max_channels, 0,
         &VAR_26);
 if (VAR_28 < 0)
  return VAR_28;
 VAR_26->channel_mask = VAR_15;
 VAR_24->ac97[0]->chmaps[VAR_14] = VAR_26;


 if (VAR_24->pcms[VAR_9] && ! VAR_24->pcms[VAR_9]->rates)
  return 0;


 if (VAR_24->pcms[VAR_9])
  VAR_24->pcms[VAR_9]->rates = VAR_12;


 VAR_28 = FUNC_5(VAR_24->card, "ATI IXP IEC958",
     VAR_7, 1, 0, &VAR_25);
 if (VAR_28 < 0)
  return VAR_28;
 FUNC_6(VAR_25, VAR_14, &VAR_22);
 VAR_25->private_data = VAR_24;
 if (VAR_24->spdif_over_aclink)
  FUNC_7(VAR_25->name, "ATI IXP IEC958 (AC97)");
 else
  FUNC_7(VAR_25->name, "ATI IXP IEC958 (Direct)");
 VAR_24->pcmdevs[VAR_7] = VAR_25;

 FUNC_4(VAR_25, VAR_11,
           FUNC_2(VAR_24->pci),
           64*1024, 128*1024);


 for (VAR_29 = 0; VAR_29 < VAR_10; VAR_29++) {
  if (VAR_24->ac97[VAR_29])
   FUNC_1(VAR_24->ac97[VAR_29],
          VAR_0,
          0x03 << 4, 0x03 << 4);
 }

 return 0;
}
