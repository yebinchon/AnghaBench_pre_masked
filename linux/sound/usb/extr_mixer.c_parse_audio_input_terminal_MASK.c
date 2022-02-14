
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_audio_term {int dummy; } ;
struct uac3_input_terminal_descriptor {unsigned int bTerminalID; int bmControls; } ;
struct uac2_input_terminal_descriptor {unsigned int bTerminalID; int bmControls; } ;
struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct usb_audio_term*,int) ;
 int FUNC_1 (struct mixer_build*,unsigned int,struct usb_audio_term*) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct mixer_build *VAR_4, int VAR_5,
          void *VAR_6)
{
 struct usb_audio_term VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;

 if (VAR_4->mixer->protocol == VAR_2) {
  struct uac2_input_terminal_descriptor *VAR_11 = VAR_6;
  VAR_8 = VAR_0;
  VAR_10 = VAR_11->bTerminalID;
  VAR_9 = FUNC_2(VAR_11->bmControls);
 } else if (VAR_4->mixer->protocol == VAR_3) {
  struct uac3_input_terminal_descriptor *VAR_12 = VAR_6;
  VAR_8 = VAR_1;
  VAR_10 = VAR_12->bTerminalID;
  VAR_9 = FUNC_3(VAR_12->bmControls);
 } else {
  return 0;
 }

 FUNC_1(VAR_4, VAR_10, &VAR_7);


 if (FUNC_4(VAR_9, VAR_8))
  FUNC_0(VAR_4->mixer, &VAR_7, 1);

 return 0;
}
