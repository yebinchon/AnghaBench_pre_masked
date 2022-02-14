
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int status; int prev; int pipe_id; int task_id; scalar_t__ cumm_bytes; } ;
struct intel_sst_drv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 struct stream_info* FUNC_1 (struct intel_sst_drv*,int) ;
 int FUNC_2 (struct intel_sst_drv*,int ,int ,int ,int ,int ,int *,int *,int,int,int,int) ;

int FUNC_3(struct intel_sst_drv *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct stream_info *VAR_9;

 FUNC_0(VAR_6->dev, "SST DBG:sst_drop_stream for %d\n", VAR_7);
 VAR_9 = FUNC_1(VAR_6, VAR_7);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_9->status != VAR_5) {
  VAR_9->prev = VAR_5;
  VAR_9->status = VAR_4;
  VAR_9->cumm_bytes = 0;
  VAR_8 = FUNC_2(VAR_6, VAR_9->task_id,
    VAR_2, VAR_3,
    VAR_9->pipe_id, 0, ((void*)0), ((void*)0),
    1, 1, 1, 0);
 } else {
  VAR_8 = -VAR_0;
  FUNC_0(VAR_6->dev, "BADQRC for stream, state %x\n",
    VAR_9->status);
 }
 return VAR_8;
}
