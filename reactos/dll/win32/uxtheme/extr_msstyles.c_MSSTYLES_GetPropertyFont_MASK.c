
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef scalar_t__ LPCWSTR ;
typedef int LOGFONTW ;
typedef int HRESULT ;
typedef int HDC ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int FUNC_1 (int *,int) ;

HRESULT FUNC_2(PTHEME_PROPERTY VAR_0, HDC VAR_1, LOGFONTW *VAR_2)
{
    LPCWSTR VAR_3 = VAR_0->lpValue;
    LPCWSTR VAR_4 = VAR_0->lpValue + VAR_0->dwValueLen;
    HRESULT VAR_5;

    FUNC_1(VAR_2, sizeof(LOGFONTW));
    VAR_5 = FUNC_0 (VAR_3, VAR_4, &VAR_3, VAR_2);

    return VAR_5;
}
