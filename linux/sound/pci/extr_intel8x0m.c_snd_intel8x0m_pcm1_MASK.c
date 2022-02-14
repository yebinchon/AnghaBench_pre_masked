
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {char* name; int dev_class; scalar_t__ info_flags; struct intel8x0m* private_data; } ;
struct intel8x0m {int pci; struct snd_pcm** pcm; TYPE_1__* card; } ;
struct ich_pcm_table {char* suffix; int prealloc_max_size; int prealloc_size; scalar_t__ capture_ops; scalar_t__ playback_ops; } ;
struct TYPE_2__ {char* shortname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,scalar_t__) ;
 int FUNC_4 (char*,char*,char*,...) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct intel8x0m *VAR_4, int VAR_5,
         struct ich_pcm_table *VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;
 char VAR_9[32];

 if (VAR_6->suffix)
  FUNC_4(VAR_9, "Intel ICH - %s", VAR_6->suffix);
 else
  FUNC_5(VAR_9, "Intel ICH");
 VAR_8 = FUNC_2(VAR_4->card, VAR_9, VAR_5,
     VAR_6->playback_ops ? 1 : 0,
     VAR_6->capture_ops ? 1 : 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6->playback_ops)
  FUNC_3(VAR_7, VAR_3, VAR_6->playback_ops);
 if (VAR_6->capture_ops)
  FUNC_3(VAR_7, VAR_2, VAR_6->capture_ops);

 VAR_7->private_data = VAR_4;
 VAR_7->info_flags = 0;
 VAR_7->dev_class = VAR_1;
 if (VAR_6->suffix)
  FUNC_4(VAR_7->name, "%s - %s", VAR_4->card->shortname, VAR_6->suffix);
 else
  FUNC_5(VAR_7->name, VAR_4->card->shortname);
 VAR_4->pcm[VAR_5] = VAR_7;

 FUNC_1(VAR_7, VAR_0,
           FUNC_0(VAR_4->pci),
           VAR_6->prealloc_size,
           VAR_6->prealloc_max_size);

 return 0;
}
