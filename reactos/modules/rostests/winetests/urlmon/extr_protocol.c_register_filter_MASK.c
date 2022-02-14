
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetSession ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int **,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(BOOL VAR_5)
{
    IInternetSession *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_4(0, &VAR_6, 0);
    FUNC_3(VAR_7 == VAR_1, "CoInternetGetSession failed: %08x\n", VAR_7);

    if(VAR_5) {
        VAR_7 = FUNC_0(VAR_6, &VAR_3, &VAR_0, VAR_4);
        FUNC_3(VAR_7 == VAR_1, "RegisterMimeFilter failed: %08x\n", VAR_7);
        VAR_7 = FUNC_0(VAR_6, &VAR_3, &VAR_0, VAR_2);
        FUNC_3(VAR_7 == VAR_1, "RegisterMimeFilter failed: %08x\n", VAR_7);
    }else {
        VAR_7 = FUNC_2(VAR_6, &VAR_3, VAR_4);
        FUNC_3(VAR_7 == VAR_1, "RegisterMimeFilter failed: %08x\n", VAR_7);
        VAR_7 = FUNC_2(VAR_6, &VAR_3, VAR_2);
        FUNC_3(VAR_7 == VAR_1, "RegisterMimeFilter failed: %08x\n", VAR_7);
    }

    FUNC_1(VAR_6);
}
