
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_ipc_message {int header; int size; struct sst_hsw_ipc_volume_req* data; } ;
struct sst_hsw_ipc_volume_req {int target_volume; int channel; } ;
struct TYPE_2__ {int stream_hw_id; } ;
struct sst_hsw_stream {struct sst_hsw_ipc_volume_req vol_req; TYPE_1__ reply; } ;
struct sst_hsw {int* mute_volume; int dev; int ipc; scalar_t__* mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct sst_ipc_message,int *) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct sst_hsw *VAR_8,
 struct sst_hsw_stream *VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 struct sst_hsw_ipc_volume_req *VAR_13;
 struct sst_ipc_message VAR_14;
 int VAR_15;

 FUNC_4("set stream volume", VAR_9->reply.stream_hw_id);

 if (VAR_11 >= 2 && VAR_11 != VAR_7)
  return -VAR_0;

 VAR_14.header = FUNC_0(VAR_1) |
  FUNC_1(VAR_6);
 VAR_14.header |= (VAR_9->reply.stream_hw_id << VAR_5);
 VAR_14.header |= (VAR_3 << VAR_4);
 VAR_14.header |= (VAR_10 << VAR_2);

 VAR_13 = &VAR_9->vol_req;
 VAR_13->target_volume = VAR_12;


 if (VAR_11 == VAR_7) {
  if (VAR_8->mute[0] && VAR_8->mute[1]) {
   VAR_8->mute_volume[0] = VAR_8->mute_volume[1] = VAR_12;
   return 0;
  } else if (VAR_8->mute[0])
   VAR_13->channel = 1;
  else if (VAR_8->mute[1])
   VAR_13->channel = 0;
  else
   VAR_13->channel = VAR_7;
 } else {

  if (VAR_8->mute[VAR_11]) {
   VAR_8->mute_volume[VAR_11] = VAR_12;
   return 0;
  }
  VAR_13->channel = VAR_11;
 }

 VAR_14.data = VAR_13;
 VAR_14.size = sizeof(*VAR_13);
 VAR_15 = FUNC_3(&VAR_8->ipc, VAR_14, ((void*)0));
 if (VAR_15 < 0) {
  FUNC_2(VAR_8->dev, "error: set stream volume failed\n");
  return VAR_15;
 }

 return 0;
}
