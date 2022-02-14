
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct snd_rawmidi* rmidi; TYPE_3__* card; scalar_t__ mmio; } ;
typedef TYPE_1__ vortex_t ;
struct snd_rawmidi {int name; struct snd_mpu401* private_data; } ;
struct snd_mpu401 {unsigned long cport; } ;
struct TYPE_5__ {int number; int dev; } ;


 char* VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned long) ;
 int FUNC_3 (TYPE_3__*,int ,int ,unsigned long,int,int,struct snd_rawmidi**) ;
 int FUNC_4 (int ,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_5(vortex_t *VAR_18)
{
 struct snd_rawmidi *VAR_19;
 int VAR_20, VAR_21;
 struct snd_mpu401 *VAR_22;
 unsigned long VAR_23;
 VAR_20 =
     (FUNC_1(VAR_18->mmio, VAR_13) & ~VAR_2) &
     ~VAR_1;
 FUNC_2(VAR_18->mmio, VAR_13, VAR_20);


 VAR_21 = 1;
 VAR_20 = FUNC_1(VAR_18->mmio, VAR_14) & 0xffff00cf;
 VAR_20 |= (VAR_5 << 8) | ((VAR_21 >> 24) & 0xff) << 4;
 FUNC_2(VAR_18->mmio, VAR_14, VAR_20);
 FUNC_2(VAR_18->mmio, VAR_16, VAR_12);


 VAR_20 = FUNC_1(VAR_18->mmio, VAR_17);
 if (VAR_20 != VAR_6 ) {
  FUNC_0(VAR_18->card->dev, "midi port doesn't acknowledge!\n");
  return -VAR_3;
 }

 FUNC_2(VAR_18->mmio, VAR_15,
  FUNC_1(VAR_18->mmio, VAR_15) | VAR_4);
 VAR_23 = (unsigned long)(VAR_18->mmio + VAR_17);
 if ((VAR_20 =
      FUNC_3(VAR_18->card, 0, VAR_7, VAR_23,
     VAR_9 | VAR_11 |
     VAR_10, -1, &VAR_19)) != 0) {
  FUNC_2(VAR_18->mmio, VAR_13,
   (FUNC_1(VAR_18->mmio, VAR_13) &
    ~VAR_2) & ~VAR_1);
  return VAR_20;
 }
 VAR_22 = VAR_19->private_data;
 VAR_22->cport = (unsigned long)(VAR_18->mmio + VAR_16);


 FUNC_4(VAR_19->name, sizeof(VAR_19->name), "%s MIDI %d", VAR_0 , VAR_18->card->number);

 VAR_18->rmidi = VAR_19;
 return 0;
}
