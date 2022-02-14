
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {scalar_t__ device; int pci; struct snd_pcm* spdif; int card; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct snd_trident* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int ,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_trident *VAR_5, int VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_2(VAR_5->card, "trident_dx_nx IEC958", VAR_6, 1, 0, &VAR_7)) < 0)
  return VAR_8;

 VAR_7->private_data = VAR_5;
 if (VAR_5->device != VAR_2) {
  FUNC_3(VAR_7, VAR_1, &VAR_4);
 } else {
  FUNC_3(VAR_7, VAR_1, &VAR_3);
 }
 VAR_7->info_flags = 0;
 FUNC_4(VAR_7->name, "Trident 4DWave IEC958");
 VAR_5->spdif = VAR_7;

 FUNC_1(VAR_7, VAR_0, FUNC_0(VAR_5->pci), 64*1024, 128*1024);

 return 0;
}
