
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int valCount; TYPE_1__* pAVal; } ;
struct TYPE_4__ {int valLen; int * pVal; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef int * PVOID ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef TYPE_2__ ATTRVALBLOCK ;
typedef int ATTRBLOCK ;


 TYPE_2__* FUNC_0 (int *,int *,int ) ;

PVOID FUNC_1(SCHEMA_PREFIX_TABLE *VAR_0, ATTRBLOCK *VAR_1, LPCSTR VAR_2, PVOID VAR_3, DWORD *VAR_4)
{
 PVOID VAR_5 = ((void*)0);
 ATTRVALBLOCK *VAR_6;

 if(VAR_3)
  *(PVOID *)VAR_3 = ((void*)0);
 if(VAR_4)
  *VAR_4 = 0;

 if((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2)))
 {
  if(VAR_6->valCount == 1)
  {
   VAR_5 = VAR_6->pAVal[0].pVal;
   if(VAR_3)
    *(PVOID *)VAR_3 = VAR_5;
   if(VAR_4)
    *VAR_4 = VAR_6->pAVal[0].valLen;
  }
 }
 return VAR_5;
}
