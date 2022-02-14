
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct snd_usb_audio_quirk {int dummy; } ;
struct snd_card {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct snd_card*,struct usb_interface*,struct list_head*,struct snd_usb_audio_quirk const*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct snd_card *VAR_0,
         struct usb_interface *VAR_1,
         struct list_head *VAR_2,
         const struct snd_usb_audio_quirk *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
}
