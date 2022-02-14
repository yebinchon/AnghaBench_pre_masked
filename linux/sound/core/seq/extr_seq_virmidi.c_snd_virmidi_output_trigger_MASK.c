
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi {int output_work; int trigger; } ;
struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_virmidi* private_data; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct snd_virmidi *VAR_3 = VAR_1->runtime->private_data;

 FUNC_0(VAR_3->trigger, !!VAR_2);
 if (VAR_2)
  FUNC_1(VAR_0, &VAR_3->output_work);
}
