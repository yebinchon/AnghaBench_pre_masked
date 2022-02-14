
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {int port; int client; int seq_mode; } ;
struct snd_rawmidi {int name; struct snd_virmidi_dev* private_data; } ;
struct snd_emux {int midi_ports; char* name; struct snd_rawmidi** vmidi; int * ports; int client; scalar_t__ midi_devidx; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_rawmidi** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct snd_card*,struct snd_rawmidi*) ;
 scalar_t__ FUNC_2 (struct snd_card*,struct snd_rawmidi*) ;
 int FUNC_3 (struct snd_emux*) ;
 scalar_t__ FUNC_4 (struct snd_card*,scalar_t__,struct snd_rawmidi**) ;
 int FUNC_5 (int ,char*,char*) ;

int FUNC_6(struct snd_emux *VAR_3, struct snd_card *VAR_4)
{
 int VAR_5;

 VAR_3->vmidi = ((void*)0);
 if (VAR_3->midi_ports <= 0)
  return 0;

 VAR_3->vmidi = FUNC_0(VAR_3->midi_ports, sizeof(*VAR_3->vmidi), VAR_1);
 if (!VAR_3->vmidi)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->midi_ports; VAR_5++) {
  struct snd_rawmidi *VAR_6;
  struct snd_virmidi_dev *VAR_7;
  if (FUNC_4(VAR_4, VAR_3->midi_devidx + VAR_5, &VAR_6) < 0)
   goto __error;
  VAR_7 = VAR_6->private_data;
  FUNC_5(VAR_6->name, "%s Synth MIDI", VAR_3->name);
  VAR_7->seq_mode = VAR_2;
  VAR_7->client = VAR_3->client;
  VAR_7->port = VAR_3->ports[VAR_5];
  if (FUNC_2(VAR_4, VAR_6) < 0) {
   FUNC_1(VAR_4, VAR_6);
   goto __error;
  }
  VAR_3->vmidi[VAR_5] = VAR_6;

 }
 return 0;

__error:

 FUNC_3(VAR_3);
 return -VAR_0;
}
