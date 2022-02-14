
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_audio {int ctrl_intf; } ;
struct TYPE_2__ {int bInterfaceNumber; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct snd_usb_audio *VAR_0)
{
 return FUNC_0(VAR_0->ctrl_intf)->bInterfaceNumber;
}
