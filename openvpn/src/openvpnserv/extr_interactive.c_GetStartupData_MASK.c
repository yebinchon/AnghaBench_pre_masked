
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_3__ {scalar_t__* directory; scalar_t__* options; scalar_t__* std_input; } ;
typedef TYPE_1__ STARTUP_DATA ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,scalar_t__*,int,int,int *) ;
 int FUNC_3 (int ,int ,char*,int,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__* FUNC_7 (int) ;
 int FUNC_8 (scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_9(HANDLE VAR_6, STARTUP_DATA *VAR_7)
{
    size_t VAR_8, VAR_9;
    WCHAR *VAR_10 = ((void*)0);
    DWORD VAR_11, VAR_12;

    VAR_11 = FUNC_1(VAR_6, 1, &VAR_5);
    if (VAR_11 == 0)
    {
        FUNC_0(VAR_3, FUNC_5("PeekNamedPipeAsync failed"));
        FUNC_4(VAR_6, L"PeekNamedPipeAsync");
        goto err;
    }

    VAR_8 = VAR_11 / sizeof(*VAR_10);
    if (VAR_8 == 0)
    {
        FUNC_0(VAR_3, FUNC_5("malformed startup data: 1 byte received"));
        FUNC_3(VAR_6, VAR_0, L"GetStartupData", 1, &VAR_5);
        goto err;
    }

    VAR_10 = FUNC_7(VAR_11);
    if (VAR_10 == ((void*)0))
    {
        FUNC_0(VAR_3, FUNC_5("malloc failed"));
        FUNC_4(VAR_6, L"malloc");
        goto err;
    }

    VAR_12 = FUNC_2(VAR_6, VAR_10, VAR_11, 1, &VAR_5);
    if (VAR_11 != VAR_12)
    {
        FUNC_0(VAR_3, FUNC_5("ReadPipeAsync failed"));
        FUNC_4(VAR_6, L"ReadPipeAsync");
        goto err;
    }

    if (VAR_10[VAR_8 - 1] != 0)
    {
        FUNC_0(VAR_2, FUNC_5("Startup data is not NULL terminated"));
        FUNC_3(VAR_6, VAR_0, L"GetStartupData", 1, &VAR_5);
        goto err;
    }

    VAR_7->directory = VAR_10;
    VAR_9 = FUNC_8(VAR_7->directory) + 1;
    VAR_8 -= VAR_9;
    if (VAR_8 <= 0)
    {
        FUNC_0(VAR_2, FUNC_5("Startup data ends at working directory"));
        FUNC_3(VAR_6, VAR_0, L"GetStartupData", 1, &VAR_5);
        goto err;
    }

    VAR_7->options = VAR_7->directory + VAR_9;
    VAR_9 = FUNC_8(VAR_7->options) + 1;
    VAR_8 -= VAR_9;
    if (VAR_8 <= 0)
    {
        FUNC_0(VAR_2, FUNC_5("Startup data ends at command line options"));
        FUNC_3(VAR_6, VAR_0, L"GetStartupData", 1, &VAR_5);
        goto err;
    }

    VAR_7->std_input = VAR_7->options + VAR_9;
    return VAR_4;

err:
    VAR_7->directory = ((void*)0);
    FUNC_6(VAR_10);
    return VAR_1;
}
