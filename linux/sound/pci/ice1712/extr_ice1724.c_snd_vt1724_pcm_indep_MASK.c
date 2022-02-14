
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ice1712* private_data; } ;
struct snd_ice1712 {int num_total_dacs; struct snd_pcm* pcm_ds; int pci; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int ,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_3, int VAR_4)
{
 struct snd_pcm *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->num_total_dacs / 2 - 1;
 if (VAR_6 <= 0)
  return 0;

 VAR_7 = FUNC_2(VAR_3->card, "ICE1724 Surrounds", VAR_4, VAR_6, 0, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_5, VAR_1,
   &VAR_2);

 VAR_5->private_data = VAR_3;
 VAR_5->info_flags = 0;
 FUNC_4(VAR_5->name, "ICE1724 Surround PCM");

 FUNC_1(VAR_5, VAR_0,
           FUNC_0(VAR_3->pci),
           256*1024, 256*1024);

 VAR_3->pcm_ds = VAR_5;

 return 0;
}
