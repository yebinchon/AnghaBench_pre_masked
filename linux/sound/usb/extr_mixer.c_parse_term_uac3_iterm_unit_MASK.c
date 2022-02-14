
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int id; int channels; void* name; scalar_t__ chconfig; void* type; } ;
struct uac3_input_terminal_descriptor {int wTerminalDescrStr; int wClusterDescrID; int wTerminalType; int bCSourceID; } ;
struct mixer_build {int dummy; } ;


 int FUNC_0 (struct mixer_build*,int ,struct usb_audio_term*) ;
 int FUNC_1 (struct mixer_build*,void*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mixer_build *VAR_0,
          struct usb_audio_term *VAR_1,
          void *VAR_2, int VAR_3)
{
 struct uac3_input_terminal_descriptor *VAR_4 = VAR_2;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_0, VAR_4->bCSourceID, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;




 VAR_1->id = VAR_3;
 VAR_1->type = FUNC_2(VAR_4->wTerminalType);

 VAR_5 = FUNC_1(VAR_0, FUNC_2(VAR_4->wClusterDescrID));
 if (VAR_5 < 0)
  return VAR_5;
 VAR_1->channels = VAR_5;


 VAR_1->chconfig = 0;

 VAR_1->name = FUNC_2(VAR_4->wTerminalDescrStr);
 return 0;
}
