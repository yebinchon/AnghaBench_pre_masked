
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpValue; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_0(PTHEME_PROPERTY VAR_3, BOOL *VAR_4)
{
    *VAR_4 = VAR_0;
    if(*VAR_3->lpValue == 't' || *VAR_3->lpValue == 'T')
        *VAR_4 = VAR_2;
    return VAR_1;
}
