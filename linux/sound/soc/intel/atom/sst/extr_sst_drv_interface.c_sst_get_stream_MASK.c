
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_info {int sfreq; } ;
struct snd_sst_params {int dummy; } ;
struct intel_sst_drv {struct stream_info* streams; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* alloc_stream ) (struct intel_sst_drv*,struct snd_sst_params*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_sst_params*) ;
 int FUNC_1 (struct intel_sst_drv*,struct snd_sst_params*) ;

int FUNC_2(struct intel_sst_drv *VAR_1,
   struct snd_sst_params *VAR_2)
{
 int VAR_3;
 struct stream_info *VAR_4;


 VAR_3 = VAR_1->ops->alloc_stream(VAR_1, VAR_2);
 if (VAR_3 <= 0) {
  return -VAR_0;
 }

 VAR_4 = &VAR_1->streams[VAR_3];
 VAR_4->sfreq = FUNC_0(VAR_2);

 return VAR_3;
}
