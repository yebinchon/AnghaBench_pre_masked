
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_ipc_message {int header; int size; struct sst_hsw_ipc_volume_req* data; } ;
struct sst_hsw_ipc_volume_req {int channel; int target_volume; int curve_type; int curve_duration; } ;
struct TYPE_2__ {int mixer_hw_id; } ;
struct sst_hsw {int* mute_volume; int dev; int ipc; int curve_type; int curve_duration; TYPE_1__ mixer_info; scalar_t__* mute; } ;
typedef int req ;


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

int FUNC_5(struct sst_hsw *VAR_8, u32 VAR_9, u32 VAR_10,
 u32 VAR_11)
{
 struct sst_hsw_ipc_volume_req VAR_12;
 struct sst_ipc_message VAR_13;
 int VAR_14;

 FUNC_4("set mixer volume", VAR_11);

 if (VAR_10 >= 2 && VAR_10 != VAR_7)
  return -VAR_0;


 if (VAR_10 == VAR_7) {
  if (VAR_8->mute[0] && VAR_8->mute[1]) {
   VAR_8->mute_volume[0] = VAR_8->mute_volume[1] = VAR_11;
   return 0;
  } else if (VAR_8->mute[0])
   VAR_12.channel = 1;
  else if (VAR_8->mute[1])
   VAR_12.channel = 0;
  else
   VAR_12.channel = VAR_7;
 } else {

  if (VAR_8->mute[VAR_10]) {
   VAR_8->mute_volume[VAR_10] = VAR_11;
   return 0;
  }
  VAR_12.channel = VAR_10;
 }

 VAR_13.header = FUNC_0(VAR_1) |
  FUNC_1(VAR_6);
 VAR_13.header |= (VAR_8->mixer_info.mixer_hw_id << VAR_5);
 VAR_13.header |= (VAR_3 << VAR_4);
 VAR_13.header |= (VAR_9 << VAR_2);

 VAR_12.curve_duration = VAR_8->curve_duration;
 VAR_12.curve_type = VAR_8->curve_type;
 VAR_12.target_volume = VAR_11;

 VAR_13.data = &VAR_12;
 VAR_13.size = sizeof(VAR_12);
 VAR_14 = FUNC_3(&VAR_8->ipc, VAR_13, ((void*)0));
 if (VAR_14 < 0) {
  FUNC_2(VAR_8->dev, "error: set mixer volume failed\n");
  return VAR_14;
 }

 return 0;
}
