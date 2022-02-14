
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int usbdev; } ;
struct usb_line6_toneport {unsigned int source; TYPE_1__ line6; } ;
struct snd_line6_pcm {int line6; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_7__ {unsigned int* item; } ;
struct TYPE_8__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_9__ {int code; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 struct usb_line6_toneport* FUNC_1 (int ) ;
 struct snd_line6_pcm* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct snd_line6_pcm *VAR_4 = FUNC_2(VAR_2);
 struct usb_line6_toneport *VAR_5 = FUNC_1(VAR_4->line6);
 unsigned int VAR_6;

 VAR_6 = VAR_3->value.enumerated.item[0];
 if (VAR_6 >= FUNC_0(VAR_1))
  return -VAR_0;
 if (VAR_6 == VAR_5->source)
  return 0;

 VAR_5->source = VAR_6;
 FUNC_3(VAR_5->line6.usbdev,
     VAR_1[VAR_6].code, 0x0000);
 return 1;
}
