
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct snd_pcm_substream* arg; scalar_t__ str_id; } ;
struct sst_runtime_stream {TYPE_3__ stream_info; int ops; int status_lock; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct sst_runtime_stream* private_data; } ;
struct TYPE_8__ {int ops; TYPE_2__* dev; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sst_runtime_stream*) ;
 struct sst_runtime_stream* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sst_runtime_stream*) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_8 (int *) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_6,
  struct snd_soc_dai *VAR_7)
{
 int VAR_8 = 0;
 struct snd_pcm_runtime *VAR_9 = VAR_6->runtime;
 struct sst_runtime_stream *VAR_10;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_8(&VAR_10->status_lock);


 FUNC_3(&VAR_5);
 if (!VAR_4 ||
     !FUNC_9(VAR_4->dev->driver->owner)) {
  FUNC_0(VAR_7->dev, "no device available to run\n");
  VAR_8 = -VAR_0;
  goto out_ops;
 }
 VAR_10->ops = VAR_4->ops;
 FUNC_4(&VAR_5);

 VAR_10->stream_info.str_id = 0;

 VAR_10->stream_info.arg = VAR_6;

 VAR_9->private_data = VAR_10;

 VAR_8 = FUNC_5(VAR_10);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_7(VAR_6->runtime, 0,
      VAR_3, 2);

 return FUNC_6(VAR_9,
    VAR_3);
out_ops:
 FUNC_1(VAR_10);
 FUNC_4(&VAR_5);
 return VAR_8;
}
