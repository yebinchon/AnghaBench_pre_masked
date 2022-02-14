
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwValueLen; scalar_t__ lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int *,int*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

HRESULT FUNC_2(PTHEME_PROPERTY VAR_2, int *VAR_3)
{
    if(!FUNC_0(VAR_2->lpValue, (VAR_2->lpValue + VAR_2->dwValueLen), ((void*)0), VAR_3)) {
        FUNC_1("Could not parse int property\n");
        return VAR_0;
    }
    return VAR_1;
}
