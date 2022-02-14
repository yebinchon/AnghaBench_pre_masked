
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int str_id; struct snd_pcm_substream* arg; } ;
struct sst_runtime_stream {TYPE_4__* ops; TYPE_3__ stream_info; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {TYPE_2__* runtime; TYPE_1__* pcm; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int (* stream_start ) (int ,int) ;int (* stream_drop ) (int ,int) ;int (* stream_pause ) (int ,int) ;int (* stream_pause_release ) (int ,int) ;} ;
struct TYPE_7__ {struct sst_runtime_stream* private_data; } ;
struct TYPE_6__ {scalar_t__ internal; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (struct sst_runtime_stream*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5,
     int VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct sst_runtime_stream *VAR_9;
 int VAR_10;
 struct snd_soc_pcm_runtime *VAR_11 = VAR_5->private_data;

 FUNC_0(VAR_11->dev, "sst_platform_pcm_trigger called\n");
 if (VAR_5->pcm->internal)
  return 0;
 VAR_9 = VAR_5->runtime->private_data;
 VAR_8 = VAR_9->stream_info.str_id;
 switch (VAR_6) {
 case 130:
  FUNC_0(VAR_11->dev, "sst: Trigger Start\n");
  VAR_10 = VAR_3;
  VAR_9->stream_info.arg = VAR_5;
  VAR_7 = VAR_9->ops->stream_start(VAR_4->dev, VAR_8);
  break;
 case 129:
  FUNC_0(VAR_11->dev, "sst: in stop\n");
  VAR_10 = VAR_1;
  VAR_7 = VAR_9->ops->stream_drop(VAR_4->dev, VAR_8);
  break;
 case 133:
 case 128:
  FUNC_0(VAR_11->dev, "sst: in pause\n");
  VAR_10 = VAR_2;
  VAR_7 = VAR_9->ops->stream_pause(VAR_4->dev, VAR_8);
  break;
 case 132:
 case 131:
  FUNC_0(VAR_11->dev, "sst: in pause release\n");
  VAR_10 = VAR_3;
  VAR_7 = VAR_9->ops->stream_pause_release(VAR_4->dev, VAR_8);
  break;
 default:
  return -VAR_0;
 }

 if (!VAR_7)
  FUNC_1(VAR_9, VAR_10);

 return VAR_7;
}
