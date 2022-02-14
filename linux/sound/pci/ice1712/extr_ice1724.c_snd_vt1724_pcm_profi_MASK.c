
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ice1712* private_data; } ;
struct TYPE_2__ {int* data; } ;
struct snd_ice1712 {struct snd_pcm* pcm_pro; int pci; int card; TYPE_1__ eeprom; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_8, int VAR_9)
{
 struct snd_pcm *VAR_10;
 int VAR_11, VAR_12;

 if ((VAR_8->eeprom.data[VAR_0] & VAR_4) ==
     VAR_5)
  VAR_11 = 0;
 else
  VAR_11 = 1;
 VAR_12 = FUNC_2(VAR_8->card, "ICE1724", VAR_9, 1, VAR_11, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_3(VAR_10, VAR_3, &VAR_7);
 if (VAR_11)
  FUNC_3(VAR_10, VAR_2,
   &VAR_6);

 VAR_10->private_data = VAR_8;
 VAR_10->info_flags = 0;
 FUNC_4(VAR_10->name, "ICE1724");

 FUNC_1(VAR_10, VAR_1,
           FUNC_0(VAR_8->pci),
           256*1024, 256*1024);

 VAR_8->pcm_pro = VAR_10;

 return 0;
}
