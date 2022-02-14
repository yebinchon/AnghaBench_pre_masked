
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_object; } ;
struct TYPE_5__ {scalar_t__ p_type; TYPE_1__ p_vu; } ;
typedef TYPE_2__ AMFObjectProperty ;
typedef int AMFObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0(AMFObjectProperty *VAR_2, AMFObject *VAR_3)
{
    if (VAR_2->p_type == VAR_1)
        *VAR_3 = VAR_2->p_vu.p_object;
    else
        *VAR_3 = VAR_0;
}
