
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int length; TYPE_3__* value; } ;
struct TYPE_13__ {int length; TYPE_3__* elements; } ;
struct TYPE_15__ {size_t ndx; TYPE_1__ prefix; } ;
struct TYPE_14__ {size_t PrefixCount; TYPE_3__* pPrefixEntry; } ;
typedef TYPE_2__ SCHEMA_PREFIX_TABLE ;
typedef TYPE_3__ PrefixTableEntry ;
typedef TYPE_3__* PBYTE ;
typedef TYPE_5__ OssEncodedOID ;
typedef size_t DWORD ;
typedef size_t BOOL ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;
 size_t VAR_1 ;

DWORD FUNC_4(SCHEMA_PREFIX_TABLE *VAR_2, OssEncodedOID *VAR_3, DWORD *VAR_4, BOOL VAR_5)
{
 BOOL VAR_6 = VAR_0;
 DWORD VAR_7;
 PrefixTableEntry *VAR_8;

 for(VAR_7 = 0; VAR_7 < VAR_2->PrefixCount; VAR_7++)
 {
  if(VAR_2->pPrefixEntry[VAR_7].prefix.length == VAR_3->length)
  {
   if(FUNC_3(VAR_2->pPrefixEntry[VAR_7].prefix.elements, VAR_3->value, VAR_3->length))
   {
    VAR_6 = VAR_1;
    *VAR_4 = VAR_2->pPrefixEntry[VAR_7].ndx;
    break;
   }
  }
 }
 if(!VAR_6 && VAR_5)
 {
  *VAR_4 = VAR_2->PrefixCount;
  if((VAR_8 = (PrefixTableEntry *) FUNC_0(sizeof(PrefixTableEntry) * ((*VAR_4) + 1))))
  {
   FUNC_2(VAR_8, VAR_2->pPrefixEntry, sizeof(PrefixTableEntry) * (*VAR_4));
   VAR_8[*VAR_4].ndx = *VAR_4;
   VAR_8[*VAR_4].prefix.length = VAR_3->length;
   if((VAR_8[*VAR_4].prefix.elements = (PBYTE) FUNC_0(VAR_3->length)))
   {
    FUNC_2(VAR_8[*VAR_4].prefix.elements, VAR_3->value, VAR_3->length);
    if(VAR_2->pPrefixEntry)
     FUNC_1(VAR_2->pPrefixEntry);
    VAR_2->pPrefixEntry = VAR_8;
    VAR_2->PrefixCount++;
    VAR_6 = VAR_1;
   }
  }
 }
 return VAR_6;
}
