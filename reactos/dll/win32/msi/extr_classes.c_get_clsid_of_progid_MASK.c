
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__ const* Parent; TYPE_1__* Class; } ;
struct TYPE_4__ {int * clsid; } ;
typedef TYPE_2__ const MSIPROGID ;
typedef int * LPCWSTR ;



__attribute__((used)) static LPCWSTR FUNC_0( const MSIPROGID *VAR_0 )
{
    while (VAR_0)
    {
        if (VAR_0->Class)
            return VAR_0->Class->clsid;
        if (VAR_0->Parent == VAR_0)
            break;
        VAR_0 = VAR_0->Parent;
    }
    return ((void*)0);
}
