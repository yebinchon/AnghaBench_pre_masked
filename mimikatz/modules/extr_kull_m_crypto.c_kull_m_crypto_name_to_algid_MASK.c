
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; scalar_t__ name; } ;
typedef scalar_t__ PCWSTR ;
typedef size_t DWORD ;
typedef int ALG_ID ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_0 ;

ALG_ID FUNC_2(PCWSTR VAR_1)
{
 DWORD VAR_2;
 if(VAR_1)
  for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
   if((FUNC_1(VAR_1, VAR_0[VAR_2].name) == 0) || (FUNC_1(VAR_1, VAR_0[VAR_2].name + 5) == 0))
    return VAR_0[VAR_2].id;
 return 0;
}
