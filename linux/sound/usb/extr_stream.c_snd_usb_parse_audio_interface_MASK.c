
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int dummy; } ;


 int FUNC_0 (struct snd_usb_audio*,int,int*,int) ;

int FUNC_1(struct snd_usb_audio *VAR_0, int VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;


 VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_3, 0);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_3) {

  VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_3, 1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
