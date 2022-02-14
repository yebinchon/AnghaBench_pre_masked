
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int * wszWebCharset; int * wszHeaderCharset; int * wszBodyCharset; } ;
typedef int MIMECSETINFO ;
typedef TYPE_1__ MIMECPINFO ;
typedef int IMultiLanguage ;
typedef int HRESULT ;
typedef int CHARSETTYPE ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_6(UINT VAR_0, CHARSETTYPE VAR_1, MIMECSETINFO *VAR_2)
{
    MIMECPINFO VAR_3;
    WCHAR *VAR_4;
    HRESULT VAR_5;
    IMultiLanguage *VAR_6;

    VAR_5 = FUNC_5(VAR_0, &VAR_3);
    if(FUNC_0(VAR_5)) return VAR_5;

    switch(VAR_1)
    {
    case 130:
        VAR_4 = VAR_3.wszBodyCharset;
        break;
    case 129:
        VAR_4 = VAR_3.wszHeaderCharset;
        break;
    case 128:
        VAR_4 = VAR_3.wszWebCharset;
        break;
    }

    VAR_5 = FUNC_4(&VAR_6);

    if(FUNC_3(VAR_5))
    {
        VAR_5 = FUNC_1(VAR_6, VAR_4, VAR_2);
        FUNC_2(VAR_6);
    }
    return VAR_5;
}
