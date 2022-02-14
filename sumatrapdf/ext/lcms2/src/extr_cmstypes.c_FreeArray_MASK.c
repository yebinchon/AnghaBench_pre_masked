
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsContext ;
struct TYPE_5__ {int * Offsets; } ;
struct TYPE_4__ {TYPE_2__ DisplayValue; TYPE_2__ DisplayName; TYPE_2__ Value; TYPE_2__ Name; } ;
typedef TYPE_1__ _cmsDICarray ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, _cmsDICarray* VAR_1)
{
    if (VAR_1 ->Name.Offsets != ((void*)0)) FUNC_0(VAR_0, &VAR_1->Name);
    if (VAR_1 ->Value.Offsets != ((void*)0)) FUNC_0(VAR_0, &VAR_1 ->Value);
    if (VAR_1 ->DisplayName.Offsets != ((void*)0)) FUNC_0(VAR_0, &VAR_1->DisplayName);
    if (VAR_1 ->DisplayValue.Offsets != ((void*)0)) FUNC_0(VAR_0, &VAR_1 ->DisplayValue);
}
