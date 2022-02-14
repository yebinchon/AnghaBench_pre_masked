
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_elem_list {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct usb_mixer_elem_info {size_t val_type; int dBmax; int dBmin; int max; int min; int channels; int cmask; int control; TYPE_1__ head; } ;
struct snd_info_buffer {int dummy; } ;


 struct usb_mixer_elem_info* FUNC_0 (struct usb_mixer_elem_list*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int ,int ,int ,int ,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_0,
        struct usb_mixer_elem_list *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = FUNC_0(VAR_1);
 static char *VAR_3[] = {"BOOLEAN", "INV_BOOLEAN",
        "S8", "U8", "S16", "U16"};
 FUNC_1(VAR_0, "    Info: id=%i, control=%i, cmask=0x%x, "
       "channels=%i, type=\"%s\"\n", VAR_2->head.id,
       VAR_2->control, VAR_2->cmask, VAR_2->channels,
       VAR_3[VAR_2->val_type]);
 FUNC_1(VAR_0, "    Volume: min=%i, max=%i, dBmin=%i, dBmax=%i\n",
       VAR_2->min, VAR_2->max, VAR_2->dBmin, VAR_2->dBmax);
}
