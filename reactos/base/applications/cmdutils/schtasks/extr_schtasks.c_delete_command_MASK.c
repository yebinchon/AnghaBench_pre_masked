
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ITaskFolder ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(int VAR_2, WCHAR *VAR_3[])
{
    const WCHAR *VAR_4 = ((void*)0);
    ITaskFolder *VAR_5 = ((void*)0);
    BSTR VAR_6;
    HRESULT VAR_7;

    while (VAR_2) {
        if (!FUNC_9(VAR_3[0], VAR_0)) {
            FUNC_6("force opt\n");
            VAR_2--;
            VAR_3++;
        }else if(!FUNC_9(VAR_3[0], VAR_1)) {
            if (VAR_2 < 2) {
                FUNC_1("Missing /tn value\n");
                return 1;
            }

            if (VAR_4) {
                FUNC_1("Duplicated /tn argument\n");
                return 1;
            }

            VAR_4 = VAR_3[1];
            VAR_2 -= 2;
            VAR_3 += 2;
        }else {
            FUNC_1("Unsupported argument %s\n", FUNC_7(VAR_3[0]));
            return 1;
        }
    }

    if (!VAR_4) {
        FUNC_1("Missing /tn argument\n");
        return 1;
    }

    VAR_5 = FUNC_8();
    if (!VAR_5)
        return 1;

    VAR_6 = FUNC_4(VAR_4);
    VAR_7 = FUNC_2(VAR_5, VAR_6, 0);
    FUNC_5(VAR_6);
    FUNC_3(VAR_5);
    if (FUNC_0(VAR_7))
        return 1;

    return 0;
}
