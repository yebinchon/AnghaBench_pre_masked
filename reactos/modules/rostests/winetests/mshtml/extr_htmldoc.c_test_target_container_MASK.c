
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int ITargetContainer ;
typedef int IOleContainer ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(IHTMLDocument2 *VAR_3)
{
    IOleContainer *VAR_4, *VAR_5;
    ITargetContainer *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(VAR_3, &VAR_1, (void**)&VAR_6);
    FUNC_5(VAR_7 == VAR_2, "Could not get ITargetContainer iface: %08x\n", VAR_7);

    VAR_7 = FUNC_0(VAR_3, &VAR_0, (void**)&VAR_5);
    FUNC_5(VAR_7 == VAR_2, "Could not get ITargetContainer iface: %08x\n", VAR_7);

    VAR_4 = (void*)0xdeadbeef;
    VAR_7 = FUNC_2(VAR_6, &VAR_4);
    FUNC_5(VAR_7 == VAR_2, "GetFramesContainer failed: %08x\n", VAR_7);
    FUNC_5(VAR_4 != ((void*)0), "ole_container == NULL\n");
    FUNC_5(FUNC_4((IUnknown*)VAR_4, (IUnknown*)VAR_5), "ole_container != doc_ole_container\n");
    FUNC_6(VAR_4);
    FUNC_1(VAR_4);

    FUNC_3(VAR_6);
    FUNC_1(VAR_5);
}
