
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int dummy; } ;
struct mixer_build {struct usb_audio_term* termbitmap; } ;


 int FUNC_0 (struct mixer_build*,int,struct usb_audio_term*) ;
 int FUNC_1 (struct usb_audio_term*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mixer_build *VAR_0, int VAR_1,
       struct usb_audio_term *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(VAR_0->termbitmap, 0, sizeof(VAR_0->termbitmap));
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
