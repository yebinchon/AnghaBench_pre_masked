
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int const*,int *,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(IInternetProtocol *VAR_10, const WCHAR *VAR_11)
{
    HRESULT VAR_12;

    FUNC_2(VAR_1);
    FUNC_2(VAR_4);
    FUNC_2(VAR_3);
    FUNC_2(VAR_2);
    VAR_7 = VAR_5;
    VAR_8 = VAR_0;

    VAR_12 = FUNC_1(VAR_10, VAR_11, &VAR_9, &VAR_6, 0, 0);
    FUNC_3(VAR_12 == VAR_5, "Start failed: %08x\n", VAR_12);

    FUNC_0(VAR_1);
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);
    FUNC_0(VAR_4);
}
