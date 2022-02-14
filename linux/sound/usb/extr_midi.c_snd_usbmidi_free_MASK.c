
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_midi_endpoint {scalar_t__ in; scalar_t__ out; } ;
struct snd_usb_midi {int mutex; struct snd_usb_midi_endpoint* endpoints; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_usb_midi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_midi *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct snd_usb_midi_endpoint *VAR_3 = &VAR_1->endpoints[VAR_2];
  if (VAR_3->out)
   FUNC_3(VAR_3->out);
  if (VAR_3->in)
   FUNC_2(VAR_3->in);
 }
 FUNC_1(&VAR_1->mutex);
 FUNC_0(VAR_1);
}
