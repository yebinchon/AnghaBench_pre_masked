
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwFileVersionMS; int dwFileVersionLS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int UINT ;
typedef int LPVOID ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char*,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,char*,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,...) ;
 char* FUNC_5 (scalar_t__) ;

__attribute__((used)) static char * FUNC_6(char * VAR_0)
{
    static char VAR_1[32];
    DWORD VAR_2;
    DWORD VAR_3;

    VAR_2 = FUNC_1(VAR_0, &VAR_3);
    if (VAR_2) {
        char * VAR_4 = FUNC_5(VAR_2);
        if (VAR_4) {
            if (FUNC_0(VAR_0, VAR_3, VAR_2, VAR_4)) {
                static char VAR_5[] = "\\";
                VS_FIXEDFILEINFO *VAR_6;
                UINT VAR_7;
                if (FUNC_2(VAR_4, VAR_5, (LPVOID *)&VAR_6, &VAR_7)) {
                    FUNC_4(VAR_1, "%d.%d.%d.%d",
                            VAR_6->dwFileVersionMS >> 16,
                            VAR_6->dwFileVersionMS & 0xffff,
                            VAR_6->dwFileVersionLS >> 16,
                            VAR_6->dwFileVersionLS & 0xffff);
                } else
                    FUNC_4(VAR_1, "version not available");
            } else
                FUNC_4(VAR_1, "unknown");
            FUNC_3(VAR_4);
        } else
            FUNC_4(VAR_1, "failed");
    } else
        FUNC_4(VAR_1, "version not available");

    return VAR_1;
}
