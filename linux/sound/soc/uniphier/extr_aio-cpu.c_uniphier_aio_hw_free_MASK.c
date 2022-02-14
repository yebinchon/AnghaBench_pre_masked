
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {scalar_t__ setting; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;


 struct uniphier_aio* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct uniphier_aio *VAR_2 = FUNC_0(VAR_1);
 struct uniphier_aio_sub *VAR_3 = &VAR_2->sub[VAR_0->stream];

 VAR_3->setting = 0;

 return 0;
}
