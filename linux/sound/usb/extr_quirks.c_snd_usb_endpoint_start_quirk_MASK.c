
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_endpoint {scalar_t__ type; int skip_packets; int syncmaxsize; int tenor_fb_quirk; TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ usb_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct snd_usb_endpoint *VAR_2)
{




 if (FUNC_1(VAR_2->chip->usb_id) == 0x23ba &&
     VAR_2->type == VAR_1)
  VAR_2->skip_packets = 4;
 if ((VAR_2->chip->usb_id == FUNC_0(0x0763, 0x2030) ||
      VAR_2->chip->usb_id == FUNC_0(0x0763, 0x2031)) &&
     VAR_2->type == VAR_0)
  VAR_2->skip_packets = 16;


 if ((VAR_2->chip->usb_id == FUNC_0(0x0644, 0x8038) ||
      VAR_2->chip->usb_id == FUNC_0(0x1852, 0x5034)) &&
     VAR_2->syncmaxsize == 4)
  VAR_2->tenor_fb_quirk = 1;
}
