
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stream_info {scalar_t__ status; int pipe_id; int task_id; } ;
struct intel_sst_drv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct stream_info* FUNC_1 (struct intel_sst_drv*,int) ;
 int FUNC_2 (struct intel_sst_drv*,int ,int ,int ,int ,int,int *,int *,int,int,int,int) ;

int FUNC_3(struct intel_sst_drv *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct stream_info *VAR_8;
 u16 VAR_9 = 0;

 FUNC_0(VAR_5->dev, "sst_start_stream for %d\n", VAR_6);
 VAR_8 = FUNC_1(VAR_5, VAR_6);
 if (!VAR_8)
  return -VAR_1;
 if (VAR_8->status != VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5, VAR_8->task_id,
   VAR_2, VAR_3, VAR_8->pipe_id,
   sizeof(u16), &VAR_9, ((void*)0), 1, 1, 1, 0);

 return VAR_7;
}
