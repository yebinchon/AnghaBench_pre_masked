
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int irq; int pclk; int arb; } ;


 struct axg_fifo* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct snd_pcm_substream*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct axg_fifo *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_3(VAR_1->arb);


 FUNC_1(VAR_1->pclk);


 FUNC_2(VAR_1->irq, VAR_0);

 return VAR_2;
}
