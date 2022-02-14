
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int index; unsigned int private_value; void* subdevice; } ;
struct hda_gen_spec {int dummy; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_kcontrol_new* FUNC_0 (struct hda_gen_spec*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_4, int VAR_5,
       unsigned int VAR_6, unsigned int VAR_7)
{
 struct hda_gen_spec *VAR_8 = VAR_4->spec;
 struct snd_kcontrol_new *VAR_9;

 if (VAR_6) {
  VAR_9 = FUNC_0(VAR_8, ((void*)0), &VAR_3);
  if (!VAR_9)
   return -VAR_0;
  VAR_9->index = VAR_5;
  VAR_9->private_value = VAR_6;
  VAR_9->subdevice = VAR_1;
 }
 if (VAR_7) {
  VAR_9 = FUNC_0(VAR_8, ((void*)0), &VAR_2);
  if (!VAR_9)
   return -VAR_0;
  VAR_9->index = VAR_5;
  VAR_9->private_value = VAR_7;
  VAR_9->subdevice = VAR_1;
 }
 return 0;
}
