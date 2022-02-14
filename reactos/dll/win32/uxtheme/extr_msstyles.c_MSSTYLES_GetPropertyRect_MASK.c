
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
struct TYPE_5__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PTHEME_PROPERTY ;
typedef scalar_t__ LPCWSTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

HRESULT FUNC_2(PTHEME_PROPERTY VAR_2, RECT *VAR_3)
{
    LPCWSTR VAR_4 = VAR_2->lpValue;
    LPCWSTR VAR_5 = VAR_2->lpValue + VAR_2->dwValueLen;

    FUNC_0(VAR_4, VAR_5, &VAR_4, &VAR_3->left);
    FUNC_0(VAR_4, VAR_5, &VAR_4, &VAR_3->top);
    FUNC_0(VAR_4, VAR_5, &VAR_4, &VAR_3->right);
    if(!FUNC_0(VAR_4, VAR_5, &VAR_4, &VAR_3->bottom)) {
        FUNC_1("Could not parse rect property\n");
        return VAR_0;
    }
    return VAR_1;
}
