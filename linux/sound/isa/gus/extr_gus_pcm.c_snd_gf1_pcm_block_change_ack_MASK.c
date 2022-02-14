
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int dummy; } ;
struct gus_pcm_private {int sleep; int dma_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_gus_card * VAR_0, void *VAR_1)
{
 struct gus_pcm_private *VAR_2 = VAR_1;

 if (VAR_2) {
  FUNC_0(&VAR_2->dma_count);
  FUNC_1(&VAR_2->sleep);
 }
}
