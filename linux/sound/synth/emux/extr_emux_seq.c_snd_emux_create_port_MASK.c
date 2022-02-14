
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_port_callback {struct snd_emux_port* private_data; int private_free; } ;
struct TYPE_3__ {int max_channels; int port; int client; struct snd_emux_port* private_data; TYPE_2__* channels; } ;
struct snd_emux_port {TYPE_1__ chset; struct snd_emux* emu; } ;
struct snd_emux {int max_voices; int client; } ;
struct TYPE_4__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct snd_emux_port*) ;
 struct snd_emux_port* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_emux_port*) ;
 int FUNC_4 (int ,struct snd_seq_port_callback*,int,int,int,int ,char*) ;

struct snd_emux_port *
FUNC_5(struct snd_emux *VAR_6, char *VAR_7,
       int VAR_8, int VAR_9,
       struct snd_seq_port_callback *VAR_10)
{
 struct snd_emux_port *VAR_11;
 int VAR_12, VAR_13, VAR_14;


 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->chset.channels = FUNC_0(VAR_8, sizeof(*VAR_11->chset.channels),
        VAR_1);
 if (!VAR_11->chset.channels) {
  FUNC_1(VAR_11);
  return ((void*)0);
 }
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_11->chset.channels[VAR_12].number = VAR_12;
 VAR_11->chset.private_data = VAR_11;
 VAR_11->chset.max_channels = VAR_8;
 VAR_11->emu = VAR_6;
 VAR_11->chset.client = VAR_6->client;



 VAR_10->private_free = VAR_5;
 VAR_10->private_data = VAR_11;

 VAR_14 = VAR_3;
 if (VAR_9) {
  VAR_13 = VAR_4;
 } else {
  VAR_13 = VAR_0;
  VAR_14 |= VAR_2;
 }

 VAR_11->chset.port = FUNC_4(VAR_6->client, VAR_10,
        VAR_14, VAR_13, VAR_8,
        VAR_6->max_voices, VAR_7);

 return VAR_11;
}
