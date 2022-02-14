
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int * BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int *,int *,int ,scalar_t__*) ;
 int VAR_8 ;

__attribute__((used)) static HRESULT FUNC_12(IUri *VAR_9, DWORD *VAR_10)
{
    HRESULT VAR_11;
    BSTR VAR_12, VAR_13;
    DWORD VAR_14;
    HKEY VAR_15;
    DWORD VAR_16;

    VAR_11 = FUNC_2(VAR_9, &VAR_16);
    if(FUNC_0(VAR_11))
        return VAR_11;




    if(VAR_16 == VAR_7)
        return VAR_3;

    VAR_11 = FUNC_1(VAR_9, &VAR_12);
    if(FUNC_0(VAR_11))
        return VAR_11;




    if((VAR_16 != VAR_7 && VAR_16 != VAR_6)
        && FUNC_10(VAR_16) && !*VAR_12) {
        *VAR_10 = VAR_5;

        FUNC_6(VAR_12);


        return VAR_4;
    }

    VAR_11 = FUNC_3(VAR_9, &VAR_13);
    if(FUNC_0(VAR_11)) {
        FUNC_6(VAR_12);
        return VAR_11;
    }


    VAR_14 = FUNC_5(VAR_1, VAR_8, &VAR_15);
    if(VAR_14 == VAR_0) {
        VAR_11 = FUNC_11(VAR_15, VAR_13, VAR_12, FUNC_7(VAR_12), VAR_10);
        FUNC_4(VAR_15);
    } else
        FUNC_8("Failed to open HKCU's %s key\n", FUNC_9(VAR_8));


    if(VAR_11 == VAR_3) {
        VAR_14 = FUNC_5(VAR_2, VAR_8, &VAR_15);
        if(VAR_14 == VAR_0) {
            VAR_11 = FUNC_11(VAR_15, VAR_13, VAR_12, FUNC_7(VAR_12), VAR_10);
            FUNC_4(VAR_15);
        } else
            FUNC_8("Failed to open HKLM's %s key\n", FUNC_9(VAR_8));
    }

    FUNC_6(VAR_12);
    FUNC_6(VAR_13);
    return VAR_11;
}
