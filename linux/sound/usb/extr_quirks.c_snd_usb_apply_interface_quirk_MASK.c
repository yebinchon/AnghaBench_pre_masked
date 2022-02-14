
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {scalar_t__ usb_id; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct snd_usb_audio*,int,int) ;
 int FUNC_2 (struct snd_usb_audio*,int,int) ;
 int FUNC_3 (struct snd_usb_audio*,int,int) ;

int FUNC_4(struct snd_usb_audio *VAR_0,
      int VAR_1,
      int VAR_2)
{

 if (VAR_0->usb_id == FUNC_0(0x0763, 0x2003))
  return FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_0->usb_id == FUNC_0(0x0763, 0x2001))
  return FUNC_3(VAR_0, VAR_1, VAR_2);

 if (VAR_0->usb_id == FUNC_0(0x0763, 0x2012))
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 return 0;
}
