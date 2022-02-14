
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_audio_term {int type; int channels; int name; int chconfig; } ;
struct uac_mixer_unit_descriptor {int dummy; } ;
struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mixer_build*,struct uac_mixer_unit_descriptor*) ;
 int FUNC_1 (struct uac_mixer_unit_descriptor*) ;
 int FUNC_2 (struct uac_mixer_unit_descriptor*,int) ;

__attribute__((used)) static int FUNC_3(struct mixer_build *VAR_2,
     struct usb_audio_term *VAR_3,
     void *VAR_4, int VAR_5)
{
 struct uac_mixer_unit_descriptor *VAR_6 = VAR_4;
 int VAR_7 = VAR_2->mixer->protocol;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_6);
 if (VAR_8 <= 0)
  return VAR_8;

 VAR_3->type = VAR_0 << 16;
 VAR_3->channels = VAR_8;
 if (VAR_7 != VAR_1) {
  VAR_3->chconfig = FUNC_2(VAR_6, VAR_7);
  VAR_3->name = FUNC_1(VAR_6);
 }
 return 0;
}
