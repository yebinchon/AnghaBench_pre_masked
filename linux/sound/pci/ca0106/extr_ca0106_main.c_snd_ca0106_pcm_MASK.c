
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm_chmap_elem {int dummy; } ;
struct snd_pcm {TYPE_1__* streams; int name; scalar_t__ info_flags; struct snd_ca0106* private_data; } ;
struct snd_ca0106 {struct snd_pcm** pcm; int pci; int card; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct snd_pcm_chmap_elem* VAR_3 ;
 struct snd_pcm_chmap_elem* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,size_t,struct snd_pcm_chmap_elem const*,int,int,int *) ;
 int FUNC_2 (struct snd_pcm_substream*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,size_t,int *) ;
 struct snd_pcm_chmap_elem* VAR_13 ;
 int FUNC_5 (int ,char*) ;
 struct snd_pcm_chmap_elem* VAR_14 ;

__attribute__((used)) static int FUNC_6(struct snd_ca0106 *VAR_15, int VAR_16)
{
 struct snd_pcm *VAR_17;
 struct snd_pcm_substream *VAR_18;
 const struct snd_pcm_chmap_elem *VAR_19 = ((void*)0);
 int VAR_20;

 VAR_20 = FUNC_3(VAR_15->card, "ca0106", VAR_16, 1, 1, &VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_17->private_data = VAR_15;

 switch (VAR_16) {
 case 0:
   FUNC_4(VAR_17, VAR_2, &VAR_10);
   FUNC_4(VAR_17, VAR_1, &VAR_5);
   VAR_19 = VAR_13;
          break;
 case 1:
   FUNC_4(VAR_17, VAR_2, &VAR_11);
   FUNC_4(VAR_17, VAR_1, &VAR_6);
   VAR_19 = VAR_14;
          break;
 case 2:
   FUNC_4(VAR_17, VAR_2, &VAR_9);
   FUNC_4(VAR_17, VAR_1, &VAR_7);
   VAR_19 = VAR_3;
          break;
 case 3:
   FUNC_4(VAR_17, VAR_2, &VAR_12);
   FUNC_4(VAR_17, VAR_1, &VAR_8);
   VAR_19 = VAR_4;
          break;
        }

 VAR_17->info_flags = 0;
 FUNC_5(VAR_17->name, "CA0106");

 for(VAR_18 = VAR_17->streams[VAR_2].substream;
     VAR_18;
     VAR_18 = VAR_18->next) {
  FUNC_2(VAR_18, VAR_0,
           FUNC_0(VAR_15->pci),
           64*1024, 64*1024);
 }

 for (VAR_18 = VAR_17->streams[VAR_1].substream;
       VAR_18;
       VAR_18 = VAR_18->next) {
  FUNC_2(VAR_18, VAR_0,
           FUNC_0(VAR_15->pci),
           64*1024, 64*1024);
 }

 VAR_20 = FUNC_1(VAR_17, VAR_2, VAR_19, 2,
         1 << 2, ((void*)0));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_15->pcm[VAR_16] = VAR_17;

 return 0;
}
