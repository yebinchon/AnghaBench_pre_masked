
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;
 size_t FUNC_3 (unsigned int,int) ;
 char** VAR_1 ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int ,char const*) ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_info *VAR_4)
{
 struct hda_codec *VAR_5 = FUNC_4(VAR_3);
 hda_nid_t VAR_6 = VAR_3->private_value;
 int VAR_7 = FUNC_1(VAR_5, VAR_6);
 int VAR_8 = FUNC_0(VAR_5, VAR_6);
 const char *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_4->type = VAR_0;
 VAR_4->count = 1;
 VAR_4->value.enumerated.items = VAR_7 + VAR_8;
 if (VAR_4->value.enumerated.item >= VAR_4->value.enumerated.items)
  VAR_4->value.enumerated.item = VAR_4->value.enumerated.items - 1;
 VAR_10 = VAR_4->value.enumerated.item;
 if (VAR_10 < VAR_7) {
  if (VAR_7 > 1)
   VAR_9 = VAR_1[VAR_10];
  else
   VAR_9 = "Headphone Out";
 } else {
  VAR_10 -= VAR_7;
  if (VAR_8 > 1) {
   unsigned int VAR_11 = FUNC_2(VAR_5, VAR_6);
   VAR_9 = VAR_2[FUNC_3(VAR_11, VAR_10)];
  } else
   VAR_9 = "Mic In";
 }

 FUNC_5(VAR_4->value.enumerated.name, VAR_9);
 return 0;
}
