
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_tdm_stream {int dummy; } ;


 int FUNC_0 (struct axg_tdm_stream*) ;
 struct axg_tdm_stream* FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_soc_dai *VAR_1)
{
 struct axg_tdm_stream *VAR_2 = FUNC_1(VAR_1, VAR_0);


 return FUNC_0(VAR_2);
}
