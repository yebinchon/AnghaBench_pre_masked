
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt5651_priv {int * gpiod_hp_det; TYPE_1__* hp_jack; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct rt5651_priv *VAR_1)
{
 if (!VAR_1->hp_jack)
  return 0;


 return (VAR_1->hp_jack->status & VAR_0) &&
  VAR_1->gpiod_hp_det == ((void*)0);
}
