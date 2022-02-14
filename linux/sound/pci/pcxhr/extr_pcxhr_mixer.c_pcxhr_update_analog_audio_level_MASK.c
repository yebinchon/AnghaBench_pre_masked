
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int* analog_capture_volume; int* analog_playback_volume; int chip_idx; TYPE_1__* card; int mgr; scalar_t__* analog_playback_active; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (int ,struct pcxhr_rmh*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcxhr *VAR_6,
        int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct pcxhr_rmh VAR_11;

 FUNC_1(&VAR_11, VAR_0);
 if (VAR_7) {
  VAR_11.cmd[0] |= VAR_2;
  VAR_11.cmd[2] = VAR_6->analog_capture_volume[VAR_8];
 } else {
  VAR_11.cmd[0] |= VAR_3;
  if (VAR_6->analog_playback_active[VAR_8])
   VAR_10 = VAR_6->analog_playback_volume[VAR_8];
  else
   VAR_10 = VAR_5;

  VAR_11.cmd[2] = VAR_4 - VAR_10;
 }
 VAR_11.cmd[1] = 1 << ((2 * VAR_6->chip_idx) + VAR_8);
 VAR_11.cmd_len = 3;
 VAR_9 = FUNC_2(VAR_6->mgr, &VAR_11);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->card->dev,
   "error update_analog_audio_level card(%d)"
      " is_capture(%d) err(%x)\n",
      VAR_6->chip_idx, VAR_7, VAR_9);
  return -VAR_1;
 }
 return 0;
}
