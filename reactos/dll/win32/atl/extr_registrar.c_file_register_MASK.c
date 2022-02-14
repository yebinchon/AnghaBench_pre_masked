
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int Registrar ;
typedef char* LPWSTR ;
typedef char* LPSTR ;
typedef int LPCOLESTR ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ,int ,char*,int,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,char*,int,int *,int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,char*,int ) ;

__attribute__((used)) static HRESULT FUNC_13(Registrar *VAR_6, LPCOLESTR VAR_7, BOOL VAR_8)
{
    HANDLE VAR_9;
    DWORD VAR_10, VAR_11;
    LPWSTR VAR_12;
    LPSTR VAR_13;
    HRESULT VAR_14;

    VAR_9 = FUNC_1(VAR_7, VAR_2, VAR_1, ((void*)0), VAR_5, 0, ((void*)0));
    if(VAR_9 != VAR_4) {
        VAR_10 = FUNC_2(VAR_9, ((void*)0));
        VAR_13 = FUNC_6(FUNC_4(), 0, VAR_10);
        if(FUNC_9(VAR_9, VAR_13, VAR_10, ((void*)0), ((void*)0))) {
            VAR_11 = FUNC_8(VAR_0, 0, VAR_13, VAR_10, ((void*)0), 0)+1;
            VAR_12 = FUNC_6(FUNC_4(), VAR_3, VAR_11*sizeof(WCHAR));
            FUNC_8(VAR_0, 0, VAR_13, VAR_10, VAR_12, VAR_11);
            VAR_12[VAR_11-1] = '\0';

            VAR_14 = FUNC_12(VAR_6, VAR_12, VAR_8);

            FUNC_7(FUNC_4(), 0, VAR_12);
        }else {
            FUNC_10("Failed to read file %s\n", FUNC_11(VAR_7));
            VAR_14 = FUNC_5(FUNC_3());
        }
        FUNC_7(FUNC_4(), 0, VAR_13);
        FUNC_0(VAR_9);
    }else {
        FUNC_10("Could not open file %s\n", FUNC_11(VAR_7));
        VAR_14 = FUNC_5(FUNC_3());
    }

    return VAR_14;
}
