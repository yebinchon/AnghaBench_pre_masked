
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct s3c24xx_uda134x {scalar_t__ clk_users; int clk_lock; int * pclk; int * xtal; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s3c24xx_uda134x* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct s3c24xx_uda134x *VAR_2 = FUNC_3(VAR_1->card);

 FUNC_1(&VAR_2->clk_lock);
 VAR_2->clk_users -= 1;
 if (VAR_2->clk_users == 0) {
  FUNC_0(VAR_2->xtal);
  VAR_2->xtal = ((void*)0);
  FUNC_0(VAR_2->pclk);
  VAR_2->pclk = ((void*)0);
 }
 FUNC_2(&VAR_2->clk_lock);
}
