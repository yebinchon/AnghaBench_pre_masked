
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int addr; TYPE_1__* bus; scalar_t__ display_power_control; } ;
struct TYPE_2__ {int core; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, bool VAR_1)
{
 if (VAR_0->display_power_control)
  FUNC_0(&VAR_0->bus->core, VAR_0->addr, VAR_1);
}
