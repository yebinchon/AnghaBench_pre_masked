
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {struct snd_emux* driver_data; } ;
struct snd_emux {struct snd_emu10k1* hw; } ;
struct snd_emu10k1 {int voice_lock; int * get_synth_voice; int * synth; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct snd_emux*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct snd_seq_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct snd_seq_device *VAR_1 = FUNC_3(VAR_0);
 struct snd_emux *VAR_2;
 struct snd_emu10k1 *VAR_3;
 unsigned long VAR_4;

 if (VAR_1->driver_data == ((void*)0))
  return 0;

 VAR_2 = VAR_1->driver_data;

 VAR_3 = VAR_2->hw;
 FUNC_1(&VAR_3->voice_lock, VAR_4);
 VAR_3->synth = ((void*)0);
 VAR_3->get_synth_voice = ((void*)0);
 FUNC_2(&VAR_3->voice_lock, VAR_4);

 FUNC_0(VAR_2);
 return 0;
}
