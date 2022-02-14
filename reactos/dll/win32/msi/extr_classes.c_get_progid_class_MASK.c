
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__ const* Parent; int const* Class; } ;
typedef TYPE_1__ const MSIPROGID ;
typedef int MSICLASS ;



__attribute__((used)) static const MSICLASS *FUNC_0( const MSIPROGID *VAR_0 )
{
    while (VAR_0)
    {
        if (VAR_0->Parent) VAR_0 = VAR_0->Parent;
        if (VAR_0->Class) return VAR_0->Class;
        if (!VAR_0->Parent || VAR_0->Parent == VAR_0) break;
    }
    return ((void*)0);
}
