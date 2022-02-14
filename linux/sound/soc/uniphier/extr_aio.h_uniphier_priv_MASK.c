
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_chip {struct uniphier_aio* aios; } ;
struct uniphier_aio {int dummy; } ;
struct snd_soc_dai {size_t id; } ;


 struct uniphier_aio_chip* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static inline struct uniphier_aio *FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct uniphier_aio_chip *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->aios[VAR_0->id];
}
