
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wl1273_core {int i2s_mode; int (* write ) (struct wl1273_core*,int ,int) ;int lock; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wl1273_core*,int ,int) ;
 int FUNC_5 (struct wl1273_core*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct wl1273_core *VAR_24,
          int VAR_25, int VAR_26)
{
 struct device *VAR_27 = &VAR_24->client->dev;
 int VAR_28 = 0;
 u16 VAR_29;

 FUNC_0(VAR_27, "rate: %d\n", VAR_25);
 FUNC_0(VAR_27, "width: %d\n", VAR_26);

 FUNC_2(&VAR_24->lock);

 VAR_29 = VAR_24->i2s_mode & ~VAR_14 & ~VAR_5;

 switch (VAR_25) {
 case 48000:
  VAR_29 |= VAR_12;
  break;
 case 44100:
  VAR_29 |= VAR_11;
  break;
 case 32000:
  VAR_29 |= VAR_10;
  break;
 case 22050:
  VAR_29 |= VAR_9;
  break;
 case 16000:
  VAR_29 |= VAR_8;
  break;
 case 12000:
  VAR_29 |= VAR_7;
  break;
 case 11025:
  VAR_29 |= VAR_6;
  break;
 case 8000:
  VAR_29 |= VAR_13;
  break;
 default:
  FUNC_1(VAR_27, "Sampling rate: %d not supported\n", VAR_25);
  VAR_28 = -VAR_0;
  goto out;
 }

 switch (VAR_26) {
 case 16:
  VAR_29 |= VAR_16;
  break;
 case 20:
  VAR_29 |= VAR_17;
  break;
 case 24:
  VAR_29 |= VAR_18;
  break;
 case 25:
  VAR_29 |= VAR_19;
  break;
 case 30:
  VAR_29 |= VAR_20;
  break;
 case 32:
  VAR_29 |= VAR_21;
  break;
 case 40:
  VAR_29 |= VAR_22;
  break;
 case 48:
  VAR_29 |= VAR_23;
  break;
 case 64:
  VAR_29 |= VAR_15;
  break;
 default:
  FUNC_1(VAR_27, "Data width: %d not supported\n", VAR_26);
  VAR_28 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_27, "WL1273_I2S_DEF_MODE: 0x%04x\n", VAR_3);
 FUNC_0(VAR_27, "core->i2s_mode: 0x%04x\n", VAR_24->i2s_mode);
 FUNC_0(VAR_27, "mode: 0x%04x\n", VAR_29);

 if (VAR_24->i2s_mode != VAR_29) {
  VAR_28 = VAR_24->write(VAR_24, VAR_4, VAR_29);
  if (VAR_28)
   goto out;

  VAR_24->i2s_mode = VAR_29;
  VAR_28 = VAR_24->write(VAR_24, VAR_1,
    VAR_2);
  if (VAR_28)
   goto out;
 }
out:
 FUNC_3(&VAR_24->lock);

 return VAR_28;
}
