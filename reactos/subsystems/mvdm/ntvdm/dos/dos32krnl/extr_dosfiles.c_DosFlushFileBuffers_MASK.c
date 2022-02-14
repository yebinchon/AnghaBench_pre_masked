
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_10__ {int LastErrorCode; } ;
struct TYPE_9__ {int (* FlushOutputRoutine ) (TYPE_2__*) ;int (* FlushInputRoutine ) (TYPE_2__*) ;} ;
struct TYPE_8__ {int DeviceInfo; int Win32Handle; int DevicePointer; } ;
typedef TYPE_1__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_2__* PDOS_DEVICE_NODE ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

BOOL FUNC_5(WORD VAR_5)
{
    PDOS_FILE_DESCRIPTOR VAR_6 = FUNC_1(VAR_5);

    if (VAR_6 == ((void*)0))
    {

        VAR_3->LastErrorCode = VAR_0;
        return VAR_1;
    }

    if (VAR_6->DeviceInfo & VAR_2)
    {
        PDOS_DEVICE_NODE VAR_7 = FUNC_0(VAR_6->DevicePointer);

        if (VAR_7->FlushInputRoutine) VAR_7->FlushInputRoutine(VAR_7);
        if (VAR_7->FlushOutputRoutine) VAR_7->FlushOutputRoutine(VAR_7);

        return VAR_4;
    }
    else
    {
        return FUNC_2(VAR_6->Win32Handle);
    }
}
