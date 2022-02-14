
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; } ;
struct snd_ice1712 {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_3(VAR_1);
 unsigned char VAR_3;

 FUNC_5(&VAR_2->reg_lock);
 VAR_3 = 3 - VAR_1->number;
 if (FUNC_1(FUNC_0(VAR_2, VAR_0)) < VAR_3)
  FUNC_2(VAR_3, FUNC_0(VAR_2, VAR_0));
 FUNC_6(&VAR_2->reg_lock);
 return FUNC_4(VAR_1);
}
