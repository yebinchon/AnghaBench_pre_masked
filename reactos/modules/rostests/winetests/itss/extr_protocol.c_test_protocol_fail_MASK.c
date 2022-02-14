
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int IInternetProtocol ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(IInternetProtocol *VAR_5, LPCWSTR VAR_6, HRESULT VAR_7)
{
    HRESULT VAR_8;

    FUNC_2(VAR_0);
    FUNC_2(VAR_1);

    VAR_3 = VAR_7;
    VAR_8 = FUNC_1(VAR_5, VAR_6, &VAR_4, &VAR_2, 0, 0);
    FUNC_3(VAR_8 == VAR_7, "expected: %08x got: %08x\n", VAR_7, VAR_8);

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
}
