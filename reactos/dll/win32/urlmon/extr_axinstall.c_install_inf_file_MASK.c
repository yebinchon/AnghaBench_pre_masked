
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tmp_dir; int install_file; int hwnd; } ;
typedef TYPE_1__ install_ctx_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char const*,int *,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,char*,int ,int *,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static HRESULT FUNC_9(install_ctx_t *VAR_5)
{
    WCHAR VAR_6[2048], VAR_7[128];
    BOOL VAR_8 = VAR_4;
    const WCHAR *VAR_9;
    DWORD VAR_10;
    HRESULT VAR_11;

    static const WCHAR VAR_12[] = {'S','e','t','u','p',' ','H','o','o','k','s',0};
    static const WCHAR VAR_13[] = {'A','d','d','.','C','o','d','e',0};

    VAR_10 = FUNC_2(VAR_12, ((void*)0), ((void*)0), VAR_6, FUNC_0(VAR_6), VAR_5->install_file);
    if(VAR_10) {
        VAR_8 = VAR_1;

        for(VAR_9 = VAR_6; *VAR_9; VAR_9 += FUNC_8(VAR_9)+1) {
            FUNC_4("[Setup Hooks] key: %s\n", FUNC_6(VAR_9));

            VAR_10 = FUNC_2(VAR_12, VAR_9, ((void*)0), VAR_7, FUNC_0(VAR_7),
                    VAR_5->install_file);
            if(!VAR_10) {
                FUNC_5("Could not get key value\n");
                return VAR_0;
            }

            VAR_11 = FUNC_7(VAR_5, VAR_7);
            if(FUNC_1(VAR_11))
                return VAR_11;
        }
    }

    VAR_10 = FUNC_2(VAR_13, ((void*)0), ((void*)0), VAR_6, FUNC_0(VAR_6), VAR_5->install_file);
    if(VAR_10) {
        VAR_8 = VAR_1;

        for(VAR_9 = VAR_6; *VAR_9; VAR_9 += FUNC_8(VAR_9)+1) {
            FUNC_4("[Add.Code] key: %s\n", FUNC_6(VAR_9));

            VAR_10 = FUNC_2(VAR_13, VAR_9, ((void*)0), VAR_7, FUNC_0(VAR_7),
                    VAR_5->install_file);
            if(!VAR_10) {
                FUNC_5("Could not get key value\n");
                return VAR_0;
            }

            VAR_11 = FUNC_3(VAR_5->hwnd, VAR_5->install_file, VAR_7,
                    VAR_5->tmp_dir, ((void*)0), ((void*)0), VAR_2, ((void*)0));
            if(FUNC_1(VAR_11)) {
                FUNC_5("RunSetupCommandW failed: %08x\n", VAR_11);
                return VAR_11;
            }
        }
    }

    if(VAR_8) {
        VAR_11 = FUNC_3(VAR_5->hwnd, VAR_5->install_file, ((void*)0), VAR_5->tmp_dir, ((void*)0), ((void*)0), VAR_2, ((void*)0));
        if(FUNC_1(VAR_11)) {
            FUNC_5("RunSetupCommandW failed: %08x\n", VAR_11);
            return VAR_11;
        }
    }

    return VAR_3;
}
