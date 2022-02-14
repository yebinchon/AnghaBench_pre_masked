
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* elements; } ;
struct TYPE_7__ {TYPE_1__ prefix; } ;
struct TYPE_6__ {size_t PrefixCount; TYPE_4__* pPrefixEntry; } ;
typedef TYPE_2__ SCHEMA_PREFIX_TABLE ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(SCHEMA_PREFIX_TABLE *VAR_0)
{
 DWORD VAR_1;
 if(VAR_0)
 {
  if(VAR_0->pPrefixEntry)
  {
   for(VAR_1 = 0; VAR_1 < VAR_0->PrefixCount; VAR_1++)
    if(VAR_0->pPrefixEntry[VAR_1].prefix.elements)
     FUNC_0(VAR_0->pPrefixEntry[VAR_1].prefix.elements);
   FUNC_0(VAR_0->pPrefixEntry);
  }
 }
}
