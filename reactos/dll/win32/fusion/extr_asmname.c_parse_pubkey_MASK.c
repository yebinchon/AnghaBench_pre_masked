
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int* pubkey; int haspubkey; } ;
typedef int * LPCWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(IAssemblyNameImpl *VAR_5, LPCWSTR VAR_6)
{
    int VAR_7;
    BYTE VAR_8;
    static const WCHAR VAR_9[] = {'n','u','l','l',0};

    if(FUNC_2(VAR_6, VAR_9) == 0)
        return VAR_2;

    if (FUNC_3(VAR_6) < VAR_0)
        return VAR_1;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        if (!FUNC_1(VAR_6[VAR_7]))
            return VAR_1;

    VAR_5->haspubkey = VAR_4;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 += 2)
    {
        VAR_8 = (FUNC_0(VAR_6[VAR_7]) << 4) + FUNC_0(VAR_6[VAR_7 + 1]);
        VAR_5->pubkey[VAR_7 / 2] = VAR_8;
    }

    return VAR_3;
}
