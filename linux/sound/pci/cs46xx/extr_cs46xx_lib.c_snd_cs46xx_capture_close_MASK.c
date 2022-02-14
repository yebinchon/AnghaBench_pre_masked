
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int hw_buf; int * substream; } ;
struct snd_cs46xx {int (* active_ctrl ) (struct snd_cs46xx*,int) ;TYPE_1__ capt; } ;


 int FUNC_0 (int *) ;
 struct snd_cs46xx* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_cs46xx*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_cs46xx *VAR_1 = FUNC_1(VAR_0);

 VAR_1->capt.substream = ((void*)0);
 FUNC_0(&VAR_1->capt.hw_buf);
 VAR_1->active_ctrl(VAR_1, -1);

 return 0;
}
