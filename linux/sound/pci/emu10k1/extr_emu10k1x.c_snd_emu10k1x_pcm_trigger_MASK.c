
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; struct emu10k1x_pcm* private_data; } ;
struct emu10k1x_pcm {int running; TYPE_1__* voice; } ;
struct emu10k1x {int dummy; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct emu10k1x*,int) ;
 int FUNC_1 (struct emu10k1x*,int) ;
 int FUNC_2 (struct emu10k1x*,int ,int ) ;
 int FUNC_3 (struct emu10k1x*,int ,int ,int) ;
 struct emu10k1x* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5,
        int VAR_6)
{
 struct emu10k1x *VAR_7 = FUNC_4(VAR_5);
 struct snd_pcm_runtime *VAR_8 = VAR_5->runtime;
 struct emu10k1x_pcm *VAR_9 = VAR_8->private_data;
 int VAR_10 = VAR_9->voice->number;
 int VAR_11 = 0;







 switch (VAR_6) {
 case 129:
  if(VAR_8->periods == 2)
   FUNC_1(VAR_7, (VAR_2 | VAR_1) << VAR_10);
  else
   FUNC_1(VAR_7, VAR_2 << VAR_10);
  VAR_9->running = 1;
  FUNC_3(VAR_7, VAR_3, 0, FUNC_2(VAR_7, VAR_3, 0)|(VAR_4<<VAR_10));
  break;
 case 128:
  VAR_9->running = 0;
  FUNC_0(VAR_7, (VAR_2 | VAR_1) << VAR_10);
  FUNC_3(VAR_7, VAR_3, 0, FUNC_2(VAR_7, VAR_3, 0) & ~(VAR_4<<VAR_10));
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }
 return VAR_11;
}
