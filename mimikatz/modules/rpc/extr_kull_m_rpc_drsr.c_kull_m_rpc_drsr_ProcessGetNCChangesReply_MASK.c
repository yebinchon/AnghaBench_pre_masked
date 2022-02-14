
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pVal; } ;
struct TYPE_10__ {size_t attrCount; TYPE_2__* pAttr; } ;
struct TYPE_11__ {TYPE_3__ AttrBlock; } ;
struct TYPE_12__ {TYPE_4__ Entinf; struct TYPE_12__* pNextEntInf; } ;
struct TYPE_8__ {size_t valCount; TYPE_6__* pAVal; } ;
struct TYPE_9__ {scalar_t__ attrTyp; TYPE_1__ AttrVal; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef TYPE_5__ REPLENTINFLIST ;
typedef size_t DWORD ;
typedef int BOOL ;
typedef scalar_t__ ATTRTYP ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 scalar_t__* VAR_2 ;

BOOL FUNC_4(SCHEMA_PREFIX_TABLE *VAR_3, REPLENTINFLIST *VAR_4)
{
 ATTRTYP VAR_5[FUNC_0(VAR_2)];
 REPLENTINFLIST * VAR_6, *VAR_7 = VAR_4;
 DWORD VAR_8, VAR_9, VAR_10;

 for(VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
 {
  if(!FUNC_2(VAR_3, VAR_2[VAR_8], &VAR_5[VAR_8], VAR_0))
  {
   FUNC_1(L"Unable to MakeAttid for %S\n", VAR_2[VAR_8]);
   return VAR_0;
  }
 }

 while((VAR_6 = VAR_7))
 {
  VAR_7 = VAR_6->pNextEntInf;
  if(VAR_6->Entinf.AttrBlock.pAttr)
  {
   for(VAR_8 = 0; VAR_8 < VAR_6->Entinf.AttrBlock.attrCount; VAR_8++)
   {
    for(VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++)
    {
     if(VAR_5[VAR_9] == VAR_6->Entinf.AttrBlock.pAttr[VAR_8].attrTyp)
     {
      if(VAR_6->Entinf.AttrBlock.pAttr[VAR_8].AttrVal.pAVal)
       for(VAR_10 = 0; VAR_10 < VAR_6->Entinf.AttrBlock.pAttr[VAR_8].AttrVal.valCount; VAR_10++)
        if(VAR_6->Entinf.AttrBlock.pAttr[VAR_8].AttrVal.pAVal[VAR_10].pVal)
         if(!FUNC_3(&VAR_6->Entinf.AttrBlock.pAttr[VAR_8].AttrVal.pAVal[VAR_10], ((void*)0)))
          return VAR_0;
      break;
     }
    }
   }
  }
 }
 return VAR_1;
}
