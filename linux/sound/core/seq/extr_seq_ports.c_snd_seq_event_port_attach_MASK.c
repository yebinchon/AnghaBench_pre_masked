
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; int port; } ;
struct snd_seq_port_info {int capability; int type; int midi_channels; int midi_voices; TYPE_1__ addr; struct snd_seq_port_callback* kernel; int name; } ;
struct snd_seq_port_callback {int dummy; } ;
typedef int portinfo ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_port_info*,int ,int) ;
 int FUNC_1 (int,int ,struct snd_seq_port_info*) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(int VAR_1,
         struct snd_seq_port_callback *VAR_2,
         int VAR_3, int VAR_4, int VAR_5,
         int VAR_6, char *VAR_7)
{
 struct snd_seq_port_info VAR_8;
 int VAR_9;


 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.addr.client = VAR_1;
 FUNC_2(VAR_8.name, VAR_7 ? VAR_7 : "Unnamed port",
  sizeof(VAR_8.name));

 VAR_8.capability = VAR_3;
 VAR_8.type = VAR_4;
 VAR_8.kernel = VAR_2;
 VAR_8.midi_channels = VAR_5;
 VAR_8.midi_voices = VAR_6;


 VAR_9 = FUNC_1(VAR_1,
     VAR_0,
     &VAR_8);

 if (VAR_9 >= 0)
  VAR_9 = VAR_8.addr.port;

 return VAR_9;
}
