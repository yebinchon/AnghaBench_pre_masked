
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ad1843 {int dummy; } ;
struct ad1843_gain {int lmute; TYPE_1__* lfield; } ;
struct TYPE_2__ {int nbits; } ;


 struct ad1843_gain** VAR_0 ;

int FUNC_0(struct snd_ad1843 *VAR_1, int VAR_2)
{
 const struct ad1843_gain *VAR_3 = VAR_0[VAR_2];
 int VAR_4;

 VAR_4 = (1 << VAR_3->lfield->nbits);
 if (!VAR_3->lmute)
  VAR_4 -= 1;
 return VAR_4;
}
