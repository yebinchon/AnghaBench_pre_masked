
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int str_id; } ;
struct sst_runtime_stream {TYPE_3__ stream_info; TYPE_1__* ops; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_5__* runtime; TYPE_2__* pcm; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {int info; } ;
struct TYPE_11__ {TYPE_4__ hw; struct sst_runtime_stream* private_data; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int (* stream_drop ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct sst_runtime_stream *VAR_4;
 int VAR_5 = 0, VAR_6;

 VAR_4 = VAR_2->runtime->private_data;
 VAR_6 = VAR_4->stream_info.str_id;
 if (VAR_4->stream_info.str_id) {
  VAR_5 = VAR_4->ops->stream_drop(VAR_1->dev, VAR_6);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 <= 0)
  return VAR_5;
 FUNC_0(VAR_2->pcm->id, sizeof(VAR_2->pcm->id),
   "%d", VAR_4->stream_info.str_id);

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;
 VAR_2->runtime->hw.info = VAR_0;
 return VAR_5;
}
