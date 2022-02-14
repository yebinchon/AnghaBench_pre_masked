
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef void* ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {void* SegGs; void* SegEs; void* SegDs; int SegCs; void* HardwareSegSs; scalar_t__ HardwareEsp; void* Eip; void* Ebx; void* Esi; void* Edi; void* Ebp; } ;
struct TYPE_6__ {TYPE_1__ Tf; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__* PKDB_KTRAP_FRAME ;
typedef int KDB_KTRAP_FRAME ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static VOID
FUNC_1(
    PVOID VAR_2,
    PKDB_KTRAP_FRAME VAR_3)
{
    ULONG_PTR *VAR_4;

    FUNC_0(VAR_3, sizeof(KDB_KTRAP_FRAME));
    VAR_4 = (ULONG_PTR *) VAR_2;
}
