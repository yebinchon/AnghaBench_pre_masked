
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int id; int name; int chconfig; int channels; int type; } ;
struct uac2_input_terminal_descriptor {int iTerminal; int bmChannelConfig; int bNrChannels; int wTerminalType; int bCSourceID; } ;
struct mixer_build {int dummy; } ;


 int FUNC_0 (struct mixer_build*,int ,struct usb_audio_term*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mixer_build *VAR_0,
          struct usb_audio_term *VAR_1,
          void *VAR_2, int VAR_3)
{
 struct uac2_input_terminal_descriptor *VAR_4 = VAR_2;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_0, VAR_4->bCSourceID, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;




 VAR_1->id = VAR_3;
 VAR_1->type = FUNC_1(VAR_4->wTerminalType);
 VAR_1->channels = VAR_4->bNrChannels;
 VAR_1->chconfig = FUNC_2(VAR_4->bmChannelConfig);
 VAR_1->name = VAR_4->iTerminal;
 return 0;
}
