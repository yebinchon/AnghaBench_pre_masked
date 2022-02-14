
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_4__* swm; TYPE_2__* aio; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_8__ {scalar_t__ dir; TYPE_3__ oport; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct snd_pcm_hw_params const*) ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;
 int FUNC_4 (struct regmap*,int ,int) ;

int FUNC_5(struct uniphier_aio_sub *VAR_17,
        const struct snd_pcm_hw_params *VAR_18)
{
 struct regmap *VAR_19 = VAR_17->aio->chip->regmap;
 u32 VAR_20;

 if (VAR_17->swm->dir != VAR_16)
  return 0;

 FUNC_4(VAR_19, FUNC_1(VAR_17->swm->oport.map),
       VAR_15 |
       VAR_13 |
       VAR_14 |
       VAR_11 |
       VAR_12);

 switch (FUNC_2(VAR_18)) {
 default:
 case 48000:
  VAR_20 = VAR_0 |
   VAR_10 |
   VAR_5;
  break;
 case 44100:
  VAR_20 = VAR_1 |
   VAR_9 |
   VAR_4;
  break;
 case 32000:
  VAR_20 = VAR_0 |
   VAR_10 |
   VAR_3;
  break;
 }

 FUNC_4(VAR_19, FUNC_0(VAR_17->swm->oport.map),
       VAR_20 | VAR_2 |
       VAR_8);
 FUNC_3(VAR_19, FUNC_0(VAR_17->swm->oport.map),
      VAR_6,
      VAR_7);

 return 0;
}
