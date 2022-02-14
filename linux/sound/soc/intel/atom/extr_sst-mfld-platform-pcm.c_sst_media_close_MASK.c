
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


struct TYPE_8__ {int str_id; } ;
struct sst_runtime_stream {TYPE_3__* ops; TYPE_2__ stream_info; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_12__ {TYPE_5__* dev; } ;
struct TYPE_11__ {TYPE_4__* driver; } ;
struct TYPE_10__ {int owner; } ;
struct TYPE_9__ {int (* close ) (TYPE_5__*,int) ;} ;
struct TYPE_7__ {struct sst_runtime_stream* private_data; } ;


 int FUNC_0 (struct sst_runtime_stream*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sst_runtime_stream*) ;
 TYPE_6__* VAR_0 ;
 int FUNC_3 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_1,
  struct snd_soc_dai *VAR_2)
{
 struct sst_runtime_stream *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->runtime->private_data;
 FUNC_2(VAR_3);

 VAR_4 = VAR_3->stream_info.str_id;
 if (VAR_4)
  VAR_3->ops->close(VAR_0->dev, VAR_4);
 FUNC_1(VAR_0->dev->driver->owner);
 FUNC_0(VAR_3);
}
