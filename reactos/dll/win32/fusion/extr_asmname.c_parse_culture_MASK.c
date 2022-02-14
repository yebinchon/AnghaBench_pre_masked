
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {void* culture; } ;
typedef int const* LPCWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 void* FUNC_1 (int const*) ;

__attribute__((used)) static HRESULT FUNC_2(IAssemblyNameImpl *VAR_1, LPCWSTR VAR_2)
{
    static const WCHAR VAR_3[] = {0};

    if (FUNC_0(VAR_2) == 2)
        VAR_1->culture = FUNC_1(VAR_2);
    else
        VAR_1->culture = FUNC_1(VAR_3);

    return VAR_0;
}
