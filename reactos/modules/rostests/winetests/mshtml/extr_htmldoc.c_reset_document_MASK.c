
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IPersistStreamInit ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,char*,int ) ;

__attribute__((used)) static void FUNC_6(IHTMLDocument2 *VAR_5)
{
    IPersistStreamInit *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_5, &VAR_1, (void**)&VAR_6);
    FUNC_4(VAR_7 == VAR_2, "QueryInterface(IID_IPersistStreamInit) failed: %08x\n", VAR_7);
    if(FUNC_0(VAR_7))
        return;

    VAR_4 = VAR_3;

    VAR_7 = FUNC_2(VAR_6);
    FUNC_4(VAR_7 == VAR_2, "Load failed: %08x\n", VAR_7);

    VAR_4 = VAR_0;

    FUNC_5((IUnknown*)VAR_5, ((void*)0), "about:blank", VAR_0);

    FUNC_3(VAR_6);
}
