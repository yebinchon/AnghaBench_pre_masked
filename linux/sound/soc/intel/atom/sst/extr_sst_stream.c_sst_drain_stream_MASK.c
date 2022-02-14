
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stream_info {scalar_t__ status; int pipe_id; int task_id; } ;
struct intel_sst_drv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 struct stream_info* FUNC_2 (struct intel_sst_drv*,int) ;
 int FUNC_3 (struct intel_sst_drv*,int ,int ,int ,int ,int,int*,int *,int,int,int,int) ;

int FUNC_4(struct intel_sst_drv *VAR_7,
   int VAR_8, bool VAR_9)
{
 int VAR_10 = 0;
 struct stream_info *VAR_11;

 FUNC_0(VAR_7->dev, "SST DBG:sst_drain_stream for %d\n", VAR_8);
 VAR_11 = FUNC_2(VAR_7, VAR_8);
 if (!VAR_11)
  return -VAR_1;
 if (VAR_11->status != VAR_6 &&
  VAR_11->status != VAR_4 &&
  VAR_11->status != VAR_5) {
   FUNC_1(VAR_7->dev, "SST ERR: BADQRC for stream = %d\n",
           VAR_11->status);
   return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_7, VAR_11->task_id, VAR_2,
   VAR_3, VAR_11->pipe_id,
   sizeof(u8), &VAR_9, ((void*)0), 1, 1, 0, 0);






 return VAR_10;
}
