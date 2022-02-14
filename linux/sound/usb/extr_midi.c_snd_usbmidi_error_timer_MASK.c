
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct snd_usb_midi_in_endpoint {TYPE_2__** urbs; scalar_t__ error_resubmit; } ;
struct snd_usb_midi {int disc_lock; TYPE_1__* endpoints; int dev; scalar_t__ disconnected; } ;
struct TYPE_4__ {int dev; int use_count; } ;
struct TYPE_3__ {scalar_t__ out; struct snd_usb_midi_in_endpoint* in; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 struct snd_usb_midi* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct snd_usb_midi* VAR_4 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct snd_usb_midi *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_3);
 unsigned int VAR_7, VAR_8;

 FUNC_4(&VAR_6->disc_lock);
 if (VAR_6->disconnected) {
  FUNC_5(&VAR_6->disc_lock);
  return;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  struct snd_usb_midi_in_endpoint *VAR_9 = VAR_6->endpoints[VAR_7].in;
  if (VAR_9 && VAR_9->error_resubmit) {
   VAR_9->error_resubmit = 0;
   for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
    if (FUNC_0(&VAR_9->urbs[VAR_8]->use_count))
     continue;
    VAR_9->urbs[VAR_8]->dev = VAR_6->dev;
    FUNC_3(VAR_9->urbs[VAR_8], VAR_0);
   }
  }
  if (VAR_6->endpoints[VAR_7].out)
   FUNC_2(VAR_6->endpoints[VAR_7].out);
 }
 FUNC_5(&VAR_6->disc_lock);
}
