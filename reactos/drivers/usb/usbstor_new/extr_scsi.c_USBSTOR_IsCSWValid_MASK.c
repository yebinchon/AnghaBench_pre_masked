
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {TYPE_1__* csw; } ;
struct TYPE_4__ {scalar_t__ Signature; scalar_t__ Tag; int Status; } ;
typedef TYPE_2__* PIRP_CONTEXT ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN
FUNC_1(
    PIRP_CONTEXT VAR_3)
{



    if (VAR_3->csw->Signature != VAR_0)
    {
        FUNC_0("[USBSTOR] Expected Signature %x but got %x\n", VAR_0, VAR_3->csw->Signature);
        return VAR_1;
    }

    if (VAR_3->csw->Tag != (ULONG)VAR_3->csw)
    {
        FUNC_0("[USBSTOR] Expected Tag %x but got %x\n", (ULONG)VAR_3->csw, VAR_3->csw->Tag);
        return VAR_1;
    }

    if (VAR_3->csw->Status != 0x00)
    {
        FUNC_0("[USBSTOR] Expected Status 0x00 but got %x\n", VAR_3->csw->Status);
        return VAR_1;
    }




    return VAR_2;

}
