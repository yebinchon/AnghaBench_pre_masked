
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int mask; } ;
typedef int * PULONG ;
typedef TYPE_1__ IOAPIC_ROUTE_ENTRY ;
typedef int Entry ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static VOID
FUNC_3(ULONG VAR_1, ULONG VAR_2)
{
   IOAPIC_ROUTE_ENTRY VAR_3;

   FUNC_0("IOAPICClearPin(Apic %d, Pin %d\n", VAR_1, VAR_2);



   FUNC_2(&VAR_3, 0, sizeof(VAR_3));
   VAR_3.mask = 1;

   FUNC_1(VAR_1, VAR_0 + 2 * VAR_2, *(((PULONG)&VAR_3) + 0));
   FUNC_1(VAR_1, VAR_0 + 1 + 2 * VAR_2, *(((PULONG)&VAR_3) + 1));
}
