
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {size_t nVerbs; int ** aVerbs; int lpTable; } ;
typedef int * LPCWSTR ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static LPCWSTR FUNC_1(UINT VAR_2, LPCWSTR VAR_3)
{
    UINT VAR_4;

    if (VAR_2 >= VAR_0 || !VAR_1[VAR_2].lpTable)
 return ((void*)0);





    for (VAR_4 = 0; VAR_4 < VAR_1[VAR_2].nVerbs; VAR_4++) {
 if (FUNC_0(VAR_1[VAR_2].aVerbs[VAR_4], VAR_3) == 0)
     return VAR_1[VAR_2].aVerbs[VAR_4];
    }

    return ((void*)0);
}
