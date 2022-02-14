
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ attrTyp; int AttrVal; } ;
struct TYPE_4__ {size_t attrCount; TYPE_2__* pAttr; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef int LPCSTR ;
typedef size_t DWORD ;
typedef int ATTRVALBLOCK ;
typedef scalar_t__ ATTRTYP ;
typedef TYPE_1__ ATTRBLOCK ;
typedef TYPE_2__ ATTR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*,int ) ;

ATTRVALBLOCK * FUNC_2(SCHEMA_PREFIX_TABLE *VAR_1, ATTRBLOCK *VAR_2, LPCSTR VAR_3)
{
 ATTRVALBLOCK *VAR_4 = ((void*)0);
 DWORD VAR_5;
 ATTR *VAR_6;
 ATTRTYP VAR_7;
 if(FUNC_1(VAR_1, VAR_3, &VAR_7, VAR_0))
 {
  for(VAR_5 = 0; VAR_5 < VAR_2->attrCount; VAR_5++)
  {
   VAR_6 = &VAR_2->pAttr[VAR_5];
   if(VAR_6->attrTyp == VAR_7)
   {
    VAR_4 = &VAR_6->AttrVal;
    break;
   }
  }
 }
 else FUNC_0(L"Unable to get an ATTRTYP for %S\n", VAR_3);
 return VAR_4;
}
