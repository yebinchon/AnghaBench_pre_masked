
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {int use_mmap; scalar_t__ pass_through; struct snd_pcm_substream* substream; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 struct uniphier_aio* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct uniphier_aio *VAR_2 = FUNC_1(VAR_1);
 struct uniphier_aio_sub *VAR_3 = &VAR_2->sub[VAR_0->stream];
 int VAR_4;

 VAR_3->substream = VAR_0;
 VAR_3->pass_through = 0;
 VAR_3->use_mmap = 1;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 return 0;
}
