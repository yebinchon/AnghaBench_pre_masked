
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sst_runtime_stream {int id; TYPE_2__* compr_ops; } ;
struct snd_compr_tstamp {int byte_offset; int copied_total; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* tstamp ) (int ,int ,struct snd_compr_tstamp*) ;} ;
struct TYPE_4__ {scalar_t__ buffer_size; struct sst_runtime_stream* private_data; } ;


 int FUNC_0 (char*,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int ,struct snd_compr_tstamp*) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_1,
     struct snd_compr_tstamp *VAR_2)
{
 struct sst_runtime_stream *VAR_3;

 VAR_3 = VAR_1->runtime->private_data;
 VAR_3->compr_ops->tstamp(VAR_0->dev, VAR_3->id, VAR_2);
 VAR_2->byte_offset = VAR_2->copied_total %
     (u32)VAR_1->runtime->buffer_size;
 FUNC_0("calc bytes offset/copied bytes as %d\n", VAR_2->byte_offset);
 return 0;
}
