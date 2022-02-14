
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int type; int id; int name; } ;
struct uac_clock_source_descriptor {int iClockSource; } ;
struct mixer_build {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mixer_build *VAR_1,
     struct usb_audio_term *VAR_2,
     void *VAR_3, int VAR_4)
{
 struct uac_clock_source_descriptor *VAR_5 = VAR_3;

 VAR_2->type = VAR_0 << 16;
 VAR_2->id = VAR_4;
 VAR_2->name = VAR_5->iClockSource;
 return 0;
}
