
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct alc5623_priv {int sysclk; } ;
struct TYPE_3__ {int fs; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct alc5623_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2, int VAR_3)
{
 struct alc5623_priv *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5].fs * VAR_3 == VAR_4->sysclk)
   return VAR_5;
 }
 return -VAR_0;
}
