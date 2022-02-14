
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_4__ {int ValueLength; scalar_t__ ValueOffset; } ;
struct TYPE_5__ {TYPE_1__ Resident; } ;
typedef scalar_t__ PWCHAR ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static
VOID
FUNC_1(PNTFS_ATTR_RECORD VAR_0)
{
    PWCHAR VAR_1;

    FUNC_0("  $VOLUME_NAME ");



    VAR_1 = (PWCHAR)((ULONG_PTR)VAR_0 + VAR_0->Resident.ValueOffset);
    FUNC_0(" '%.*S' ", VAR_0->Resident.ValueLength / sizeof(WCHAR), VAR_1);
}
