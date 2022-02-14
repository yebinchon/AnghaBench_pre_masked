
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smc_ib_device {TYPE_1__* pattr; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct smc_ib_device *VAR_1, u8 VAR_2)
{
 return VAR_1->pattr[VAR_2 - 1].state == VAR_0;
}
