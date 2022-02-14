
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_runtime_stream {scalar_t__ id; TYPE_2__* compr_ops; int status_lock; } ;
struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sst_runtime_stream* private_data; } ;
struct TYPE_8__ {TYPE_3__* dev; TYPE_2__* compr_ops; } ;
struct TYPE_7__ {TYPE_1__* driver; } ;
struct TYPE_6__ {int (* power ) (TYPE_3__*,int) ;} ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sst_runtime_stream*) ;
 struct sst_runtime_stream* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (struct sst_runtime_stream*,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_compr_stream *VAR_5)
{

 int VAR_6 = 0;
 struct snd_compr_runtime *VAR_7 = VAR_5->runtime;
 struct sst_runtime_stream *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_3(&VAR_8->status_lock);


 if (!VAR_4 || !FUNC_6(VAR_4->dev->driver->owner)) {
  FUNC_2("no device available to run\n");
  VAR_6 = -VAR_0;
  goto out_ops;
 }
 VAR_8->compr_ops = VAR_4->compr_ops;
 VAR_8->id = 0;


 VAR_4->compr_ops->power(VAR_4->dev, 1);

 FUNC_4(VAR_8, VAR_3);
 VAR_7->private_data = VAR_8;
 return 0;
out_ops:
 FUNC_0(VAR_8);
 return VAR_6;
}
