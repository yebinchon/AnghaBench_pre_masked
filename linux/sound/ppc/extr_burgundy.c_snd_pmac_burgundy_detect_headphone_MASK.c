
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {int hp_stat_mask; TYPE_1__* awacs; } ;
struct TYPE_2__ {int codec_stat; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pmac *VAR_0)
{
 return (FUNC_0(&VAR_0->awacs->codec_stat) & VAR_0->hp_stat_mask) ? 1 : 0;
}
