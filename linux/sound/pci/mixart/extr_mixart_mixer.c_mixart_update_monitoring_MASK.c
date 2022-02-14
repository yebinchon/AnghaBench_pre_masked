
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ status; int uid_right_connector; int uid_left_connector; } ;
struct snd_mixart {size_t* monitoring_volume; int chip_idx; TYPE_2__* card; int mgr; int * monitoring_active; TYPE_1__ pipe_out_ana; } ;
struct mixart_set_out_audio_level {int valid_mask1; int monitor_mute1; int monitor_level; } ;
struct mixart_msg {int size; struct mixart_set_out_audio_level* data; int message_id; int uid; } ;
typedef int resp ;
typedef int audio_level ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (struct mixart_set_out_audio_level*,int ,int) ;
 int * VAR_5 ;
 int FUNC_2 (int ,struct mixart_msg*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct snd_mixart* VAR_6, int VAR_7)
{
 int VAR_8;
 struct mixart_msg VAR_9;
 struct mixart_set_out_audio_level VAR_10;
 u32 VAR_11 = 0;

 if(VAR_6->pipe_out_ana.status == VAR_4)
  return -VAR_0;

 if(!VAR_7) VAR_9.uid = VAR_6->pipe_out_ana.uid_left_connector;
 else VAR_9.uid = VAR_6->pipe_out_ana.uid_right_connector;
 VAR_9.message_id = VAR_3;
 VAR_9.data = &VAR_10;
 VAR_9.size = sizeof(VAR_10);

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.valid_mask1 = VAR_1 | VAR_2;
 VAR_10.monitor_level = VAR_5[VAR_6->monitoring_volume[VAR_7!=0]];
 VAR_10.monitor_mute1 = !VAR_6->monitoring_active[VAR_7!=0];

 VAR_8 = FUNC_2(VAR_6->mgr, &VAR_9, sizeof(VAR_11), &VAR_11);
 if((VAR_8<0) || VAR_11) {
  FUNC_0(VAR_6->card->dev,
   "error MSG_CONNECTOR_SET_OUT_AUDIO_LEVEL card(%d) resp(%x)\n",
   VAR_6->chip_idx, VAR_11);
  return -VAR_0;
 }
 return 0;
}
