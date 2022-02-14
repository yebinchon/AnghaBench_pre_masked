
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_4__ {int offset; int segment; } ;
struct TYPE_5__ {TYPE_1__ EntryPointSP; } ;
typedef int PXENV_STATUS ;
typedef scalar_t__ PXENV_EXIT ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__* PPXE ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,...) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int VAR_4 ;

BOOLEAN FUNC_5(UINT16 VAR_5, PVOID VAR_6)
{
    PPXE VAR_7;
    PXENV_EXIT VAR_8;

    VAR_7 = FUNC_1();
    if (!VAR_7)
        return VAR_0;

    if (VAR_5 != VAR_3)
    {

        FUNC_2(100 * 1000);
        FUNC_4("PxeCall(0x%x, %p)\n", VAR_5, VAR_6);
    }

    VAR_8 = FUNC_3(VAR_7->EntryPointSP.segment, VAR_7->EntryPointSP.offset, VAR_5, VAR_6);
    if (VAR_8 != VAR_1)
    {
        FUNC_0("PxeCall(0x%x, %p) failed with exit=%d status=0x%x\n",
                VAR_5, VAR_6, VAR_8, *(PXENV_STATUS*)VAR_6);
        return VAR_0;
    }
    if (*(PXENV_STATUS*)VAR_6 != VAR_2)
    {
        FUNC_0("PxeCall(0x%x, %p) succeeded, but returned error status 0x%x\n",
                VAR_5, VAR_6, *(PXENV_STATUS*)VAR_6);
        return VAR_0;
    }
    return VAR_4;
}
