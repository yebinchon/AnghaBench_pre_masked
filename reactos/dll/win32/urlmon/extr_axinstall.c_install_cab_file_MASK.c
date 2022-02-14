
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int install_type; int * tmp_dir; int install_file; scalar_t__ callback; } ;
typedef TYPE_1__ install_ctx_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,scalar_t__,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ,int ,int ,int ) ;


 int VAR_3 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_15(install_ctx_t *VAR_5)
{
    WCHAR VAR_6[VAR_3], VAR_7[VAR_3];
    BOOL VAR_8 = VAR_2, VAR_9 = VAR_2;
    DWORD VAR_10;
    HRESULT VAR_11;

    FUNC_4(FUNC_0(VAR_6), VAR_6);

    for(VAR_10=0; !VAR_8 && VAR_10 < 100; VAR_10++) {
        FUNC_3(VAR_6, ((void*)0), FUNC_5() + VAR_10*17037, VAR_7);
        VAR_8 = FUNC_1(VAR_7, ((void*)0));
    }
    if(!VAR_8)
        return VAR_1;

    VAR_5->tmp_dir = VAR_7;

    FUNC_9("Using temporary directory %s\n", FUNC_11(VAR_7));

    VAR_11 = FUNC_12(VAR_5);
    if(FUNC_8(VAR_11)) {
        if(VAR_5->callback)
            FUNC_6(VAR_5->callback, 0, 0, VAR_0, VAR_5->install_file);

        switch(VAR_5->install_type) {
        case 128:
            VAR_11 = FUNC_13(VAR_5);
            break;
        case 129:
            FUNC_2("Installing DLL, registering in temporary location\n");
            VAR_11 = FUNC_14(VAR_5);
            if(FUNC_8(VAR_11))
                VAR_9 = VAR_4;
            break;
        default:
            FUNC_10(0);
        }
    }

    if(!VAR_9)
        FUNC_7(VAR_5->tmp_dir);
    return VAR_11;
}
