
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {int* is_stream_in_use; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 struct wm8960_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1,
  struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct wm8960_priv *VAR_4 = FUNC_0(VAR_3);
 bool VAR_5 = VAR_1->stream == VAR_0;

 VAR_4->is_stream_in_use[VAR_5] = 0;

 return 0;
}
