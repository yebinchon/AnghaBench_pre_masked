
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {scalar_t__ status; scalar_t__ prev; int lock; int pipe_id; int task_id; } ;
struct intel_sst_drv {scalar_t__ sst_state; int dev; int sst_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 struct stream_info* FUNC_1 (struct intel_sst_drv*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stream_info*) ;
 int FUNC_5 (struct intel_sst_drv*,int ,int ,int ,int ,int ,int *,int *,int,int,int,int) ;

int FUNC_6(struct intel_sst_drv *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 struct stream_info *VAR_10;

 FUNC_0(VAR_7->dev, "SST DBG:sst_free_stream for %d\n", VAR_8);

 FUNC_2(&VAR_7->sst_lock);
 if (VAR_7->sst_state == VAR_5) {
  FUNC_3(&VAR_7->sst_lock);
  return -VAR_2;
 }
 FUNC_3(&VAR_7->sst_lock);
 VAR_10 = FUNC_1(VAR_7, VAR_8);
 if (!VAR_10)
  return -VAR_1;

 FUNC_2(&VAR_10->lock);
 if (VAR_10->status != VAR_6) {
  VAR_10->prev = VAR_10->status;
  VAR_10->status = VAR_6;
  FUNC_3(&VAR_10->lock);

  FUNC_0(VAR_7->dev, "Free for str %d pipe %#x\n",
    VAR_8, VAR_10->pipe_id);
  VAR_9 = FUNC_5(VAR_7, VAR_10->task_id, VAR_3,
    VAR_4, VAR_10->pipe_id, 0,
    ((void*)0), ((void*)0), 1, 1, 0, 1);

  FUNC_0(VAR_7->dev, "sst: wait for free returned %d\n",
    VAR_9);
  FUNC_2(&VAR_7->sst_lock);
  FUNC_4(VAR_10);
  FUNC_3(&VAR_7->sst_lock);
  FUNC_0(VAR_7->dev, "SST DBG:Stream freed\n");
 } else {
  FUNC_3(&VAR_10->lock);
  VAR_9 = -VAR_0;
  FUNC_0(VAR_7->dev, "SST DBG:BADQRC for stream\n");
 }

 return VAR_9;
}
