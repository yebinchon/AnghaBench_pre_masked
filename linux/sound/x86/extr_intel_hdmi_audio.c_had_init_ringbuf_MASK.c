
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; int period_size; } ;
struct snd_intelhad {int num_bds; int period_bytes; scalar_t__ bd_head; scalar_t__ pcmbuf_filled; scalar_t__ pcmbuf_head; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_intelhad*,int) ;
 int FUNC_3 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct snd_pcm_substream *VAR_1,
        struct snd_intelhad *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 int VAR_4, VAR_5;

 VAR_5 = VAR_3->periods;
 VAR_2->num_bds = FUNC_5(VAR_5, VAR_0);

 VAR_2->num_bds = FUNC_4(VAR_2->num_bds, 2U);
 VAR_2->period_bytes =
  FUNC_1(VAR_3, VAR_3->period_size);
 FUNC_0(VAR_2->period_bytes & 0x3f);

 VAR_2->bd_head = 0;
 VAR_2->pcmbuf_head = 0;
 VAR_2->pcmbuf_filled = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_4 < VAR_2->num_bds)
   FUNC_3(VAR_1, VAR_2);
  else
   FUNC_2(VAR_2, VAR_4);
 }

 VAR_2->bd_head = 0;
}
