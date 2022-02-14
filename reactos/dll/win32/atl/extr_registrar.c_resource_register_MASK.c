
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int Registrar ;
typedef char* LPWSTR ;
typedef int LPSTR ;
typedef int LPCOLESTR ;
typedef int HRSRC ;
typedef int HRESULT ;
typedef scalar_t__ HINSTANCE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int ,int ,int,char*,int) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,char*,int ) ;

__attribute__((used)) static HRESULT FUNC_13(Registrar *VAR_3, LPCOLESTR VAR_4,
                        LPCOLESTR VAR_5, LPCOLESTR VAR_6, BOOL VAR_7)
{
    HINSTANCE VAR_8;
    HRSRC VAR_9;
    LPSTR VAR_10;
    LPWSTR VAR_11;
    DWORD VAR_12, VAR_13;
    HRESULT VAR_14;

    VAR_8 = FUNC_7(VAR_4, ((void*)0), VAR_2);
    if(VAR_8) {
        VAR_9 = FUNC_0(VAR_8, VAR_5, VAR_6);
        if(VAR_9) {
            VAR_10 = FUNC_8(VAR_8, VAR_9);
            VAR_13 = FUNC_10(VAR_8, VAR_9);
            if(VAR_10) {
                VAR_12 = FUNC_9(VAR_0, 0, VAR_10, VAR_13, ((void*)0), 0)+1;
                VAR_11 = FUNC_5(FUNC_3(), VAR_1, VAR_12*sizeof(WCHAR));
                FUNC_9(VAR_0, 0, VAR_10, VAR_13, VAR_11, VAR_12);
                VAR_11[VAR_12-1] = '\0';

                VAR_14 = FUNC_12(VAR_3, VAR_11, VAR_7);

                FUNC_6(FUNC_3(), 0, VAR_11);
            }else {
                FUNC_11("could not load resource\n");
                VAR_14 = FUNC_4(FUNC_2());
            }
        }else {
            FUNC_11("Could not find source\n");
            VAR_14 = FUNC_4(FUNC_2());
        }
        FUNC_1(VAR_8);
    }else {
        FUNC_11("Could not load resource file\n");
        VAR_14 = FUNC_4(FUNC_2());
    }

    return VAR_14;
}
