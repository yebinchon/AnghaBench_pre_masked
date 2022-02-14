
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ymfpci_voice {int (* interrupt ) (struct snd_ymfpci*,struct snd_ymfpci_voice*) ;} ;
struct snd_ymfpci {int active_bank; TYPE_1__* rawmidi; int timer_ticks; scalar_t__ timer; int interrupt_sleep; int interrupt_sleep_count; int reg_lock; int voice_lock; scalar_t__* effect_substream; scalar_t__* capture_substream; struct snd_ymfpci_voice* voices; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct snd_ymfpci*,int ) ;
 int FUNC_7 (struct snd_ymfpci*,int ) ;
 int FUNC_8 (struct snd_ymfpci*,int ,int) ;
 int FUNC_9 (struct snd_ymfpci*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct snd_ymfpci*,struct snd_ymfpci_voice*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_8, void *VAR_9)
{
 struct snd_ymfpci *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12, VAR_13;
 struct snd_ymfpci_voice *VAR_14;

 VAR_11 = FUNC_6(VAR_10, VAR_4);
 if (VAR_11 & 0x80000000) {
  VAR_10->active_bank = FUNC_6(VAR_10, VAR_1) & 1;
  FUNC_10(&VAR_10->voice_lock);
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_14 = &VAR_10->voices[VAR_12];
   if (VAR_14->interrupt)
    VAR_14->interrupt(VAR_10, VAR_14);
  }
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   if (VAR_10->capture_substream[VAR_12])
    FUNC_4(VAR_10->capture_substream[VAR_12]);
  }






  FUNC_11(&VAR_10->voice_lock);
  FUNC_10(&VAR_10->reg_lock);
  FUNC_8(VAR_10, VAR_4, 0x80000000);
  VAR_13 = FUNC_6(VAR_10, VAR_3) | 2;
  FUNC_8(VAR_10, VAR_3, VAR_13);
  FUNC_11(&VAR_10->reg_lock);

  if (FUNC_0(&VAR_10->interrupt_sleep_count)) {
   FUNC_1(&VAR_10->interrupt_sleep_count, 0);
   FUNC_13(&VAR_10->interrupt_sleep);
  }
 }

 VAR_11 = FUNC_7(VAR_10, VAR_2);
 if (VAR_11 & 1) {
  if (VAR_10->timer)
   FUNC_3(VAR_10->timer, VAR_10->timer_ticks);
 }
 FUNC_9(VAR_10, VAR_2, VAR_11);

 if (VAR_10->rawmidi)
  FUNC_2(VAR_8, VAR_10->rawmidi->private_data);
 return VAR_0;
}
