
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; } ;
struct wm5102_priv {TYPE_1__ core; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_compr_stream {struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 struct wm5102_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_2 (int *,struct snd_compr_stream*) ;

__attribute__((used)) static int FUNC_3(struct snd_compr_stream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_2, VAR_0);
 struct wm5102_priv *VAR_4 = FUNC_0(VAR_3);

 return FUNC_2(&VAR_4->core.adsp[0], VAR_1);
}
