
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_port_info {int flags; int time_queue; int synth_voices; int midi_voices; int midi_channels; int type; int capability; scalar_t__* name; } ;
struct snd_seq_client_port {int timestamping; int time_real; int time_queue; int synth_voices; int midi_voices; int midi_channels; int type; int capability; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*,int) ;

int FUNC_2(struct snd_seq_client_port * VAR_3,
     struct snd_seq_port_info * VAR_4)
{
 if (FUNC_0(!VAR_3 || !VAR_4))
  return -VAR_0;


 if (VAR_4->name[0])
  FUNC_1(VAR_3->name, VAR_4->name, sizeof(VAR_3->name));


 VAR_3->capability = VAR_4->capability;


 VAR_3->type = VAR_4->type;


 VAR_3->midi_channels = VAR_4->midi_channels;
 VAR_3->midi_voices = VAR_4->midi_voices;
 VAR_3->synth_voices = VAR_4->synth_voices;


 VAR_3->timestamping = (VAR_4->flags & VAR_1) ? 1 : 0;
 VAR_3->time_real = (VAR_4->flags & VAR_2) ? 1 : 0;
 VAR_3->time_queue = VAR_4->time_queue;

 return 0;
}
