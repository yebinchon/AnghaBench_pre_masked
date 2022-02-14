
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int pekind; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(IAssemblyNameImpl *VAR_6, LPCWSTR VAR_7)
{
    static const WCHAR VAR_8[] = {'m','s','i','l',0};
    static const WCHAR VAR_9[] = {'x','8','6',0};
    static const WCHAR VAR_10[] = {'i','a','6','4',0};
    static const WCHAR VAR_11[] = {'a','m','d','6','4',0};

    if (!FUNC_1(VAR_7, VAR_8))
        VAR_6->pekind = VAR_5;
    else if (!FUNC_1(VAR_7, VAR_9))
        VAR_6->pekind = VAR_3;
    else if (!FUNC_1(VAR_7, VAR_10))
        VAR_6->pekind = VAR_4;
    else if (!FUNC_1(VAR_7, VAR_11))
        VAR_6->pekind = VAR_2;
    else
    {
        FUNC_0("unrecognized architecture: %s\n", FUNC_2(VAR_7));
        return VAR_0;
    }

    return VAR_1;
}
