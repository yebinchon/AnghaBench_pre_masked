
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_6__ {int RtlHandleTable; } ;
struct TYPE_5__ {scalar_t__ HandleIndex; } ;
typedef int PRTL_HANDLE_TABLE_ENTRY ;
typedef TYPE_1__* PRTL_ATOM_TABLE_ENTRY ;
typedef TYPE_2__* PRTL_ATOM_TABLE ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;

VOID
FUNC_2(PRTL_ATOM_TABLE VAR_0, PRTL_ATOM_TABLE_ENTRY VAR_1)
{
   PRTL_HANDLE_TABLE_ENTRY VAR_2;

   if (FUNC_1(&VAR_0->RtlHandleTable,
                             (ULONG)VAR_1->HandleIndex,
                             &VAR_2))
   {
      FUNC_0(&VAR_0->RtlHandleTable,
                    VAR_2);
   }
}
