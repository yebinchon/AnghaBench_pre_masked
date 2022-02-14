
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct snd_azf3328 {TYPE_2__* card; TYPE_1__* rmidi; int codecs; int reg_lock; TYPE_3__* timer; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int sticks; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_azf3328*,int ) ;
 int FUNC_2 (struct snd_azf3328*,scalar_t__,int) ;
 int FUNC_3 (struct snd_azf3328*) ;
 int FUNC_4 (struct snd_azf3328*,int ,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_10, void *VAR_11)
{
 struct snd_azf3328 *VAR_12 = VAR_11;
 u8 VAR_13;
 static unsigned long VAR_14;

 VAR_13 = FUNC_1(VAR_12, VAR_0);


 if (!(VAR_13 &
  (VAR_7|VAR_8|VAR_4
  |VAR_2|VAR_5|VAR_9)
 ))
  return VAR_6;

 FUNC_0(VAR_12->card->dev,
  "irq_count %ld! IDX_IO_IRQSTATUS %04x\n",
   VAR_14++ ,
   VAR_13);

 if (VAR_13 & VAR_9) {




  if (VAR_12->timer)
   FUNC_6(VAR_12->timer, VAR_12->timer->sticks);

                FUNC_7(&VAR_12->reg_lock);
  FUNC_2(VAR_12, VAR_1 + 3, 0x07);
  FUNC_8(&VAR_12->reg_lock);
  FUNC_0(VAR_12->card->dev, "timer IRQ\n");
 }

 if (VAR_13 & (VAR_7|VAR_8|VAR_4))
  FUNC_4(VAR_12, VAR_12->codecs, VAR_13);

 if (VAR_13 & VAR_2)
  FUNC_3(VAR_12);



 if (VAR_13 & VAR_5) {
  FUNC_5(VAR_10, VAR_12->rmidi->private_data);



  FUNC_0(VAR_12->card->dev, "MPU401 IRQ\n");
 }
 return VAR_3;
}
