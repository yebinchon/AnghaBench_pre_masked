
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int HardwareMechanism; int MinorRevision; int MajorRevision; scalar_t__ NoBuses; } ;
struct TYPE_10__ {int ah; int al; int bl; int bh; scalar_t__ cl; } ;
struct TYPE_9__ {char edx; } ;
struct TYPE_11__ {TYPE_2__ b; TYPE_1__ d; } ;
typedef TYPE_3__ REGS ;
typedef TYPE_4__* PPCI_REGISTRY_INFO ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;

BOOLEAN
FUNC_3(PPCI_REGISTRY_INFO VAR_2)
{
    REGS VAR_3;
    REGS VAR_4;

    VAR_3.b.ah = 0xB1;
    VAR_3.b.al = 0x01;

    FUNC_1(0x1A, &VAR_3, &VAR_4);

    if (FUNC_0(VAR_4) &&
        (VAR_4.d.edx == ' ICP') &&
        (VAR_4.b.ah == 0))
    {
        FUNC_2("Found PCI bios\n");

        FUNC_2("AL: %x\n", VAR_4.b.al);
        FUNC_2("BH: %x\n", VAR_4.b.bh);
        FUNC_2("BL: %x\n", VAR_4.b.bl);
        FUNC_2("CL: %x\n", VAR_4.b.cl);

        VAR_2->NoBuses = VAR_4.b.cl + 1;
        VAR_2->MajorRevision = VAR_4.b.bh;
        VAR_2->MinorRevision = VAR_4.b.bl;
        VAR_2->HardwareMechanism = VAR_4.b.al;

        return VAR_1;
    }

    FUNC_2("No PCI bios found\n");

    return VAR_0;
}
