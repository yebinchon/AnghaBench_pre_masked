
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ k_type; } ;
struct TYPE_6__ {TYPE_1__ k_offset_v2; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef int RFSD_KEY_VERSION ;
typedef TYPE_3__* PRFSD_KEY_ON_DISK ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;

RFSD_KEY_VERSION FUNC_1(const PRFSD_KEY_ON_DISK VAR_2)
{
    int VAR_3 = (int) VAR_2->u.k_offset_v2.k_type;

    FUNC_0();

    if ( VAR_3 == 0x0 || VAR_3 == 0xF )
        return VAR_0;

    return VAR_1;
}
