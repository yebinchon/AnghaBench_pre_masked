
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * status; } ;
struct stm32_sai_sub_data {int ctrl_lock; TYPE_1__ iec958; } ;
struct snd_pcm_runtime {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct stm32_sai_sub_data *VAR_10,
     struct snd_pcm_runtime *VAR_11)
{
 if (!VAR_11)
  return;


 FUNC_0(&VAR_10->ctrl_lock);
 switch (VAR_11->rate) {
 case 22050:
  VAR_10->iec958.status[3] = VAR_2;
  break;
 case 44100:
  VAR_10->iec958.status[3] = VAR_5;
  break;
 case 88200:
  VAR_10->iec958.status[3] = VAR_7;
  break;
 case 176400:
  VAR_10->iec958.status[3] = VAR_0;
  break;
 case 24000:
  VAR_10->iec958.status[3] = VAR_3;
  break;
 case 48000:
  VAR_10->iec958.status[3] = VAR_6;
  break;
 case 96000:
  VAR_10->iec958.status[3] = VAR_8;
  break;
 case 192000:
  VAR_10->iec958.status[3] = VAR_1;
  break;
 case 32000:
  VAR_10->iec958.status[3] = VAR_4;
  break;
 default:
  VAR_10->iec958.status[3] = VAR_9;
  break;
 }
 FUNC_1(&VAR_10->ctrl_lock);
}
