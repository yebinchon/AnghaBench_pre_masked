
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct oxygen {unsigned int interrupt_mask; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,int ,unsigned int) ;
 int FUNC_1 (struct oxygen*,int ,unsigned int) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct oxygen*,int ,unsigned int) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct oxygen* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2)
{
 struct oxygen *VAR_3 = FUNC_5(VAR_2);
 unsigned int VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5 = 1 << VAR_4;

 FUNC_6(&VAR_3->reg_lock);
 VAR_3->interrupt_mask &= ~VAR_5;
 FUNC_3(VAR_3, VAR_1, VAR_3->interrupt_mask);

 FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_0(VAR_3, VAR_0, VAR_5);
 FUNC_7(&VAR_3->reg_lock);

 return FUNC_4(VAR_2);
}
