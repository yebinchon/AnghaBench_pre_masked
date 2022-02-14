
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NoBuses; int MajorRevision; int HardwareMechanism; scalar_t__ MinorRevision; } ;
typedef TYPE_1__* PPCI_REGISTRY_INFO ;
typedef int BOOLEAN ;


 int VAR_0 ;

BOOLEAN
FUNC_0(PPCI_REGISTRY_INFO VAR_1)
{


    VAR_1->NoBuses = 2;
    VAR_1->MajorRevision = 1;
    VAR_1->MinorRevision = 0;
    VAR_1->HardwareMechanism = 1;
    return VAR_0;
}
