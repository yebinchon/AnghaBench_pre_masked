
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UXINI_FILE ;
struct TYPE_4__ {void* lpEnd; void* lpCurLoc; void* lpIni; } ;
typedef TYPE_1__* PUXINI_FILE ;
typedef void* LPCWSTR ;
typedef int HRSRC ;
typedef int HMODULE ;
typedef int DWORD ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (void*) ;
 int VAR_0 ;

PUXINI_FILE FUNC_7(HMODULE VAR_1, LPCWSTR VAR_2) {
    HRSRC VAR_3;
    LPCWSTR VAR_4 = ((void*)0);
    PUXINI_FILE VAR_5;
    DWORD VAR_6;

    FUNC_5("Loading resource INI %s\n", FUNC_6(VAR_2));

    if((VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0))) {
        if(!(VAR_4 = FUNC_3(VAR_1, VAR_3))) {
            FUNC_5("%s resource not found\n", FUNC_6(VAR_2));
            return ((void*)0);
        }
    }

    VAR_6 = FUNC_4(VAR_1, VAR_3) / sizeof(WCHAR);
    VAR_5 = FUNC_2(FUNC_1(), 0, sizeof(UXINI_FILE));
    VAR_5->lpIni = VAR_4;
    VAR_5->lpCurLoc = VAR_4;
    VAR_5->lpEnd = VAR_4 + VAR_6;
    return VAR_5;
}
