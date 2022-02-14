
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwFileVersionLS; int dwFileVersionMS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int USHORT ;
typedef void* LPVOID ;
typedef int LPSTR ;
typedef int * LPDWORD ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ,char*,void**,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,...) ;

__attribute__((used)) static void FUNC_10(LPSTR VAR_1, LPSTR *VAR_2, LPDWORD VAR_3,
                             LPSTR *VAR_4, LPDWORD VAR_5)
{
    LPSTR VAR_6;
    VS_FIXEDFILEINFO *VAR_7;
    DWORD VAR_8 = FUNC_1(VAR_1, ((void*)0));
    USHORT *VAR_9;

    VAR_6 = FUNC_4(FUNC_2(), 0, VAR_8);
    FUNC_0(VAR_1, 0, VAR_8, VAR_6);

    FUNC_7(VAR_6, "\\", (LPVOID *)&VAR_7, &VAR_8);
    *VAR_2 = FUNC_4(FUNC_2(), 0, VAR_0);
    FUNC_9(*VAR_2, "%d.%d.%d.%d", FUNC_3(VAR_7->dwFileVersionMS),
            FUNC_6(VAR_7->dwFileVersionMS), FUNC_3(VAR_7->dwFileVersionLS),
            FUNC_6(VAR_7->dwFileVersionLS));
    *VAR_3 = FUNC_8(*VAR_2);

    FUNC_7(VAR_6, "\\VarFileInfo\\Translation", (void **)&VAR_9, &VAR_8);
    *VAR_4 = FUNC_4(FUNC_2(), 0, VAR_0);
    FUNC_9(*VAR_4, "%d", *VAR_9);
    *VAR_5 = FUNC_8(*VAR_4);

    FUNC_5(FUNC_2(), 0, VAR_6);
}
