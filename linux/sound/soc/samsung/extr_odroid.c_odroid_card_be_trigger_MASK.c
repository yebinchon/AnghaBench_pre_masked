
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct odroid_priv {int be_active; int lock; } ;
 struct odroid_priv* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct odroid_priv *VAR_3 = FUNC_0(VAR_2->card);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);

 switch (VAR_1) {
 case 130:
 case 131:
 case 132:
  VAR_3->be_active = 1;
  break;

 case 129:
 case 128:
 case 133:
  VAR_3->be_active = 0;
  break;
 }

 FUNC_2(&VAR_3->lock, VAR_4);

 return 0;
}
