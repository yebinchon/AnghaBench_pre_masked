
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {scalar_t__ amplifier_ctrl; TYPE_1__* card; int * ac97; int ac97_bus; } ;
struct snd_ac97_template {int num; int scaps; int private_free; struct snd_cs46xx* private_data; } ;
typedef int ac97 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_ac97_template*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct snd_ac97_template*,int *) ;
 int FUNC_4 (struct snd_cs46xx*,int ,int) ;
 int FUNC_5 (struct snd_cs46xx*,int ,int,int) ;
 int VAR_6 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct snd_cs46xx *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct snd_ac97_template VAR_11;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11 = VAR_7;
 VAR_11 = VAR_6;
 VAR_11 = VAR_8;
 if (VAR_7->amplifier_ctrl == VAR_5)
  VAR_11 = VAR_2;

 if (VAR_8 == VAR_3) {
  FUNC_5(VAR_7, VAR_1, 0, VAR_8);
  FUNC_6(10);
  if (FUNC_4(VAR_7, VAR_1, VAR_8) & 0x8000) {
   FUNC_0(VAR_7->card->dev,
    "secondary codec not present\n");
   return -VAR_4;
  }
 }

 FUNC_5(VAR_7, VAR_0, 0x8000, VAR_8);
 for (VAR_9 = 0; VAR_9 < 100; ++VAR_9) {
  if (FUNC_4(VAR_7, VAR_0, VAR_8) == 0x8000) {
   VAR_10 = FUNC_3(VAR_7->ac97_bus, &VAR_11, &VAR_7->ac97[VAR_8]);
   return VAR_10;
  }
  FUNC_2(10);
 }
 FUNC_0(VAR_7->card->dev, "codec %d detection timeout\n", VAR_8);
 return -VAR_4;
}
