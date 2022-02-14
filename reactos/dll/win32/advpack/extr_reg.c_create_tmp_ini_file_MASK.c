
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VOID ;
typedef int HRSRC ;
typedef int HMODULE ;
typedef int * HGLOBAL ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static BOOL FUNC_10(HMODULE VAR_7, WCHAR *VAR_8)
{
    HRSRC VAR_9;
    HGLOBAL VAR_10 = ((void*)0);
    DWORD VAR_11, VAR_12;
    VOID *VAR_13;
    HANDLE VAR_14 = VAR_4;

    if(!FUNC_9(VAR_8)) {
        FUNC_2("Can't get temp ini file path\n");
        goto error;
    }

    if(!(VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_5))) {
        FUNC_2("Can't find REGINST resource\n");
        goto error;
    }

    VAR_11 = FUNC_7(VAR_7, VAR_9);
    VAR_10 = FUNC_5(VAR_7, VAR_9);
    VAR_13 = FUNC_6(VAR_10);

    if(!VAR_13 || !VAR_11) {
        FUNC_2("Can't load REGINST resource\n");
        goto error;
    }

    if((VAR_14 = FUNC_1(VAR_8, VAR_3, 0, ((void*)0), VAR_0,
                         VAR_2, ((void*)0))) == VAR_4) {
        FUNC_2("Unable to create temp ini file\n");
        goto error;
    }
    if(!FUNC_8(VAR_14, VAR_13, VAR_11, &VAR_12, ((void*)0)) || VAR_11 != VAR_12) {
        FUNC_2("Write failed\n");
        goto error;
    }
    FUNC_4(VAR_10);
    FUNC_0(VAR_14);
    return VAR_6;
error:
    if(VAR_10) FUNC_4(VAR_10);
    if(VAR_14 != VAR_4) FUNC_0(VAR_14);
    return VAR_1;
}
