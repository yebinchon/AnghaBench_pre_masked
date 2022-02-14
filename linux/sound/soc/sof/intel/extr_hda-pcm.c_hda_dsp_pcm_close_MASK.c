
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dev; } ;
struct snd_pcm_substream {int stream; TYPE_1__* runtime; int name; } ;
struct hdac_stream {int stream_tag; } ;
struct TYPE_2__ {struct hdac_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct snd_sof_dev*,int,int ) ;

int FUNC_2(struct snd_sof_dev *VAR_1,
        struct snd_pcm_substream *VAR_2)
{
 struct hdac_stream *VAR_3 = VAR_2->runtime->private_data;
 int VAR_4 = VAR_2->stream;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_3->stream_tag);

 if (VAR_5) {
  FUNC_0(VAR_1->dev, "stream %s not opened!\n", VAR_2->name);
  return -VAR_0;
 }


 VAR_2->runtime->private_data = ((void*)0);
 return 0;
}
