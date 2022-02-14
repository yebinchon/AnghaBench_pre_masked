
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_13__ {int PrefixCount; TYPE_3__* pPrefixEntry; } ;
struct TYPE_8__ {int length; scalar_t__ elements; } ;
struct TYPE_12__ {int ndx; TYPE_1__ prefix; } ;
struct TYPE_11__ {size_t PrefixCount; TYPE_5__* pPrefixEntry; } ;
struct TYPE_9__ {int length; int elements; } ;
struct TYPE_10__ {int ndx; TYPE_2__ prefix; } ;
typedef TYPE_4__ SCHEMA_PREFIX_TABLE ;
typedef TYPE_5__ PrefixTableEntry ;
typedef scalar_t__ PBYTE ;
typedef size_t DWORD ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 TYPE_7__ VAR_0 ;

VOID FUNC_2(SCHEMA_PREFIX_TABLE* VAR_1)
{
 DWORD VAR_2;
 VAR_1->pPrefixEntry = (PrefixTableEntry*) FUNC_0(sizeof(PrefixTableEntry) * VAR_0.PrefixCount);
 if (VAR_1->pPrefixEntry)
 {
  for(VAR_2 = 0; VAR_2 < VAR_0.PrefixCount; VAR_2++)
  {
   VAR_1->pPrefixEntry[VAR_2].prefix.elements = (PBYTE) FUNC_0(VAR_0.pPrefixEntry[VAR_2].prefix.length);
   if (VAR_1->pPrefixEntry[VAR_2].prefix.elements)
   {
    FUNC_1(VAR_1->pPrefixEntry[VAR_2].prefix.elements, VAR_0.pPrefixEntry[VAR_2].prefix.elements, VAR_0.pPrefixEntry[VAR_2].prefix.length);
    VAR_1->pPrefixEntry[VAR_2].prefix.length = VAR_0.pPrefixEntry[VAR_2].prefix.length;
    VAR_1->pPrefixEntry[VAR_2].ndx = VAR_0.pPrefixEntry[VAR_2].ndx;
   }
  }
  VAR_1->PrefixCount = VAR_0.PrefixCount;
 }
}
