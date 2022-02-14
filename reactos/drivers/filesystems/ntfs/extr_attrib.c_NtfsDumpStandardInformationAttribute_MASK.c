
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_5__ {scalar_t__ ValueOffset; } ;
struct TYPE_7__ {TYPE_1__ Resident; } ;
struct TYPE_6__ {int FileAttribute; } ;
typedef TYPE_2__* PSTANDARD_INFORMATION ;
typedef TYPE_3__* PNTFS_ATTR_RECORD ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static
VOID
FUNC_1(PNTFS_ATTR_RECORD VAR_0)
{
    PSTANDARD_INFORMATION VAR_1;

    FUNC_0("  $STANDARD_INFORMATION ");



    VAR_1 = (PSTANDARD_INFORMATION)((ULONG_PTR)VAR_0 + VAR_0->Resident.ValueOffset);
    FUNC_0(" '%x' ", VAR_1->FileAttribute);
}
