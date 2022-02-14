
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int IHTMLDocument2 ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(IHTMLDocument2 *VAR_3, REFIID VAR_4, IUnknown *VAR_5)
{
    IConnectionPointContainer *VAR_6;
    IConnectionPoint *VAR_7;
    DWORD VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_4(VAR_3, &VAR_0, (void**)&VAR_6);
    FUNC_5(VAR_9 == VAR_1, "QueryInterface(IID_IConnectionPointContainer) failed: %08x\n", VAR_9);

    VAR_9 = FUNC_0(VAR_6, VAR_4, &VAR_7);
    FUNC_1(VAR_6);
    FUNC_5(VAR_9 == VAR_1, "FindConnectionPoint failed: %08x\n", VAR_9);

    VAR_2 = VAR_3;

    VAR_9 = FUNC_2(VAR_7, VAR_5, &VAR_8);
    FUNC_3(VAR_7);
    FUNC_5(VAR_9 == VAR_1, "Advise failed: %08x\n", VAR_9);
}
