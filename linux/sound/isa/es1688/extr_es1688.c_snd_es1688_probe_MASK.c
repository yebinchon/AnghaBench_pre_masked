
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl3 {int dummy; } ;
struct snd_es1688 {scalar_t__ mpu_port; TYPE_1__* pcm; int dma8; int irq; int port; } ;
struct snd_card {int dev; int longname; int shortname; int driver; struct snd_es1688* private_data; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*,struct snd_es1688*) ;
 int FUNC_3 (struct snd_card*,struct snd_es1688*,int ) ;
 int FUNC_4 (struct snd_card*,int ,int ,scalar_t__,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (struct snd_card*,scalar_t__,scalar_t__,int ,int ,struct snd_opl3**) ;
 int FUNC_6 (struct snd_opl3*,int ,int,int *) ;
 int FUNC_7 (int ,int,char*,char*,int ,int ,int ) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int FUNC_9(struct snd_card *VAR_7, unsigned int VAR_8)
{
 struct snd_es1688 *VAR_9 = VAR_7->private_data;
 struct snd_opl3 *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_9, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_7, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_8(VAR_7->driver, "ES1688", sizeof(VAR_7->driver));
 FUNC_8(VAR_7->shortname, VAR_9->pcm->name, sizeof(VAR_7->shortname));
 FUNC_7(VAR_7->longname, sizeof(VAR_7->longname),
  "%s at 0x%lx, irq %i, dma %i", VAR_9->pcm->name, VAR_9->port,
   VAR_9->irq, VAR_9->dma8);

 if (VAR_4[VAR_8] == VAR_3)
  VAR_4[VAR_8] = VAR_6[VAR_8];

 if (VAR_4[VAR_8] > 0) {
  if (FUNC_5(VAR_7, VAR_4[VAR_8], VAR_4[VAR_8] + 2,
    VAR_1, 0, &VAR_10) < 0)
   FUNC_0(VAR_7->dev,
     "opl3 not detected at 0x%lx\n", VAR_4[VAR_8]);
  else {
   VAR_11 = FUNC_6(VAR_10, 0, 1, ((void*)0));
   if (VAR_11 < 0)
    return VAR_11;
  }
 }

 if (VAR_5[VAR_8] >= 0 && VAR_5[VAR_8] != VAR_2 &&
   VAR_9->mpu_port > 0) {
  VAR_11 = FUNC_4(VAR_7, 0, VAR_0,
    VAR_9->mpu_port, 0,
    VAR_5[VAR_8], ((void*)0));
  if (VAR_11 < 0)
   return VAR_11;
 }

 return FUNC_1(VAR_7);
}
