
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef TYPE_2__ POINT ;
typedef scalar_t__ LPCWSTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,int*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

HRESULT FUNC_2(PTHEME_PROPERTY VAR_2, POINT *VAR_3)
{
    int VAR_4,VAR_5;
    LPCWSTR VAR_6 = VAR_2->lpValue;
    LPCWSTR VAR_7 = VAR_2->lpValue + VAR_2->dwValueLen;

    if(!FUNC_0(VAR_6, VAR_7, &VAR_6, &VAR_4)) {
        FUNC_1("Could not parse position property\n");
        return VAR_0;
    }
    if(!FUNC_0(VAR_6, VAR_7, &VAR_6, &VAR_5)) {
        FUNC_1("Could not parse position property\n");
        return VAR_0;
    }
    VAR_3->x = VAR_4;
    VAR_3->y = VAR_5;
    return VAR_1;
}
