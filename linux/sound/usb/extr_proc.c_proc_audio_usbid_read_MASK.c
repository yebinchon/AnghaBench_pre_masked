
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int usb_id; int shutdown; } ;
struct snd_info_entry {struct snd_usb_audio* private_data; } ;
struct snd_info_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_info_buffer*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_0, struct snd_info_buffer *VAR_1)
{
 struct snd_usb_audio *VAR_2 = VAR_0->private_data;
 if (!FUNC_2(&VAR_2->shutdown))
  FUNC_3(VAR_1, "%04x:%04x\n",
       FUNC_1(VAR_2->usb_id),
       FUNC_0(VAR_2->usb_id));
}
