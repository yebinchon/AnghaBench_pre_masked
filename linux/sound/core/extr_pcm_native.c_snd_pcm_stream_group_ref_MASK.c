
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_group* group; TYPE_1__* pcm; } ;
struct snd_pcm_group {int lock; int mutex; int refs; } ;
struct TYPE_2__ {int nonatomic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_group*,int) ;
 int FUNC_3 (struct snd_pcm_group*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct snd_pcm_group *
FUNC_8(struct snd_pcm_substream *VAR_0)
{
 bool VAR_1 = VAR_0->pcm->nonatomic;
 struct snd_pcm_group *VAR_2;
 bool VAR_3;

 for (;;) {
  if (!FUNC_4(VAR_0))
   return ((void*)0);
  VAR_2 = VAR_0->group;

  FUNC_1(&VAR_2->refs);

  VAR_3 = VAR_1 ? FUNC_0(&VAR_2->mutex) :
   FUNC_7(&VAR_2->lock);
  if (VAR_3)
   break;


  FUNC_6(VAR_0);
  FUNC_2(VAR_2, VAR_1);
  FUNC_5(VAR_0);


  if (VAR_0->group == VAR_2)
   break;

  FUNC_3(VAR_2, VAR_0);
 }
 return VAR_2;
}
