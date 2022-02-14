
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi_dev {int port; int client; int seq_mode; } ;
struct snd_virmidi {int output_work; struct snd_virmidi_dev* rdev; int event; int port; int client; int seq_mode; int parser; struct snd_rawmidi_substream* substream; } ;
struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; TYPE_1__* rmidi; } ;
struct snd_rawmidi_runtime {struct snd_virmidi* private_data; } ;
struct TYPE_2__ {struct snd_virmidi_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_virmidi*) ;
 struct snd_virmidi* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct snd_virmidi*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_substream *VAR_4)
{
 struct snd_virmidi_dev *VAR_5 = VAR_4->rmidi->private_data;
 struct snd_rawmidi_runtime *VAR_6 = VAR_4->runtime;
 struct snd_virmidi *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_7->substream = VAR_4;
 if (FUNC_3(VAR_2, &VAR_7->parser) < 0) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }
 VAR_7->seq_mode = VAR_5->seq_mode;
 VAR_7->client = VAR_5->client;
 VAR_7->port = VAR_5->port;
 FUNC_4(VAR_7, &VAR_7->event);
 VAR_7->rdev = VAR_5;
 FUNC_0(&VAR_7->output_work, VAR_3);
 VAR_6->private_data = VAR_7;
 return 0;
}
