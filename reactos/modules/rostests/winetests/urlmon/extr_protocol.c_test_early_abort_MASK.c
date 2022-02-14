
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int *,int,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const CLSID *VAR_6)
{
    IInternetProtocol *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(VAR_6, ((void*)0), VAR_1|VAR_0,
            &VAR_4, (void**)&VAR_7);
    FUNC_3(VAR_8 == VAR_5, "CoCreateInstance failed: %08x\n", VAR_8);

    VAR_8 = FUNC_1(VAR_7, VAR_2, 0);
    FUNC_3(VAR_8 == VAR_5, "Abort failed: %08x\n", VAR_8);

    VAR_8 = FUNC_1(VAR_7, VAR_3, 0);
    FUNC_3(VAR_8 == VAR_5, "Abort failed: %08x\n", VAR_8);

    FUNC_2(VAR_7);
}
