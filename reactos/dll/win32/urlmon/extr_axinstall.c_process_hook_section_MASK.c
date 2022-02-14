
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tmp_dir; int hwnd; int install_file; } ;
typedef TYPE_1__ install_ctx_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char const*,char const*,int *,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int *,int ,int *,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,char*,char*,size_t*) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static HRESULT FUNC_12(install_ctx_t *VAR_3, const WCHAR *VAR_4)
{
    WCHAR VAR_5[2048], VAR_6[2*VAR_1];
    const WCHAR *VAR_7;
    DWORD VAR_8;
    HRESULT VAR_9;

    static const WCHAR VAR_10[] = {'r','u','n',0};

    VAR_8 = FUNC_3(VAR_4, ((void*)0), ((void*)0), VAR_5, FUNC_0(VAR_5), VAR_3->install_file);
    if(!VAR_8)
        return VAR_2;

    for(VAR_7 = VAR_5; *VAR_7; VAR_7 += FUNC_11(VAR_7)+1) {
        if(!FUNC_10(VAR_7, VAR_10)) {
            WCHAR *VAR_11;
            size_t VAR_12;

            VAR_8 = FUNC_3(VAR_4, VAR_10, ((void*)0), VAR_6, FUNC_0(VAR_6), VAR_3->install_file);

            FUNC_5("Run %s\n", FUNC_6(VAR_6));

            FUNC_7(VAR_3, VAR_6, ((void*)0), &VAR_12);

            VAR_11 = FUNC_8(VAR_12*sizeof(WCHAR));
            if(!VAR_11)
                FUNC_9(VAR_11);

            FUNC_7(VAR_3, VAR_6, VAR_11, &VAR_12);
            VAR_9 = FUNC_4(VAR_3->hwnd, VAR_11, ((void*)0), VAR_3->tmp_dir, ((void*)0), ((void*)0), 0, ((void*)0));
            FUNC_9(VAR_11);
            if(FUNC_1(VAR_9))
                return VAR_9;
        }else {
            FUNC_2("Unsupported hook %s\n", FUNC_6(VAR_7));
            return VAR_0;
        }
    }

    return VAR_2;
}
