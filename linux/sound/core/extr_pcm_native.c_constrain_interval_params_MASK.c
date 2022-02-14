
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int rmask; int cmask; } ;
struct snd_pcm_hw_constraints {int dummy; } ;
struct snd_interval {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_hw_constraints hw_constraints; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_constraints*,unsigned int) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,unsigned int) ;
 scalar_t__ FUNC_2 (struct snd_interval*) ;
 int FUNC_3 (struct snd_interval*,int ) ;
 int FUNC_4 (struct snd_pcm_substream*,unsigned int,int ,struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
         struct snd_pcm_hw_params *VAR_4)
{
 struct snd_pcm_hw_constraints *VAR_5 =
     &VAR_3->runtime->hw_constraints;
 struct snd_interval *VAR_6;
 unsigned int VAR_7;
 struct snd_interval VAR_8;
 int VAR_9;

 for (VAR_7 = VAR_1; VAR_7 <= VAR_2; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_7);
  if (FUNC_2(VAR_6))
   return -VAR_0;


  if (!(VAR_4->rmask & (1 << VAR_7)))
   continue;

  if (FUNC_5())
   VAR_8 = *VAR_6;

  VAR_9 = FUNC_3(VAR_6, FUNC_0(VAR_5, VAR_7));
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_9 == 0)
   continue;


  FUNC_4(VAR_3, VAR_7, 0, &VAR_8, VAR_6);
  VAR_4->cmask |= 1 << VAR_7;
 }

 return 0;
}
