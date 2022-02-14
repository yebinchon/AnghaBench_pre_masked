
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int versize; int * version; } ;
typedef char* LPWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static HRESULT FUNC_2(IAssemblyNameImpl *VAR_1, LPWSTR VAR_2)
{
    LPWSTR VAR_3, VAR_4;
    int VAR_5;

    for (VAR_5 = 0, VAR_3 = VAR_2; VAR_5 < 4; VAR_5++)
    {
        if (!*VAR_3)
            return VAR_0;

        VAR_4 = FUNC_0(VAR_3, '.');

        if (VAR_4) *VAR_4 = '\0';
        VAR_1->version[VAR_5] = FUNC_1(VAR_3, ((void*)0), 10);
        VAR_1->versize++;

        if (!VAR_4 && VAR_5 < 3)
            return VAR_0;

        VAR_3 = VAR_4 + 1;
    }

    return VAR_0;
}
