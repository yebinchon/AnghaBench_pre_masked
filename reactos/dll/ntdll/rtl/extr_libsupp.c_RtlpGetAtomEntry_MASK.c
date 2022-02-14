
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int * AtomEntry; } ;
struct TYPE_4__ {int RtlHandleTable; } ;
typedef int PRTL_HANDLE_TABLE_ENTRY ;
typedef int * PRTL_ATOM_TABLE_ENTRY ;
typedef TYPE_1__* PRTL_ATOM_TABLE ;
typedef TYPE_2__* PRTL_ATOM_HANDLE ;


 scalar_t__ FUNC_0 (int *,int ,int *) ;

PRTL_ATOM_TABLE_ENTRY
FUNC_1(PRTL_ATOM_TABLE VAR_0, ULONG VAR_1)
{
   PRTL_HANDLE_TABLE_ENTRY VAR_2;

   if (FUNC_0(&VAR_0->RtlHandleTable,
                             VAR_1,
                             &VAR_2))
   {
      PRTL_ATOM_HANDLE VAR_3 = (PRTL_ATOM_HANDLE)VAR_2;

      return VAR_3->AtomEntry;
   }

   return ((void*)0);
}
