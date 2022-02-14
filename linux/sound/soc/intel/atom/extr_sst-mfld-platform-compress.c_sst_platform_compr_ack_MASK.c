
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_runtime_stream {size_t bytes_written; int id; TYPE_2__* compr_ops; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* ack ) (int ,int ,unsigned long) ;} ;
struct TYPE_4__ {struct sst_runtime_stream* private_data; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct snd_compr_stream *VAR_1,
     size_t VAR_2)
{
 struct sst_runtime_stream *VAR_3;

 VAR_3 = VAR_1->runtime->private_data;
 VAR_3->compr_ops->ack(VAR_0->dev, VAR_3->id, (unsigned long)VAR_2);
 VAR_3->bytes_written += VAR_2;

 return 0;
}
