
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_pipe {int first_audio; } ;
struct snd_pcxhr {int* digital_capture_volume; int* monitoring_volume; scalar_t__* monitoring_active; int chip_idx; TYPE_1__* card; int mgr; struct pcxhr_pipe playback_pipe; struct pcxhr_pipe* capture_pipe; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (int ,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_rmh*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcxhr *VAR_6,
      int VAR_7, int VAR_8)
{
 int VAR_9;
 struct pcxhr_rmh VAR_10;
 struct pcxhr_pipe *VAR_11;

 if (VAR_7)
  VAR_11 = &VAR_6->capture_pipe[0];
 else
  VAR_11 = &VAR_6->playback_pipe;

 FUNC_1(&VAR_10, VAR_1);

 FUNC_3(&VAR_10, VAR_7, 0, 0,
      1 << (VAR_8 + VAR_11->first_audio));


 if (VAR_7) {
  VAR_10.cmd[0] |= VAR_3;


  VAR_10.cmd[2] = VAR_6->digital_capture_volume[VAR_8];
 } else {
  VAR_10.cmd[0] |= VAR_4 |
    VAR_5;



  VAR_10.cmd[2] = VAR_6->monitoring_volume[VAR_8] << 10;
  if (VAR_6->monitoring_active[VAR_8] == 0)
   VAR_10.cmd[2] |= VAR_0;
 }
 VAR_10.cmd_len = 3;

 VAR_9 = FUNC_2(VAR_6->mgr, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->card->dev,
   "error update_audio_level(%d) err=%x\n",
      VAR_6->chip_idx, VAR_9);
  return -VAR_2;
 }
 return 0;
}
