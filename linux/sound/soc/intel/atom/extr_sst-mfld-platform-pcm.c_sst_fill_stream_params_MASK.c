
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct sst_dev_stream_map {int task_id; int device_id; } ;
struct sst_data {TYPE_1__* pdata; } ;
struct snd_sst_params {int stream_id; void* ops; int task; int device_type; int stream_type; } ;
struct snd_pcm_substream {scalar_t__ stream; int number; TYPE_2__* pcm; } ;
struct snd_compr_stream {scalar_t__ direction; TYPE_3__* device; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {int strm_map_size; struct sst_dev_stream_map* pdev_strm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,struct sst_dev_stream_map*,int) ;

int FUNC_1(void *VAR_2,
 const struct sst_data *VAR_3, struct snd_sst_params *VAR_4, bool VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct sst_dev_stream_map *VAR_8;
 struct snd_pcm_substream *VAR_9 = ((void*)0);
 struct snd_compr_stream *VAR_10 = ((void*)0);

 VAR_8 = VAR_3->pdata->pdev_strm_map;
 VAR_6 = VAR_3->pdata->strm_map_size;

 if (VAR_5)
  VAR_10 = (struct snd_compr_stream *)VAR_2;
 else
  VAR_9 = (struct snd_pcm_substream *)VAR_2;

 VAR_4->stream_type = VAR_1;


 if (VAR_9) {
  VAR_7 = FUNC_0(VAR_9->pcm->device,
       VAR_9->number, VAR_9->stream,
       VAR_8, VAR_6);
  if (VAR_7 <= 0)
   return -VAR_0;

  VAR_4->stream_id = VAR_7;
  VAR_4->device_type = VAR_8[VAR_7].device_id;
  VAR_4->task = VAR_8[VAR_7].task_id;

  VAR_4->ops = (u8)VAR_9->stream;
 }

 if (VAR_10) {
  VAR_7 = FUNC_0(VAR_10->device->device,
            0, VAR_10->direction,
            VAR_8, VAR_6);
  if (VAR_7 <= 0)
   return -VAR_0;
  VAR_4->stream_id = VAR_7;
  VAR_4->device_type = VAR_8[VAR_7].device_id;
  VAR_4->task = VAR_8[VAR_7].task_id;

  VAR_4->ops = (u8)VAR_10->direction;
 }
 return 0;
}
