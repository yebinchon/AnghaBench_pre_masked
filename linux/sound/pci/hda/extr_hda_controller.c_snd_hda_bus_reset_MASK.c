
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chip_init; } ;
struct hda_bus {int in_reset; TYPE_1__ core; } ;
struct azx {int dummy; } ;


 int FUNC_0 (struct azx*,int) ;
 int FUNC_1 (struct azx*) ;
 struct azx* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct hda_bus*) ;

void FUNC_4(struct hda_bus *VAR_0)
{
 struct azx *VAR_1 = FUNC_2(&VAR_0->core);

 VAR_0->in_reset = 1;
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, 1);
 if (VAR_0->core.chip_init)
  FUNC_3(VAR_0);
 VAR_0->in_reset = 0;
}
