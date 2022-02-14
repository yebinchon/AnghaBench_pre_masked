
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct hdac_stream {int dummy; } ;
struct hdac_ext_stream {int dummy; } ;
struct TYPE_2__ {struct hdac_stream* private_data; } ;


 int FUNC_0 (struct snd_sof_dev*,struct hdac_ext_stream*,int) ;
 struct hdac_ext_stream* FUNC_1 (struct hdac_stream*) ;

int FUNC_2(struct snd_sof_dev *VAR_0,
   struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct hdac_stream *VAR_3 = VAR_1->runtime->private_data;
 struct hdac_ext_stream *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_0, VAR_4, VAR_2);
}
