
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_info {int status; int alloc_param; int pipe_id; int task_id; } ;
struct TYPE_2__ {int result; } ;
struct snd_sst_alloc_response {TYPE_1__ str_type; } ;
struct intel_sst_drv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct stream_info* FUNC_2 (struct intel_sst_drv*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct intel_sst_drv*,int) ;
 int FUNC_5 (struct intel_sst_drv*,int ,int ,int ,int ,int,int *,void**,int,int,int,int) ;

int FUNC_6(struct intel_sst_drv *VAR_5, int VAR_6)
{
 struct snd_sst_alloc_response *VAR_7;
 struct stream_info *VAR_8;
 void *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(VAR_5->dev, "Alloc for str %d pipe %#x\n",
  VAR_6, VAR_8->pipe_id);

 VAR_10 = FUNC_5(VAR_5, VAR_8->task_id, VAR_1,
   VAR_2, VAR_8->pipe_id,
   sizeof(VAR_8->alloc_param), &VAR_8->alloc_param,
   &VAR_9, 1, 1, 0, 1);

 if (VAR_10 < 0) {
  FUNC_1(VAR_5->dev, "FW alloc failed ret %d\n", VAR_10);

  VAR_8->status = VAR_4;
  VAR_6 = VAR_10;
 } else if (VAR_9) {
  VAR_7 = (struct snd_sst_alloc_response *)VAR_9;
  VAR_10 = VAR_7->str_type.result;
  if (!VAR_10)
   goto out;
  FUNC_1(VAR_5->dev, "FW alloc failed ret %d\n", VAR_10);
  if (VAR_10 == VAR_3) {
   FUNC_1(VAR_5->dev,
    "FW not in clean state, send free for:%d\n", VAR_6);
   FUNC_4(VAR_5, VAR_6);
  }
  VAR_6 = -VAR_10;
 }
out:
 FUNC_3(VAR_9);
 return VAR_6;
}
