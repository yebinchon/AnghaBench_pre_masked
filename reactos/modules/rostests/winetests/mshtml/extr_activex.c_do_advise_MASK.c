
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(IUnknown *VAR_2, REFIID VAR_3, IUnknown *VAR_4)
{
    IConnectionPointContainer *VAR_5;
    IConnectionPoint *VAR_6;
    DWORD VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_4(VAR_2, &VAR_0, (void**)&VAR_5);
    FUNC_5(VAR_8 == VAR_1, "QueryInterface(IID_IConnectionPointContainer) failed: %08x\n", VAR_8);

    VAR_8 = FUNC_0(VAR_5, VAR_3, &VAR_6);
    FUNC_1(VAR_5);
    FUNC_5(VAR_8 == VAR_1, "FindConnectionPoint failed: %08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_6, VAR_4, &VAR_7);
    FUNC_3(VAR_6);
    FUNC_5(VAR_8 == VAR_1, "Advise failed: %08x\n", VAR_8);
}
