
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_emu10k1 {int i2c_lock; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_4 (struct snd_emu10k1*,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct snd_emu10k1 *VAR_7,
    u32 VAR_8,
    u32 VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if ((VAR_8 > 0x7f) || (VAR_9 > 0x1ff)) {
  FUNC_0(VAR_7->card->dev, "i2c_write: invalid values.\n");
  return -VAR_0;
 }


 FUNC_5(&VAR_7->i2c_lock);

 VAR_10 = VAR_8 << 25 | VAR_9 << 16;


 FUNC_4(VAR_7, VAR_5, 0, VAR_10);
 VAR_10 = FUNC_3(VAR_7, VAR_5, 0);

 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {

  VAR_10 = 0;
  VAR_10 = VAR_10 | (VAR_3|VAR_4|VAR_2);
  FUNC_4(VAR_7, VAR_6, 0, VAR_10);


  while (1) {
   FUNC_2(1);
   VAR_12 = FUNC_3(VAR_7, VAR_6, 0);
   VAR_11++;
   if ((VAR_12 & VAR_4) == 0)
    break;

   if (VAR_11 > 1000) {
    FUNC_1(VAR_7->card->dev,
        "emu10k1:I2C:timeout status=0x%x\n",
        VAR_12);
    break;
   }
  }

  if ((VAR_12 & VAR_1) == 0)
   break;
 }

 if (VAR_13 == 10) {
  FUNC_0(VAR_7->card->dev, "Writing to ADC failed!\n");
  FUNC_0(VAR_7->card->dev, "status=0x%x, reg=%d, value=%d\n",
   VAR_12, VAR_8, VAR_9);

  VAR_14 = -VAR_0;
 }

 FUNC_6(&VAR_7->i2c_lock);
 return VAR_14;
}
