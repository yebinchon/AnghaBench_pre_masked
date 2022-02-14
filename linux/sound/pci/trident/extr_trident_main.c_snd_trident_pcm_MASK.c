
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ entries; } ;
struct snd_trident {scalar_t__ device; int pci; TYPE_1__ tlb; struct snd_pcm* pcm; int ChanPCM; int card; } ;
struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_2__* streams; int name; int dev_subclass; scalar_t__ info_flags; struct snd_trident* private_data; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,size_t,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct snd_trident *VAR_10, int VAR_11)
{
 struct snd_pcm *VAR_12;
 int VAR_13;

 if ((VAR_13 = FUNC_3(VAR_10->card, "trident_dx_nx", VAR_11, VAR_10->ChanPCM, 1, &VAR_12)) < 0)
  return VAR_13;

 VAR_12->private_data = VAR_10;

 if (VAR_10->tlb.entries) {
  FUNC_4(VAR_12, VAR_3, &VAR_7);
 } else {
  FUNC_4(VAR_12, VAR_3, &VAR_8);
 }
 FUNC_4(VAR_12, VAR_2,
   VAR_10->device != VAR_5 ?
   &VAR_6 :
   &VAR_9);

 VAR_12->info_flags = 0;
 VAR_12->dev_subclass = VAR_4;
 FUNC_5(VAR_12->name, "Trident 4DWave");
 VAR_10->pcm = VAR_12;

 if (VAR_10->tlb.entries) {
  struct snd_pcm_substream *VAR_14;
  for (VAR_14 = VAR_12->streams[VAR_3].substream; VAR_14; VAR_14 = VAR_14->next)
   FUNC_1(VAR_14, VAR_1,
            FUNC_0(VAR_10->pci),
            64*1024, 128*1024);
  FUNC_1(VAR_12->streams[VAR_2].substream,
           VAR_0, FUNC_0(VAR_10->pci),
           64*1024, 128*1024);
 } else {
  FUNC_2(VAR_12, VAR_0,
            FUNC_0(VAR_10->pci), 64*1024, 128*1024);
 }

 return 0;
}
