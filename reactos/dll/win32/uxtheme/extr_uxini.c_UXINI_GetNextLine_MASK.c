
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* lpCurLoc; } ;
typedef TYPE_1__* PUXINI_FILE ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static LPCWSTR FUNC_2(PUXINI_FILE VAR_0, DWORD *VAR_1)
{
    LPCWSTR VAR_2;
    LPCWSTR VAR_3;
    DWORD VAR_4;
    do {
        if(FUNC_0(VAR_0)) return ((void*)0);

        while(!FUNC_0(VAR_0) && (FUNC_1(*VAR_0->lpCurLoc) || *VAR_0->lpCurLoc == '\n')) VAR_0->lpCurLoc++;
        VAR_3 = VAR_0->lpCurLoc;
        VAR_2 = VAR_0->lpCurLoc;
        while(!FUNC_0(VAR_0) && *VAR_0->lpCurLoc != '\n' && *VAR_0->lpCurLoc != ';') VAR_2 = ++VAR_0->lpCurLoc;

        if(*VAR_0->lpCurLoc == ';')
            while(!FUNC_0(VAR_0) && *VAR_0->lpCurLoc != '\n') VAR_0->lpCurLoc++;
        VAR_4 = (VAR_2 - VAR_3);
        if(*VAR_3 != ';' && VAR_4 == 0)
            return ((void*)0);
    } while(*VAR_3 == ';');

    while(FUNC_1(VAR_3[VAR_4-1])) VAR_4--;
    *VAR_1 = VAR_4;

    return VAR_3;
}
