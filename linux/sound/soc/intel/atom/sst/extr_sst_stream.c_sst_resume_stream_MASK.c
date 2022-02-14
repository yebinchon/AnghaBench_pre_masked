
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {scalar_t__ status; scalar_t__ resume_status; scalar_t__ resume_prev; scalar_t__ prev; int pipe_id; int task_id; } ;
struct intel_sst_drv {int dev; int sst_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 struct stream_info* FUNC_2 (struct intel_sst_drv*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stream_info*) ;
 int FUNC_6 (struct intel_sst_drv*,int ,int ,int ,int ,int ,int *,int *,int,int,int,int) ;
 int FUNC_7 (struct intel_sst_drv*,int) ;

int FUNC_8(struct intel_sst_drv *VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 struct stream_info *VAR_12;

 FUNC_0(VAR_9->dev, "SST DBG:sst_resume_stream for %d\n", VAR_10);
 VAR_12 = FUNC_2(VAR_9, VAR_10);
 if (!VAR_12)
  return -VAR_1;
 if (VAR_12->status == VAR_7)
  return 0;

 if (VAR_12->resume_status == VAR_6 &&
     VAR_12->resume_prev == VAR_7) {




  FUNC_0(VAR_9->dev, "restart recreated stream after resume\n");
  VAR_12->status = VAR_7;
  VAR_12->prev = VAR_6;
  VAR_11 = FUNC_7(VAR_9, VAR_10);
  VAR_12->resume_status = VAR_8;
 } else if (VAR_12->resume_status == VAR_6 &&
     VAR_12->resume_prev == VAR_5) {




  FUNC_0(VAR_9->dev, "leaving recreated stream idle after resume\n");
  VAR_12->status = VAR_5;
  VAR_12->prev = VAR_6;
  VAR_12->resume_status = VAR_8;
 } else if (VAR_12->status == VAR_6) {
  VAR_11 = FUNC_6(VAR_9, VAR_12->task_id,
    VAR_2, VAR_3,
    VAR_12->pipe_id, 0, ((void*)0), ((void*)0),
    1, 1, 0, 1);

  if (!VAR_11) {
   if (VAR_12->prev == VAR_7)
    VAR_12->status = VAR_7;
   else
    VAR_12->status = VAR_5;
   VAR_12->prev = VAR_6;
  } else if (VAR_11 == -VAR_4) {
   VAR_11 = -VAR_1;
   FUNC_3(&VAR_9->sst_lock);
   FUNC_5(VAR_12);
   FUNC_4(&VAR_9->sst_lock);
  }
 } else {
  VAR_11 = -VAR_0;
  FUNC_1(VAR_9->dev, "SST ERR: BADQRC for stream\n");
 }

 return VAR_11;
}
