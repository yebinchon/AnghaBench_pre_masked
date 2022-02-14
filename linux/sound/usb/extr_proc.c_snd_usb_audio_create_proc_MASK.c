
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct snd_usb_audio*,int ) ;

void FUNC_1(struct snd_usb_audio *VAR_2)
{
 FUNC_0(VAR_2->card, "usbbus", VAR_2,
        VAR_0);
 FUNC_0(VAR_2->card, "usbid", VAR_2,
        VAR_1);
}
