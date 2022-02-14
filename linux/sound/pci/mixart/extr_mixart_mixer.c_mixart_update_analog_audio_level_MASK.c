
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixart {size_t* analog_capture_volume; size_t* analog_playback_volume; int chip_idx; TYPE_2__* card; int mgr; int uid_out_analog_physio; int uid_in_analog_physio; scalar_t__* analog_playback_active; } ;
struct mixart_return_uid {scalar_t__ error_code; } ;
struct mixart_msg {int size; struct mixart_io_level* data; int message_id; int uid; } ;
struct mixart_io_level {int channel; TYPE_1__* level; } ;
typedef int resp ;
typedef int io_level ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void* analog_level; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,scalar_t__) ;
 int FUNC_1 (struct mixart_io_level*,int ,int) ;
 void** VAR_3 ;
 int FUNC_2 (int ,struct mixart_msg*,int,struct mixart_return_uid*) ;

__attribute__((used)) static int FUNC_3(struct snd_mixart* VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct mixart_msg VAR_8;
 struct mixart_io_level VAR_9;
 struct mixart_return_uid VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.channel = -1;

 for(VAR_6=0; VAR_6<2; VAR_6++) {
  if(VAR_5) {
   VAR_9.level[VAR_6].analog_level = VAR_3[VAR_4->analog_capture_volume[VAR_6]];
  } else {
   if(VAR_4->analog_playback_active[VAR_6])
    VAR_9.level[VAR_6].analog_level = VAR_3[VAR_4->analog_playback_volume[VAR_6]];
   else
    VAR_9.level[VAR_6].analog_level = VAR_3[VAR_1];
  }
 }

 if(VAR_5) VAR_8.uid = VAR_4->uid_in_analog_physio;
 else VAR_8.uid = VAR_4->uid_out_analog_physio;
 VAR_8.message_id = VAR_2;
 VAR_8.data = &VAR_9;
 VAR_8.size = sizeof(VAR_9);

 VAR_7 = FUNC_2(VAR_4->mgr, &VAR_8, sizeof(VAR_10), &VAR_10);
 if((VAR_7<0) || (VAR_10.error_code)) {
  FUNC_0(VAR_4->card->dev,
   "error MSG_PHYSICALIO_SET_LEVEL card(%d) is_capture(%d) error_code(%x)\n",
   VAR_4->chip_idx, VAR_5, VAR_10.error_code);
  return -VAR_0;
 }
 return 0;
}
