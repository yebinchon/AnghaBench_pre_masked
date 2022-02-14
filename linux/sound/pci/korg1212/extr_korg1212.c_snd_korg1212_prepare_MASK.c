
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_korg1212 {size_t cardState; scalar_t__ stop_pending_cnt; int lock; scalar_t__ currentBuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct snd_korg1212*) ;
 struct snd_korg1212* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
        struct snd_korg1212 *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_0("K1212_DEBUG: snd_korg1212_prepare [%s]\n",
      VAR_2[VAR_4->cardState]);

 FUNC_3(&VAR_4->lock);


 if (VAR_4->stop_pending_cnt > 0) {
  FUNC_0("K1212_DEBUG: snd_korg1212_prepare - Stop is pending... [%s]\n",
       VAR_2[VAR_4->cardState]);
         FUNC_4(&VAR_4->lock);
  return -VAR_0;





 }

        VAR_5 = FUNC_1(VAR_4);

        VAR_4->currentBuffer = 0;

        FUNC_4(&VAR_4->lock);

 return VAR_5 ? -VAR_1 : 0;
}
