
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dev; } ;
struct snd_usb_midi_in_endpoint {TYPE_1__* umidi; struct urb** urbs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_in_endpoint *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_2)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  struct urb *VAR_4 = VAR_2->urbs[VAR_3];
  VAR_4->dev = VAR_2->umidi->dev;
  FUNC_0(VAR_4, VAR_0);
 }
}
