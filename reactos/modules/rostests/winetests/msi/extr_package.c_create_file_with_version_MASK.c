
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * szKey; } ;
typedef TYPE_1__ VS_VERSIONINFO ;
struct TYPE_5__ {void* dwProductVersionLS; void* dwProductVersionMS; void* dwFileVersionLS; void* dwFileVersionMS; } ;
typedef TYPE_2__ VS_FIXEDFILEINFO ;
typedef int LPCSTR ;
typedef int * LPBYTE ;
typedef void* LONG ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,int ,int ,int ,int *,int ) ;
 int VAR_6 ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int *,int) ;

__attribute__((used)) static BOOL FUNC_15(const CHAR *VAR_7, LONG VAR_8, LONG VAR_9)
{
    VS_VERSIONINFO *VAR_10;
    VS_FIXEDFILEINFO *VAR_11;
    LPBYTE VAR_12, VAR_13;
    CHAR VAR_14[VAR_2];
    DWORD VAR_15, VAR_16;
    HANDLE VAR_17;
    BOOL VAR_18 = VAR_0;

    FUNC_6(VAR_14, VAR_2);

    FUNC_12(VAR_14, "\\version.dll");

    FUNC_1(VAR_14, VAR_7, VAR_0);

    VAR_16 = FUNC_4(VAR_14, &VAR_15);
    VAR_12 = FUNC_7(FUNC_5(), 0, VAR_16);

    FUNC_3(VAR_14, 0, VAR_16, VAR_12);

    VAR_10 = (VS_VERSIONINFO *)VAR_12;
    VAR_13 = (BYTE *)&VAR_10->szKey[FUNC_13(VAR_10->szKey) + 1];
    VAR_11 = (VS_FIXEDFILEINFO *)FUNC_14(VAR_10, VAR_13, 4);

    VAR_11->dwFileVersionMS = VAR_8;
    VAR_11->dwFileVersionLS = VAR_9;
    VAR_11->dwProductVersionMS = VAR_8;
    VAR_11->dwProductVersionLS = VAR_9;

    VAR_17 = FUNC_0(VAR_7, VAR_0);
    if (!VAR_17)
        goto done;

    if (!FUNC_11(VAR_17, (LPCSTR)VAR_3, (LPCSTR)FUNC_9(VAR_6),
                         FUNC_10(VAR_1, VAR_4), VAR_12, VAR_16))
        goto done;

    if (!FUNC_2(VAR_17, VAR_0))
        goto done;

    VAR_18 = VAR_5;

done:
    FUNC_8(FUNC_5(), 0, VAR_12);
    return VAR_18;
}
