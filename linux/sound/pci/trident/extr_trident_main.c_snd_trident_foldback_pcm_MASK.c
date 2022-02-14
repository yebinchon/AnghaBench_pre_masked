
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ entries; } ;
struct snd_trident {scalar_t__ device; int pci; TYPE_2__ tlb; struct snd_pcm* foldback; int card; } ;
struct snd_pcm_substream {int name; struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; int name; scalar_t__ info_flags; struct snd_trident* private_data; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,size_t,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_trident *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;
 int VAR_10 = 3;
 struct snd_pcm_substream *VAR_11;

 if (VAR_6->device == VAR_3)
  VAR_10 = 4;
 if ((VAR_9 = FUNC_2(VAR_6->card, "trident_dx_nx", VAR_7, 0, VAR_10, &VAR_8)) < 0)
  return VAR_9;

 VAR_8->private_data = VAR_6;
 if (VAR_6->tlb.entries)
  FUNC_3(VAR_8, VAR_2, &VAR_5);
 else
  FUNC_3(VAR_8, VAR_2, &VAR_4);
 VAR_8->info_flags = 0;
 FUNC_4(VAR_8->name, "Trident 4DWave");
 VAR_11 = VAR_8->streams[VAR_2].substream;
 FUNC_4(VAR_11->name, "Front Mixer");
 VAR_11 = VAR_11->next;
 FUNC_4(VAR_11->name, "Reverb Mixer");
 VAR_11 = VAR_11->next;
 FUNC_4(VAR_11->name, "Chorus Mixer");
 if (VAR_10 == 4) {
  VAR_11 = VAR_11->next;
  FUNC_4(VAR_11->name, "Second AC'97 ADC");
 }
 VAR_6->foldback = VAR_8;

 if (VAR_6->tlb.entries)
  FUNC_1(VAR_8, VAR_1,
            FUNC_0(VAR_6->pci), 0, 128*1024);
 else
  FUNC_1(VAR_8, VAR_0,
            FUNC_0(VAR_6->pci), 64*1024, 128*1024);

 return 0;
}
