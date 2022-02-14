
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsdisp_t ;
typedef int WCHAR ;
struct TYPE_3__ {int length; } ;
typedef int DWORD ;
typedef TYPE_1__ ArrayInstance ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(jsdisp_t *VAR_0, const WCHAR *VAR_1)
{
    ArrayInstance *VAR_2 = FUNC_0(VAR_0);
    const WCHAR *VAR_3 = VAR_1;
    DWORD VAR_4 = 0;

    if(!FUNC_1(*VAR_3))
        return;

    while(*VAR_3 && FUNC_1(*VAR_3)) {
        VAR_4 = VAR_4*10 + (*VAR_3-'0');
        VAR_3++;
    }

    if(*VAR_3)
        return;

    if(VAR_4 >= VAR_2->length)
        VAR_2->length = VAR_4+1;
}
