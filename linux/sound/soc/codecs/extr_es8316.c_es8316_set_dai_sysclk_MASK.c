
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {unsigned int* list; int count; } ;
struct es8316_priv {unsigned int sysclk; unsigned int* allowed_rates; TYPE_1__ sysclk_constraints; int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 struct es8316_priv* FUNC_1 (struct snd_soc_component*) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2,
     int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct es8316_priv *VAR_7 = FUNC_1(VAR_6);
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_7->sysclk = VAR_4;

 if (VAR_4 == 0) {
  VAR_7->sysclk_constraints.list = ((void*)0);
  VAR_7->sysclk_constraints.count = 0;

  return 0;
 }

 VAR_9 = FUNC_0(VAR_7->mclk, VAR_4);
 if (VAR_9)
  return VAR_9;




 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  const unsigned int VAR_11 = VAR_1[VAR_8];

  if (VAR_4 % VAR_11 == 0)
   VAR_7->allowed_rates[VAR_10++] = VAR_4 / VAR_11;
 }

 VAR_7->sysclk_constraints.list = VAR_7->allowed_rates;
 VAR_7->sysclk_constraints.count = VAR_10;

 return 0;
}
