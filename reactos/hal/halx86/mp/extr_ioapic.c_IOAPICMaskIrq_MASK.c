
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_4__ {int logical_dest; } ;
struct TYPE_5__ {TYPE_1__ logical; } ;
struct TYPE_6__ {int mask; TYPE_2__ dest; } ;
typedef int * PULONG ;
typedef TYPE_3__ IOAPIC_ROUTE_ENTRY ;


 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_2 () ;

VOID FUNC_3(ULONG VAR_2)
{
   IOAPIC_ROUTE_ENTRY VAR_3;
   ULONG VAR_4 = VAR_1[VAR_2];

   *(((PULONG)&VAR_3)+0) = FUNC_0(VAR_4, VAR_0+2*VAR_2);
   *(((PULONG)&VAR_3)+1) = FUNC_0(VAR_4, VAR_0+2*VAR_2+1);
   VAR_3.dest.logical.logical_dest &= ~(1 << FUNC_2());
   if (VAR_3.dest.logical.logical_dest == 0)
   {
      VAR_3.mask = 1;
   }
   FUNC_1(VAR_4, VAR_0+2*VAR_2+1, *(((PULONG)&VAR_3)+1));
   FUNC_1(VAR_4, VAR_0+2*VAR_2, *(((PULONG)&VAR_3)+0));
}
