
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_i2c_device {TYPE_3__* bus; struct cs8427* private_data; } ;
struct TYPE_6__ {char* pcm_status; TYPE_1__* pcm_ctl; } ;
struct cs8427 {unsigned int rate; TYPE_2__ playback; } ;
struct TYPE_7__ {int card; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_i2c_device*) ;
 int FUNC_2 (struct snd_i2c_device*,int ,char*,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(struct snd_i2c_device *VAR_12, unsigned int VAR_13)
{
 struct cs8427 *VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17;

 if (FUNC_0(!VAR_12))
  return -VAR_0;
 VAR_14 = VAR_12->private_data;
 VAR_15 = VAR_14->playback.pcm_status;
 FUNC_4(VAR_12->bus);
 if (VAR_15[0] & VAR_1) {
  VAR_15[0] &= ~VAR_2;
  switch (VAR_13) {
  case 32000: VAR_15[0] |= VAR_3; break;
  case 44100: VAR_15[0] |= VAR_4; break;
  case 48000: VAR_15[0] |= VAR_5; break;
  default: VAR_15[0] |= VAR_6; break;
  }
 } else {
  VAR_15[3] &= ~VAR_7;
  switch (VAR_13) {
  case 32000: VAR_15[3] |= VAR_8; break;
  case 44100: VAR_15[3] |= VAR_9; break;
  case 48000: VAR_15[3] |= VAR_10; break;
  }
 }
 VAR_16 = FUNC_2(VAR_12, 0, VAR_15, 24);
 if (VAR_16 > 0)
  FUNC_3(VAR_12->bus->card,
          VAR_11,
          &VAR_14->playback.pcm_ctl->id);
 VAR_17 = VAR_14->rate != VAR_13;
 VAR_14->rate = VAR_13;
 FUNC_5(VAR_12->bus);
 if (VAR_17)
  FUNC_1(VAR_12);
 return VAR_16 < 0 ? VAR_16 : 0;
}
