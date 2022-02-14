
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi {int trigger; } ;
struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_virmidi* private_data; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_virmidi *VAR_2 = VAR_0->runtime->private_data;

 FUNC_0(VAR_2->trigger, !!VAR_1);
}
