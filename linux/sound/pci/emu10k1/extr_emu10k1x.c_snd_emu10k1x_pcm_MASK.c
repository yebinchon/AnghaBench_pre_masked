
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_chmap_elem {int dummy; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct emu10k1x* private_data; } ;
struct emu10k1x {int pci; struct snd_pcm* pcm; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_pcm_chmap_elem* VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm*,int ,struct snd_pcm_chmap_elem const*,int,int,int *) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 struct snd_pcm_chmap_elem* VAR_6 ;
 int FUNC_5 (int ,char*) ;
 struct snd_pcm_chmap_elem* VAR_7 ;

__attribute__((used)) static int FUNC_6(struct emu10k1x *VAR_8, int VAR_9)
{
 struct snd_pcm *VAR_10;
 const struct snd_pcm_chmap_elem *VAR_11 = ((void*)0);
 int VAR_12;
 int VAR_13 = 0;

 if (VAR_9 == 0)
  VAR_13 = 1;

 if ((VAR_12 = FUNC_3(VAR_8->card, "emu10k1x", VAR_9, 1, VAR_13, &VAR_10)) < 0)
  return VAR_12;

 VAR_10->private_data = VAR_8;

 switch(VAR_9) {
 case 0:
  FUNC_4(VAR_10, VAR_2, &VAR_5);
  FUNC_4(VAR_10, VAR_1, &VAR_4);
  break;
 case 1:
 case 2:
  FUNC_4(VAR_10, VAR_2, &VAR_5);
  break;
 }

 VAR_10->info_flags = 0;
 switch(VAR_9) {
 case 0:
  FUNC_5(VAR_10->name, "EMU10K1X Front");
  VAR_11 = VAR_6;
  break;
 case 1:
  FUNC_5(VAR_10->name, "EMU10K1X Rear");
  VAR_11 = VAR_7;
  break;
 case 2:
  FUNC_5(VAR_10->name, "EMU10K1X Center/LFE");
  VAR_11 = VAR_3;
  break;
 }
 VAR_8->pcm = VAR_10;

 FUNC_2(VAR_10, VAR_0,
           FUNC_0(VAR_8->pci),
           32*1024, 32*1024);

 return FUNC_1(VAR_10, VAR_2, VAR_11, 2,
         1 << 2, ((void*)0));
}
