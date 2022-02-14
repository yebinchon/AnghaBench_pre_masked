
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct pmac_tumbler {TYPE_1__ hp_detect; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct snd_pmac *VAR_0)
{
 struct pmac_tumbler *VAR_1 = VAR_0->mixer_data;
 int VAR_2 = 0;

 if (VAR_1->hp_detect.addr)
  VAR_2 |= FUNC_0(&VAR_1->hp_detect);
 return VAR_2;
}
