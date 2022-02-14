
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VTableFixup ;
typedef int ULONG ;
struct TYPE_6__ {TYPE_1__* corhdr; } ;
struct TYPE_5__ {int VTableFixups; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ ASSEMBLY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,void**) ;

HRESULT FUNC_1(ASSEMBLY *VAR_1, VTableFixup **VAR_2, DWORD *VAR_3)
{
    ULONG VAR_4;

    VAR_4 = FUNC_0(VAR_1, &VAR_1->corhdr->VTableFixups, (void**)VAR_2);
    *VAR_3 = VAR_4 / sizeof(VTableFixup);

    return VAR_0;
}
