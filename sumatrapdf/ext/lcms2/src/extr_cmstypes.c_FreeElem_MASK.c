
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsContext ;
struct TYPE_3__ {int * Sizes; int * Offsets; } ;
typedef TYPE_1__ _cmsDICelem ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, _cmsDICelem* VAR_1)
{
    if (VAR_1 ->Offsets != ((void*)0)) FUNC_0(VAR_0, VAR_1 -> Offsets);
    if (VAR_1 ->Sizes != ((void*)0)) FUNC_0(VAR_0, VAR_1 -> Sizes);
    VAR_1->Offsets = VAR_1 ->Sizes = ((void*)0);
}
