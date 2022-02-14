
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pGetPropValue ) (int *,int const*,int *) ;} ;
typedef int PROPVARIANT ;
typedef int PROPERTYKEY ;
typedef int HRESULT ;
typedef int GUID ;
typedef int EDataFlow ;


 int VAR_0 ;
 int FUNC_0 (int *,int const,int const*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *,int const*,int *) ;

__attribute__((used)) static HRESULT FUNC_4(GUID *VAR_2, const EDataFlow VAR_3, const PROPERTYKEY *VAR_4)
{
    HRESULT VAR_5;
    PROPVARIANT VAR_6;

    if (!VAR_1.pGetPropValue)
        return VAR_0;

    VAR_5 = VAR_1.pGetPropValue(VAR_2, VAR_4, &VAR_6);

    if (FUNC_2(VAR_5))
    {
        FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);
        FUNC_1(&VAR_6);
    }

    return VAR_5;
}
