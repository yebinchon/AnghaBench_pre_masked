
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; } ;
struct pmac_tumbler {int acs; TYPE_1__ i2c; scalar_t__ capture_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pmac_tumbler *VAR_2)
{
 if (! VAR_2->i2c.client)
  return -VAR_0;
 if (VAR_2->capture_source)
  VAR_2->acs |= 2;
 else
  VAR_2->acs &= ~2;
 return FUNC_0(VAR_2->i2c.client, VAR_1, VAR_2->acs);
}
