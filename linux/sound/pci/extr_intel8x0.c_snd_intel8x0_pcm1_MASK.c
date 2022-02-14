
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_chmap {int channel_mask; } ;
struct snd_pcm {char* name; scalar_t__ info_flags; struct intel8x0* private_data; } ;
struct intel8x0 {TYPE_1__** ac97; scalar_t__ multi4; scalar_t__ multi6; scalar_t__ multi8; int pci; struct snd_pcm** pcm; TYPE_3__* card; } ;
struct ich_pcm_table {char* suffix; TYPE_2__* playback_ops; int prealloc_max_size; int prealloc_size; TYPE_2__* capture_ops; } ;
struct TYPE_6__ {char* shortname; } ;
struct TYPE_5__ {scalar_t__ open; } ;
struct TYPE_4__ {struct snd_pcm_chmap** chmaps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel8x0*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct snd_pcm*,size_t,int ,int,int ,struct snd_pcm_chmap**) ;
 int VAR_4 ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,size_t,TYPE_2__*) ;
 int FUNC_6 (char*,char*,char*,...) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct intel8x0 *VAR_5, int VAR_6,
        struct ich_pcm_table *VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;
 char VAR_10[32];

 if (VAR_7->suffix)
  FUNC_6(VAR_10, "Intel ICH - %s", VAR_7->suffix);
 else
  FUNC_7(VAR_10, "Intel ICH");
 VAR_9 = FUNC_4(VAR_5->card, VAR_10, VAR_6,
     VAR_7->playback_ops ? 1 : 0,
     VAR_7->capture_ops ? 1 : 0, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7->playback_ops)
  FUNC_5(VAR_8, VAR_1, VAR_7->playback_ops);
 if (VAR_7->capture_ops)
  FUNC_5(VAR_8, VAR_0, VAR_7->capture_ops);

 VAR_8->private_data = VAR_5;
 VAR_8->info_flags = 0;
 if (VAR_7->suffix)
  FUNC_6(VAR_8->name, "%s - %s", VAR_5->card->shortname, VAR_7->suffix);
 else
  FUNC_7(VAR_8->name, VAR_5->card->shortname);
 VAR_5->pcm[VAR_6] = VAR_8;

 FUNC_3(VAR_8, FUNC_0(VAR_5),
           FUNC_1(VAR_5->pci),
           VAR_7->prealloc_size, VAR_7->prealloc_max_size);

 if (VAR_7->playback_ops &&
     VAR_7->playback_ops->open == VAR_3) {
  struct snd_pcm_chmap *VAR_11;
  int VAR_12 = 2;
  if (VAR_5->multi8)
   VAR_12 = 8;
  else if (VAR_5->multi6)
   VAR_12 = 6;
  else if (VAR_5->multi4)
   VAR_12 = 4;
  VAR_9 = FUNC_2(VAR_8, VAR_1,
          VAR_4, VAR_12, 0,
          &VAR_11);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_11->channel_mask = VAR_2;
  VAR_5->ac97[0]->chmaps[VAR_1] = VAR_11;
 }

 return 0;
}
