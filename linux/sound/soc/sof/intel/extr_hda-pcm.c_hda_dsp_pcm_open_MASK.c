
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dev; } ;
struct snd_pcm_substream {int stream; TYPE_1__* runtime; } ;
struct hdac_ext_stream {int hstream; } ;
struct TYPE_2__ {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct hdac_ext_stream* FUNC_1 (struct snd_sof_dev*,int) ;

int FUNC_2(struct snd_sof_dev *VAR_1,
       struct snd_pcm_substream *VAR_2)
{
 struct hdac_ext_stream *VAR_3;
 int VAR_4 = VAR_2->stream;

 VAR_3 = FUNC_1(VAR_1, VAR_4);

 if (!VAR_3) {
  FUNC_0(VAR_1->dev, "error: no stream available\n");
  return -VAR_0;
 }


 VAR_2->runtime->private_data = &VAR_3->hstream;
 return 0;
}
