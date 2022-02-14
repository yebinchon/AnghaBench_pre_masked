
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int name; void* chconfig; int channels; void* type; } ;
struct uac_input_terminal_descriptor {int iTerminal; int wChannelConfig; int bNrChannels; int wTerminalType; } ;
struct mixer_build {int dummy; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mixer_build *VAR_0,
          struct usb_audio_term *VAR_1,
          void *VAR_2, int VAR_3)
{
 struct uac_input_terminal_descriptor *VAR_4 = VAR_2;

 VAR_1->type = FUNC_0(VAR_4->wTerminalType);
 VAR_1->channels = VAR_4->bNrChannels;
 VAR_1->chconfig = FUNC_0(VAR_4->wChannelConfig);
 VAR_1->name = VAR_4->iTerminal;
 return 0;
}
