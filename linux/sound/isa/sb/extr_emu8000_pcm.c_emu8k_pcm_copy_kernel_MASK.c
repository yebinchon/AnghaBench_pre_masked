
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {int dummy; } ;
struct TYPE_2__ {struct snd_emu8k_pcm* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu8k_pcm*,unsigned long,void*,unsigned long,int ) ;
 unsigned long FUNC_1 (TYPE_1__*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
     int VAR_2, unsigned long VAR_3,
     void *VAR_4, unsigned long VAR_5)
{
 struct snd_emu8k_pcm *VAR_6 = VAR_1->runtime->private_data;


 VAR_3 = FUNC_1(VAR_1->runtime, VAR_3);
 VAR_5 = FUNC_1(VAR_1->runtime, VAR_5);
 FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5, VAR_0);
 return 0;
}
