
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t const id; char* name; } ;
typedef char* PCWSTR ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

PCWSTR FUNC_1(const DWORD VAR_1)
{
 DWORD VAR_2;
 if(!VAR_1)
  return &L"PROV_cng" [ 5];
 for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if(VAR_0[VAR_2].id == VAR_1)
   return VAR_0[VAR_2].name + 5;
 return ((void*)0);
}
