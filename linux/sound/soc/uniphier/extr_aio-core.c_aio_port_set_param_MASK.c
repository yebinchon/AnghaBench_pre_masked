
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_5__* swm; TYPE_2__* aio; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_8__ {int map; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ dir; TYPE_4__ iport; TYPE_3__ oport; } ;
struct TYPE_7__ {TYPE_1__* chip; } ;
struct TYPE_6__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct uniphier_aio_sub*) ;
 int FUNC_4 (struct uniphier_aio_sub*) ;
 int FUNC_5 (struct uniphier_aio_sub*) ;
 int FUNC_6 (struct uniphier_aio_sub*,unsigned int) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params const*) ;
 int FUNC_8 (struct regmap*,int ,int) ;

int FUNC_9(struct uniphier_aio_sub *VAR_12, int VAR_13,
         const struct snd_pcm_hw_params *VAR_14)
{
 struct regmap *VAR_15 = VAR_12->aio->chip->regmap;
 unsigned int VAR_16;
 u32 VAR_17;
 int VAR_18;

 if (!VAR_13) {
  if (VAR_12->swm->type == VAR_11 ||
      VAR_12->swm->type == VAR_10) {
   VAR_16 = 48000;
  } else {
   VAR_16 = FUNC_7(VAR_14);
  }

  VAR_18 = FUNC_3(VAR_12);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_6(VAR_12, VAR_16);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_5(VAR_12);
  if (VAR_18)
   return VAR_18;
 }

 VAR_18 = FUNC_4(VAR_12);
 if (VAR_18)
  return VAR_18;

 if (VAR_12->swm->dir == VAR_9) {
  if (VAR_13)
   VAR_17 = VAR_6 |
    VAR_8;
  else
   VAR_17 = VAR_5 |
    VAR_7;

  VAR_17 |= VAR_2 |
   VAR_3 |
   VAR_4;
  FUNC_8(VAR_15, FUNC_2(VAR_12->swm->oport.map), VAR_17);
 } else {
  FUNC_8(VAR_15, FUNC_0(VAR_12->swm->iport.map),
        VAR_0);
  FUNC_8(VAR_15, FUNC_1(VAR_12->swm->iport.map),
        VAR_1);
 }

 return 0;
}
