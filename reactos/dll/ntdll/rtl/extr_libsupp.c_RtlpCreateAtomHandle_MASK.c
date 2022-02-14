
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* USHORT ;
typedef int ULONG ;
struct TYPE_7__ {void* Flags; } ;
struct TYPE_10__ {TYPE_1__ Handle; TYPE_2__* AtomEntry; } ;
struct TYPE_9__ {int RtlHandleTable; } ;
struct TYPE_8__ {void* Atom; void* HandleIndex; } ;
typedef int * PRTL_HANDLE_TABLE_ENTRY ;
typedef TYPE_2__* PRTL_ATOM_TABLE_ENTRY ;
typedef TYPE_3__* PRTL_ATOM_TABLE ;
typedef TYPE_4__* PRTL_ATOM_HANDLE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 void* VAR_1 ;
 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;

BOOLEAN
FUNC_2(PRTL_ATOM_TABLE VAR_3, PRTL_ATOM_TABLE_ENTRY VAR_4)
{
   ULONG VAR_5;
   PRTL_HANDLE_TABLE_ENTRY VAR_6;

   VAR_6 = FUNC_0(&VAR_3->RtlHandleTable,
                                 &VAR_5);
   if (VAR_6 != ((void*)0))
   {
      PRTL_ATOM_HANDLE VAR_7 = (PRTL_ATOM_HANDLE)VAR_6;


      if (VAR_5 < 0xC000)
      {
         VAR_4->HandleIndex = (USHORT)VAR_5;
         VAR_4->Atom = 0xC000 + (USHORT)VAR_5;

         VAR_7->AtomEntry = VAR_4;
         VAR_7->Handle.Flags = VAR_1;

         return VAR_2;
      }
      else
      {

         VAR_7->Handle.Flags = VAR_1;

         FUNC_1(&VAR_3->RtlHandleTable,
                       VAR_6);
      }
   }

   return VAR_0;
}
