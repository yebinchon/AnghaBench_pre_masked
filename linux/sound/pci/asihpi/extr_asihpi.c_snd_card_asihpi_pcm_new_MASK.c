
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_pcm {int name; scalar_t__ info_flags; struct snd_card_asihpi* private_data; } ;
struct snd_card_asihpi {int pci; int card; TYPE_2__* hpi; } ;
struct TYPE_4__ {TYPE_1__* adapter; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int ) ;
 int FUNC_3 (int ,char*,int,int ,int ,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_card_asihpi *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 VAR_9 = FUNC_0(VAR_6->hpi->adapter->index,
   &VAR_11, &VAR_10,
   &VAR_12, &VAR_13, &VAR_12);

 VAR_9 = FUNC_3(VAR_6->card, "Asihpi PCM", VAR_7,
   VAR_11, VAR_10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_4(VAR_8, VAR_3,
   &VAR_5);
 FUNC_4(VAR_8, VAR_2,
   &VAR_4);

 VAR_8->private_data = VAR_6;
 VAR_8->info_flags = 0;
 FUNC_5(VAR_8->name, "Asihpi PCM");



 FUNC_2(VAR_8, VAR_1,
      FUNC_1(VAR_6->pci),
      64*1024, VAR_0);

 return 0;
}
