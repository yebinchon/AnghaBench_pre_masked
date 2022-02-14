
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int dummy; } ;
struct uac_feature_unit_descriptor {int dummy; } ;
struct mixer_build {int oterm; int map; int mixer; } ;


 int FUNC_0 (int ,int ,unsigned int,int,struct usb_audio_term*,int *,int,int,int) ;
 int FUNC_1 (struct uac_feature_unit_descriptor*) ;

__attribute__((used)) static void FUNC_2(struct mixer_build *VAR_0, void *VAR_1,
         unsigned int VAR_2, int VAR_3,
         struct usb_audio_term *VAR_4, int VAR_5,
         int VAR_6)
{
 struct uac_feature_unit_descriptor *VAR_7 = VAR_1;
 int VAR_8 = FUNC_1(VAR_7);

 FUNC_0(VAR_0->mixer, VAR_0->map, VAR_2, VAR_3,
   VAR_4, &VAR_0->oterm, VAR_5, VAR_8, VAR_6);
}
