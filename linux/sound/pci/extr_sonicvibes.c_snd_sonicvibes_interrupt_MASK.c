
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sonicvibes {TYPE_3__* master_volume; TYPE_4__* card; TYPE_2__* master_mute; int reg_lock; TYPE_1__* rmidi; int capture_substream; int playback_substream; scalar_t__ pcm; int irqmask; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (struct sonicvibes*,int ) ;
 unsigned char VAR_11 ;
 int FUNC_1 (int ,char*) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (struct sonicvibes*,int ) ;
 int FUNC_8 (struct sonicvibes*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_12, void *VAR_13)
{
 struct sonicvibes *VAR_14 = VAR_13;
 unsigned char VAR_15;

 VAR_15 = FUNC_2(FUNC_0(VAR_14, VAR_4));
 if (!(VAR_15 & (VAR_5 | VAR_6 | VAR_10)))
  return VAR_2;
 if (VAR_15 == 0xff) {
  FUNC_3(VAR_14->irqmask = ~0, FUNC_0(VAR_14, VAR_0));
  FUNC_1(VAR_14->card->dev,
   "IRQ failure - interrupts disabled!!\n");
  return VAR_1;
 }
 if (VAR_14->pcm) {
  if (VAR_15 & VAR_5)
   FUNC_6(VAR_14->playback_substream);
  if (VAR_15 & VAR_6)
   FUNC_6(VAR_14->capture_substream);
 }
 if (VAR_14->rmidi) {
  if (VAR_15 & VAR_10)
   FUNC_5(VAR_12, VAR_14->rmidi->private_data);
 }
 if (VAR_15 & VAR_11) {
  unsigned char VAR_16;
  int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

  FUNC_9(&VAR_14->reg_lock);
  VAR_16 = FUNC_7(VAR_14, VAR_9);
  VAR_17 = VAR_16 & 0x3f;
  if (!(VAR_16 & 0x40))
   VAR_17 = -VAR_17;
  VAR_18 = VAR_20 = FUNC_7(VAR_14, VAR_7);
  VAR_19 = VAR_21 = FUNC_7(VAR_14, VAR_8);
  VAR_18 &= 0x1f;
  VAR_19 &= 0x1f;
  VAR_18 += VAR_17;
  if (VAR_18 < 0)
   VAR_18 = 0;
  if (VAR_18 > 0x1f)
   VAR_18 = 0x1f;
  VAR_19 += VAR_17;
  if (VAR_19 < 0)
   VAR_19 = 0;
  if (VAR_19 > 0x1f)
   VAR_19 = 0x1f;
  if (VAR_16 & 0x80) {
   VAR_20 ^= 0x80;
   VAR_21 ^= 0x80;
  }
  VAR_18 |= VAR_20 & 0x80;
  VAR_19 |= VAR_21 & 0x80;
  FUNC_8(VAR_14, VAR_7, VAR_18);
  FUNC_8(VAR_14, VAR_8, VAR_19);
  FUNC_10(&VAR_14->reg_lock);
  FUNC_4(VAR_14->card, VAR_3, &VAR_14->master_mute->id);
  FUNC_4(VAR_14->card, VAR_3, &VAR_14->master_volume->id);
 }
 return VAR_1;
}
