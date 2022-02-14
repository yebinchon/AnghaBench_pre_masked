
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_1__* swm; int pass_through; int params; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uniphier_aio_sub*,int ) ;
 int FUNC_1 (struct uniphier_aio_sub*,int) ;
 int FUNC_2 (struct uniphier_aio_sub*,int ,int *) ;
 int FUNC_3 (struct uniphier_aio_sub*,int *) ;
 int FUNC_4 (struct uniphier_aio_sub*,int) ;
 int FUNC_5 (struct uniphier_aio_sub*) ;
 int FUNC_6 (struct uniphier_aio_sub*) ;
 struct uniphier_aio* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct uniphier_aio *VAR_3 = FUNC_7(VAR_2);
 struct uniphier_aio_sub *VAR_4 = &VAR_3->sub[VAR_1->stream];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_4->pass_through, &VAR_4->params);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_3(VAR_4, &VAR_4->params);
 if (VAR_5)
  return VAR_5;
 FUNC_1(VAR_4, 1);

 VAR_5 = FUNC_0(VAR_4, VAR_4->pass_through);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->swm->type == VAR_0) {
  VAR_5 = FUNC_6(VAR_4);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_5(VAR_4);
  if (VAR_5)
   return VAR_5;
  FUNC_4(VAR_4, 1);
 }

 return 0;
}
