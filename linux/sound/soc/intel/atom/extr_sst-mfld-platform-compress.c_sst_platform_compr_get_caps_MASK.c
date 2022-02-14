
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_runtime_stream {TYPE_2__* compr_ops; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct snd_compr_caps {int dummy; } ;
struct TYPE_4__ {int (* get_caps ) (struct snd_compr_caps*) ;} ;
struct TYPE_3__ {struct sst_runtime_stream* private_data; } ;


 int FUNC_0 (struct snd_compr_caps*) ;

__attribute__((used)) static int FUNC_1(struct snd_compr_stream *VAR_0,
     struct snd_compr_caps *VAR_1)
{
 struct sst_runtime_stream *VAR_2 =
  VAR_0->runtime->private_data;

 return VAR_2->compr_ops->get_caps(VAR_1);
}
