
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6_pod {int monitor_level; } ;
struct snd_line6_pcm {int line6; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct usb_line6_pod* FUNC_0 (int ) ;
 struct snd_line6_pcm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_value *VAR_1)
{
 struct snd_line6_pcm *VAR_2 = FUNC_1(VAR_0);
 struct usb_line6_pod *VAR_3 = FUNC_0(VAR_2->line6);

 VAR_1->value.integer.value[0] = VAR_3->monitor_level;
 return 0;
}
