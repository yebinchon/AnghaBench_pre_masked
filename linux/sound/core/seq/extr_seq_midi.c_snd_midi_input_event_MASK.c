
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int client; } ;
struct TYPE_3__ {int port; } ;
struct snd_seq_event {TYPE_2__ dest; TYPE_1__ source; } ;
struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {scalar_t__ avail; struct seq_midisynth* private_data; } ;
struct seq_midisynth {int seq_client; int seq_port; int * parser; } ;
typedef int ev ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 int FUNC_1 (int *,int ,struct snd_seq_event*) ;
 long FUNC_2 (struct snd_rawmidi_substream*,char*,int) ;
 int FUNC_3 (int ,struct snd_seq_event*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_1)
{
 struct snd_rawmidi_runtime *VAR_2;
 struct seq_midisynth *VAR_3;
 struct snd_seq_event VAR_4;
 char VAR_5[16], *VAR_6;
 long VAR_7;

 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = VAR_1->runtime;
 VAR_3 = VAR_2->private_data;
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 while (VAR_2->avail > 0) {
  VAR_7 = FUNC_2(VAR_1, VAR_5, sizeof(VAR_5));
  if (VAR_7 <= 0)
   continue;
  if (VAR_3->parser == ((void*)0))
   continue;
  VAR_6 = VAR_5;
  while (VAR_7-- > 0) {
   if (!FUNC_1(VAR_3->parser,
       *VAR_6++, &VAR_4))
    continue;
   VAR_4.source.port = VAR_3->seq_port;
   VAR_4.dest.client = VAR_0;
   FUNC_3(VAR_3->seq_client, &VAR_4, 1, 0);

   FUNC_0(&VAR_4, 0, sizeof(VAR_4));
  }
 }
}
