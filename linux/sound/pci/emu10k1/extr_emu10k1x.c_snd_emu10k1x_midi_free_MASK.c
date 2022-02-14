
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {struct emu10k1x_midi* private_data; } ;
struct emu10k1x_midi {int * rmidi; int * interrupt; } ;



__attribute__((used)) static void FUNC_0(struct snd_rawmidi *VAR_0)
{
 struct emu10k1x_midi *VAR_1 = VAR_0->private_data;
 VAR_1->interrupt = ((void*)0);
 VAR_1->rmidi = ((void*)0);
}
