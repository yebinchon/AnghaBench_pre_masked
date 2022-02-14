
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi_dev {int filelist_sem; int filelist_lock; int filelist; int port; int client; int seq_mode; } ;
struct snd_virmidi {struct snd_virmidi_dev* rdev; int list; int port; int client; int seq_mode; int parser; struct snd_rawmidi_substream* substream; } ;
struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; TYPE_1__* rmidi; } ;
struct snd_rawmidi_runtime {struct snd_virmidi* private_data; } ;
struct TYPE_2__ {struct snd_virmidi_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_virmidi*) ;
 struct snd_virmidi* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_rawmidi_substream *VAR_2)
{
 struct snd_virmidi_dev *VAR_3 = VAR_2->rmidi->private_data;
 struct snd_rawmidi_runtime *VAR_4 = VAR_2->runtime;
 struct snd_virmidi *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_5->substream = VAR_2;
 if (FUNC_4(0, &VAR_5->parser) < 0) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }
 VAR_5->seq_mode = VAR_3->seq_mode;
 VAR_5->client = VAR_3->client;
 VAR_5->port = VAR_3->port;
 VAR_4->private_data = VAR_5;
 FUNC_0(&VAR_3->filelist_sem);
 FUNC_6(&VAR_3->filelist_lock);
 FUNC_3(&VAR_5->list, &VAR_3->filelist);
 FUNC_7(&VAR_3->filelist_lock);
 FUNC_5(&VAR_3->filelist_sem);
 VAR_5->rdev = VAR_3;
 return 0;
}
