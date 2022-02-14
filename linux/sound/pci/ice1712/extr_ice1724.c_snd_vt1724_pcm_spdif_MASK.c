
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ice1712* private_data; } ;
struct TYPE_2__ {int* data; } ;
struct snd_ice1712 {int has_spdif; struct snd_pcm* pcm; int pci; int card; scalar_t__ force_rdma1; scalar_t__ force_pdma4; TYPE_1__ eeprom; } ;


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
 char *VAR_10;
 struct snd_pcm *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 if (VAR_8->force_pdma4 ||
     (VAR_8->eeprom.data[VAR_0] & VAR_5)) {
  VAR_12 = 1;
  VAR_8->has_spdif = 1;
 } else
  VAR_12 = 0;
 if (VAR_8->force_rdma1 ||
     (VAR_8->eeprom.data[VAR_0] & VAR_4)) {
  VAR_13 = 1;
  VAR_8->has_spdif = 1;
 } else
  VAR_13 = 0;
 if (!VAR_12 && !VAR_13)
  return 0;

 if (VAR_8->force_pdma4 || VAR_8->force_rdma1)
  VAR_10 = "ICE1724 Secondary";
 else
  VAR_10 = "ICE1724 IEC958";
 VAR_14 = FUNC_2(VAR_8->card, VAR_10, VAR_9, VAR_12, VAR_13, &VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_12)
  FUNC_3(VAR_11, VAR_3,
    &VAR_7);
 if (VAR_13)
  FUNC_3(VAR_11, VAR_2,
    &VAR_6);

 VAR_11->private_data = VAR_8;
 VAR_11->info_flags = 0;
 FUNC_4(VAR_11->name, VAR_10);

 FUNC_1(VAR_11, VAR_1,
           FUNC_0(VAR_8->pci),
           256*1024, 256*1024);

 VAR_8->pcm = VAR_11;

 return 0;
}
