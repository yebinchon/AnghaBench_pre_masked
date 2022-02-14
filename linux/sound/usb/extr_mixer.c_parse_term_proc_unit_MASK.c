
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_audio_term {int type; int id; int name; int chconfig; int channels; } ;
struct uac_processing_unit_descriptor {int * baSourceID; scalar_t__ bNrInPins; } ;
struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (struct mixer_build*,int ,struct usb_audio_term*) ;
 int FUNC_1 (struct uac_processing_unit_descriptor*) ;
 int FUNC_2 (struct uac_processing_unit_descriptor*,int) ;
 int FUNC_3 (struct uac_processing_unit_descriptor*,int) ;

__attribute__((used)) static int FUNC_4(struct mixer_build *VAR_1,
    struct usb_audio_term *VAR_2,
    void *VAR_3, int VAR_4, int VAR_5)
{
 struct uac_processing_unit_descriptor *VAR_6 = VAR_3;
 int VAR_7 = VAR_1->mixer->protocol;
 int VAR_8;

 if (VAR_6->bNrInPins) {

  VAR_8 = FUNC_0(VAR_1, VAR_6->baSourceID[0], VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_2->type = VAR_5 << 16;
 VAR_2->id = VAR_4;

 if (VAR_7 == VAR_0)
  return 0;

 if (!VAR_2->channels) {
  VAR_2->channels = FUNC_1(VAR_6);
  VAR_2->chconfig = FUNC_3(VAR_6, VAR_7);
 }
 VAR_2->name = FUNC_2(VAR_6, VAR_7);
 return 0;
}
