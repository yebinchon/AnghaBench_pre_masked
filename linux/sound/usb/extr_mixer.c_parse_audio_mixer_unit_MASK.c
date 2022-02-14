
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_audio_term {scalar_t__ channels; } ;
struct uac_mixer_unit_descriptor {int bNrInPins; int * baSourceID; } ;
struct mixer_build {TYPE_1__* mixer; int chip; } ;
typedef int __u8 ;
struct TYPE_2__ {int protocol; } ;


 int FUNC_0 (struct mixer_build*,struct uac_mixer_unit_descriptor*,int,int,int,int,struct usb_audio_term*) ;
 int FUNC_1 (struct mixer_build*,int ,struct usb_audio_term*) ;
 scalar_t__ FUNC_2 (int *,int,int,int) ;
 scalar_t__ FUNC_3 (struct uac_mixer_unit_descriptor*,int ,int,int) ;
 int FUNC_4 (struct mixer_build*,int ) ;
 int * FUNC_5 (struct uac_mixer_unit_descriptor*,int ) ;
 int FUNC_6 (struct mixer_build*,struct uac_mixer_unit_descriptor*) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct mixer_build *VAR_0, int VAR_1,
      void *VAR_2)
{
 struct uac_mixer_unit_descriptor *VAR_3 = VAR_2;
 struct usb_audio_term VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_6(VAR_0, VAR_3);
 if (VAR_10 < 0) {
  FUNC_7(VAR_0->chip,
         "invalid MIXER UNIT descriptor %d\n",
         VAR_1);
  return VAR_10;
 }

 VAR_7 = VAR_10;
 VAR_5 = VAR_3->bNrInPins;

 VAR_6 = 0;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_10 = FUNC_4(VAR_0, VAR_3->baSourceID[VAR_8]);
  if (VAR_10 < 0)
   continue;

  if (!VAR_7)
   continue;
  VAR_10 = FUNC_1(VAR_0, VAR_3->baSourceID[VAR_8], &VAR_4);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_6 += VAR_4.channels;
  if (FUNC_3(VAR_3, VAR_0->mixer->protocol,
       VAR_6, VAR_7))
   break;
  for (; VAR_9 < VAR_6; VAR_9++) {
   int VAR_11, VAR_12 = 0;

   for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
    __u8 *VAR_13 = FUNC_5(VAR_3,
      VAR_0->mixer->protocol);

    if (FUNC_2(VAR_13, VAR_9, VAR_11, VAR_7)) {
     VAR_12 = 1;
     break;
    }
   }
   if (VAR_12)
    FUNC_0(VAR_0, VAR_3, VAR_8, VAR_9, VAR_7,
           VAR_1, &VAR_4);
  }
 }
 return 0;
}
