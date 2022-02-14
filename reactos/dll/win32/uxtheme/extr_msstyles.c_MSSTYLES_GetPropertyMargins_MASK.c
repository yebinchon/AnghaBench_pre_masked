
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cyBottomHeight; int cyTopHeight; int cxRightWidth; int cxLeftWidth; } ;
struct TYPE_5__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
typedef int RECT ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef TYPE_2__ MARGINS ;
typedef scalar_t__ LPCWSTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

HRESULT FUNC_2(PTHEME_PROPERTY VAR_2, RECT *VAR_3, MARGINS *VAR_4)
{
    LPCWSTR VAR_5 = VAR_2->lpValue;
    LPCWSTR VAR_6 = VAR_2->lpValue + VAR_2->dwValueLen;

    FUNC_0(VAR_5, VAR_6, &VAR_5, &VAR_4->cxLeftWidth);
    FUNC_0(VAR_5, VAR_6, &VAR_5, &VAR_4->cxRightWidth);
    FUNC_0(VAR_5, VAR_6, &VAR_5, &VAR_4->cyTopHeight);
    if(!FUNC_0(VAR_5, VAR_6, &VAR_5, &VAR_4->cyBottomHeight)) {
        FUNC_1("Could not parse margins property\n");
        return VAR_0;
    }
    return VAR_1;
}
