
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iValueCount; int * iValues; } ;
struct TYPE_5__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef scalar_t__ LPCWSTR ;
typedef TYPE_2__ INTLIST ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int VAR_1 ;

HRESULT FUNC_1(PTHEME_PROPERTY VAR_2, INTLIST *VAR_3)
{
    int VAR_4;
    LPCWSTR VAR_5 = VAR_2->lpValue;
    LPCWSTR VAR_6 = VAR_2->lpValue + VAR_2->dwValueLen;

    for(VAR_4=0; VAR_4 < VAR_0; VAR_4++) {
        if(!FUNC_0(VAR_5, VAR_6, &VAR_5, &VAR_3->iValues[VAR_4]))
            break;
    }
    VAR_3->iValueCount = VAR_4;
    return VAR_1;
}
