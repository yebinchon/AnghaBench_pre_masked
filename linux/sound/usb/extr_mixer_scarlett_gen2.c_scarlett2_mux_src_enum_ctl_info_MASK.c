
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int channels; TYPE_2__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_9__ {unsigned int item; int items; int name; } ;
struct TYPE_10__ {TYPE_4__ enumerated; } ;
struct snd_ctl_elem_info {TYPE_5__ value; int count; int type; } ;
struct scarlett2_ports {unsigned int* num; char* src_descr; scalar_t__ src_num_offset; } ;
struct scarlett2_mixer_data {int num_mux_srcs; TYPE_3__* info; } ;
struct TYPE_8__ {struct scarlett2_ports* ports; } ;
struct TYPE_6__ {struct scarlett2_mixer_data* private_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_4,
        struct snd_ctl_elem_info *VAR_5)
{
 struct usb_mixer_elem_info *VAR_6 = VAR_4->private_data;
 struct scarlett2_mixer_data *VAR_7 = VAR_6->head.mixer->private_data;
 const struct scarlett2_ports *VAR_8 = VAR_7->info->ports;
 unsigned int VAR_9 = VAR_5->value.enumerated.item;
 int VAR_10 = VAR_7->num_mux_srcs;
 int VAR_11;

 VAR_5->type = VAR_3;
 VAR_5->count = VAR_6->channels;
 VAR_5->value.enumerated.items = VAR_10;

 if (VAR_9 >= VAR_10)
  VAR_9 = VAR_5->value.enumerated.item = VAR_10 - 1;

 for (VAR_11 = 0;
      VAR_11 < VAR_2;
      VAR_11++) {
  if (VAR_9 < VAR_8[VAR_11].num[VAR_1]) {
   FUNC_0(VAR_5->value.enumerated.name,
    VAR_8[VAR_11].src_descr,
    VAR_9 + VAR_8[VAR_11].src_num_offset);
   return 0;
  }
  VAR_9 -= VAR_8[VAR_11].num[VAR_1];
 }

 return -VAR_0;
}
