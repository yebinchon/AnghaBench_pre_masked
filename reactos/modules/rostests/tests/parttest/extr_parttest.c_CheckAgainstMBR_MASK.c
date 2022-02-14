
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ MasterBootRecordMagic; } ;
typedef TYPE_1__* PMASTER_BOOT_RECORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_0(PMASTER_BOOT_RECORD VAR_3)
{
    if (VAR_3->MasterBootRecordMagic != VAR_0)
    {
        return VAR_1;
    }

    return VAR_2;
}
