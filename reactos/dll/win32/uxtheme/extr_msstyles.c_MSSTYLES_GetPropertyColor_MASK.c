
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef scalar_t__ LPCWSTR ;
typedef int HRESULT ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,int*) ;
 int FUNC_1 (int,int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

HRESULT FUNC_3(PTHEME_PROPERTY VAR_2, COLORREF *VAR_3)
{
    LPCWSTR VAR_4;
    LPCWSTR VAR_5;
    int VAR_6, VAR_7, VAR_8;

    VAR_5 = VAR_2->lpValue;
    VAR_4 = VAR_2->lpValue + VAR_2->dwValueLen;

    if(!FUNC_0(VAR_5, VAR_4, &VAR_5, &VAR_6)) {
        FUNC_2("Could not parse color property\n");
        return VAR_0;
    }
    if(!FUNC_0(VAR_5, VAR_4, &VAR_5, &VAR_7)) {
        FUNC_2("Could not parse color property\n");
        return VAR_0;
    }
    if(!FUNC_0(VAR_5, VAR_4, &VAR_5, &VAR_8)) {
        FUNC_2("Could not parse color property\n");
        return VAR_0;
    }
    *VAR_3 = FUNC_1(VAR_6,VAR_7,VAR_8);
    return VAR_1;
}
