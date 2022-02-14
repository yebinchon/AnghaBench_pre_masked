
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_korg1212 {size_t cardState; int lock; int running; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;


 int FUNC_1 (struct snd_korg1212*) ;
 int FUNC_2 (struct snd_korg1212*) ;
 struct snd_korg1212* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2,
                           int VAR_3)
{
        struct snd_korg1212 *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 FUNC_0("K1212_DEBUG: snd_korg1212_trigger [%s] cmd=%d\n",
      VAR_1[VAR_4->cardState], VAR_3);

 FUNC_4(&VAR_4->lock);
        switch (VAR_3) {
                case 129:






                        VAR_4->running++;
                        VAR_5 = FUNC_2(VAR_4);
                        break;

                case 128:






                        VAR_4->running--;
                        VAR_5 = FUNC_1(VAR_4);
                        break;

                default:
   VAR_5 = 1;
   break;
        }
 FUNC_5(&VAR_4->lock);
        return VAR_5 ? -VAR_0 : 0;
}
