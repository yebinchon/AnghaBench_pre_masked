
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cs4231 {int* image; int lock; scalar_t__ c_periods_sent; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_cs4231* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct snd_cs4231 *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_4->image[VAR_0] &= ~(VAR_1 |
         VAR_2);


 VAR_4->c_periods_sent = 0;
 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
