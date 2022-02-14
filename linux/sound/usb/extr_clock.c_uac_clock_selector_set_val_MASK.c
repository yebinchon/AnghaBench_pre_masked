
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int dev; } ;
typedef int pin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,int,int,unsigned char*,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (struct snd_usb_audio*,int) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int,unsigned char,...) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_6, int VAR_7,
     unsigned char VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6->dev, FUNC_4(VAR_6->dev, 0),
         VAR_1,
         VAR_4 | VAR_5 | VAR_3,
         VAR_2 << 8,
         FUNC_1(VAR_6) | (VAR_7 << 8),
         &VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 != sizeof(VAR_8)) {
  FUNC_3(VAR_6,
   "setting selector (id %d) unexpected length %d\n",
   VAR_7, VAR_9);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 != VAR_8) {
  FUNC_3(VAR_6,
   "setting selector (id %d) to %x failed (current: %d)\n",
   VAR_7, VAR_8, VAR_9);
  return -VAR_0;
 }

 return VAR_9;
}
