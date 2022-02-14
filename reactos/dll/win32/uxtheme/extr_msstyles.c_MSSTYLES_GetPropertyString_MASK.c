
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwValueLen; int lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef int LPWSTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;

HRESULT FUNC_2(PTHEME_PROPERTY VAR_1, LPWSTR VAR_2, int VAR_3)
{
    FUNC_0(VAR_2, VAR_1->lpValue, FUNC_1(VAR_1->dwValueLen+1, VAR_3));
    return VAR_0;
}
