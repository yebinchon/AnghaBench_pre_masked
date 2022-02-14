
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct es1938 {int dma1_size; size_t dma1_start; size_t dma1_shift; } ;
typedef size_t snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1938*,int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 struct es1938* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct es1938 *VAR_3 = FUNC_3(VAR_2);
 size_t VAR_4;
 size_t VAR_5, VAR_6;


 VAR_5 = FUNC_2(FUNC_0(VAR_3, VAR_1));
 while ((VAR_6 = FUNC_2(FUNC_0(VAR_3, VAR_1))) != VAR_5)
  VAR_5 = VAR_6;
 VAR_4 = VAR_3->dma1_size - 1 - VAR_6;



 return VAR_4 >> VAR_3->dma1_shift;
}
