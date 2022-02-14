
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct odroid_priv {scalar_t__ be_sample_rate; int lock; scalar_t__ be_active; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_hw_params*) ;
 struct odroid_priv* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
          struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct odroid_priv *VAR_4 = FUNC_1(VAR_3->card);
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_4->lock, VAR_5);
 if (VAR_4->be_active && VAR_4->be_sample_rate != FUNC_0(VAR_2))
  VAR_6 = -VAR_0;
 FUNC_3(&VAR_4->lock, VAR_5);

 return VAR_6;
}
