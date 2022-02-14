
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IInternetSession ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int *,char const*,int ,int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int **,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    IInternetSession *VAR_4;
    IClassFactory *VAR_5;
    HRESULT VAR_6;

    static const WCHAR VAR_7[] = {'a','b','o','u','t',0};

    VAR_6 = FUNC_6(0, &VAR_4, 0);
    FUNC_5(VAR_6 == VAR_3, "CoInternetGetSession failed: %08x\n", VAR_6);
    if(FUNC_1(VAR_6))
        return;

    VAR_6 = FUNC_0(&VAR_1, VAR_0, ((void*)0),
            &VAR_2, (void**)&VAR_5);
    FUNC_5(VAR_6 == VAR_3, "Could not get AboutProtocol factory: %08x\n", VAR_6);
    if(FUNC_1(VAR_6))
        return;

    FUNC_3(VAR_4, VAR_5, &VAR_1,
                                       VAR_7, 0, ((void*)0), 0);
    FUNC_2(VAR_5);

    FUNC_4(VAR_4);
}
