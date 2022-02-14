
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct ensoniq {int reg_lock; } ;
typedef size_t snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ensoniq*,int ) ;
 size_t FUNC_2 (int) ;
 int VAR_4 ;
 size_t FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct ensoniq* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_9(struct snd_pcm_substream *VAR_5)
{
 struct ensoniq *VAR_6 = FUNC_6(VAR_5);
 size_t VAR_7;

 FUNC_7(&VAR_6->reg_lock);
 if (FUNC_4(FUNC_1(VAR_6, VAR_1)) & VAR_2) {
  FUNC_5(FUNC_0(VAR_3), FUNC_1(VAR_6, VAR_4));
  VAR_7 = FUNC_2(FUNC_4(FUNC_1(VAR_6, VAR_0)));
  VAR_7 = FUNC_3(VAR_5->runtime, VAR_7);
 } else {
  VAR_7 = 0;
 }
 FUNC_8(&VAR_6->reg_lock);
 return VAR_7;
}
