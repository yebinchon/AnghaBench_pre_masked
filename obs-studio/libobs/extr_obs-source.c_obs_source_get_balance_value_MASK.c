
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float balance; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

float FUNC_1(const obs_source_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_source_get_balance_value")
         ? VAR_0->balance
         : 0.5f;
}
