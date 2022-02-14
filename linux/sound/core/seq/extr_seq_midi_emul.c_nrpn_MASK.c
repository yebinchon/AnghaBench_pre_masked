
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_op {int (* nrpn ) (void*,struct snd_midi_channel*,struct snd_midi_channel_set*) ;} ;
struct snd_midi_channel_set {int dummy; } ;
struct snd_midi_channel {int dummy; } ;


 int FUNC_0 (void*,struct snd_midi_channel*,struct snd_midi_channel_set*) ;

__attribute__((used)) static void
FUNC_1(struct snd_midi_op *VAR_0, void *VAR_1, struct snd_midi_channel *VAR_2,
     struct snd_midi_channel_set *VAR_3)
{

 if (VAR_0->nrpn)
  VAR_0->nrpn(VAR_1, VAR_2, VAR_3);
}
