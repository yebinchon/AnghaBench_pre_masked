
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_audio_term {int type; int id; int name; } ;
struct uac_selector_unit_descriptor {int * baSourceID; } ;
struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mixer_build*,int ,struct usb_audio_term*) ;
 int FUNC_1 (struct uac_selector_unit_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct mixer_build *VAR_2,
        struct usb_audio_term *VAR_3,
        void *VAR_4, int VAR_5)
{
 struct uac_selector_unit_descriptor *VAR_6 = VAR_4;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_2, VAR_6->baSourceID[0], VAR_3);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_3->type = VAR_0 << 16;
 VAR_3->id = VAR_5;
 if (VAR_2->mixer->protocol != VAR_1)
  VAR_3->name = FUNC_1(VAR_6);
 return 0;
}
