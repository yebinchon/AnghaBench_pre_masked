
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ca_midi {int rx_enable; int (* interrupt_disable ) (struct snd_ca_midi*,int ) ;int (* interrupt_enable ) (struct snd_ca_midi*,int ) ;int dev_id; } ;
struct TYPE_2__ {struct snd_ca_midi* private_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_ca_midi*,int ) ;
 int FUNC_2 (struct snd_ca_midi*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_ca_midi *VAR_2 = VAR_0->rmidi->private_data;

 if (FUNC_0(!VAR_2->dev_id))
  return;

 if (VAR_1) {
  VAR_2->interrupt_enable(VAR_2,VAR_2->rx_enable);
 } else {
  VAR_2->interrupt_disable(VAR_2, VAR_2->rx_enable);
 }
}
