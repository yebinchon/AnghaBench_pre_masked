
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int chip; } ;
struct usb_audio_term {int dummy; } ;


 int FUNC_0 (int ,struct usb_audio_term*,char*,int,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct usb_mixer_interface *VAR_0,
           struct usb_audio_term *VAR_1,
           bool VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_0->chip, VAR_1, VAR_3, VAR_4, 0);

 if (VAR_5 == 0)
  FUNC_2(VAR_3, "Unknown", VAR_4);






 if (VAR_2)
  FUNC_1(VAR_3, " - Input Jack", VAR_4);
 else
  FUNC_1(VAR_3, " - Output Jack", VAR_4);
}
