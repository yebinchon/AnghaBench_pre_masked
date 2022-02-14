
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_runtime_stream {int id; TYPE_2__* compr_ops; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* stream_start ) (int ,int ) ;int (* stream_drop ) (int ,int ) ;int (* stream_drain ) (int ,int ) ;int (* stream_partial_drain ) (int ,int ) ;int (* stream_pause ) (int ,int ) ;int (* stream_pause_release ) (int ,int ) ;} ;
struct TYPE_4__ {struct sst_runtime_stream* private_data; } ;


 int VAR_0 ;






 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_compr_stream *VAR_2, int VAR_3)
{
 struct sst_runtime_stream *VAR_4 = VAR_2->runtime->private_data;

 switch (VAR_3) {
 case 131:
  if (VAR_4->compr_ops->stream_start)
   return VAR_4->compr_ops->stream_start(VAR_1->dev, VAR_4->id);
  break;
 case 130:
  if (VAR_4->compr_ops->stream_drop)
   return VAR_4->compr_ops->stream_drop(VAR_1->dev, VAR_4->id);
  break;
 case 129:
  if (VAR_4->compr_ops->stream_drain)
   return VAR_4->compr_ops->stream_drain(VAR_1->dev, VAR_4->id);
  break;
 case 128:
  if (VAR_4->compr_ops->stream_partial_drain)
   return VAR_4->compr_ops->stream_partial_drain(VAR_1->dev, VAR_4->id);
  break;
 case 133:
  if (VAR_4->compr_ops->stream_pause)
   return VAR_4->compr_ops->stream_pause(VAR_1->dev, VAR_4->id);
  break;
 case 132:
  if (VAR_4->compr_ops->stream_pause_release)
   return VAR_4->compr_ops->stream_pause_release(VAR_1->dev, VAR_4->id);
  break;
 }
 return -VAR_0;
}
