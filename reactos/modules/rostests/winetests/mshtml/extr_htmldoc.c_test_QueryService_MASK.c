
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IServiceProvider ;
typedef int IHlinkFrame ;
typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_6, BOOL VAR_7)
{
    IHTMLWindow2 *VAR_8, *VAR_9;
    IServiceProvider *VAR_10;
    IHlinkFrame *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(VAR_6, &VAR_4, (void**)&VAR_10);
    FUNC_7(VAR_12 == VAR_5, "QueryService returned %08x\n", VAR_12);

    VAR_12 = FUNC_5(VAR_10, &VAR_3, &VAR_3, (void**)&VAR_11);
    if(!VAR_7) {
        FUNC_7(VAR_12 == VAR_0, "QueryService returned %08x, expected E_NOINTERFACE\n", VAR_12);
        FUNC_6(VAR_10);
        return;
    }

    FUNC_7(VAR_12 == VAR_5, "QueryService(IID_IHlinkFrame) failed: %08x\n", VAR_12);
    FUNC_7(VAR_11 == &VAR_1, "hf != HlinkFrame\n");
    FUNC_4(VAR_11);

    FUNC_6(VAR_10);

    VAR_12 = FUNC_1(VAR_6, &VAR_8);
    FUNC_7(VAR_12 == VAR_5, "get_parentWindow failed: %08x\n", VAR_12);

    VAR_12 = FUNC_2(VAR_8, &VAR_4, (void**)&VAR_10);
    FUNC_7(VAR_12 == VAR_5, "Could not get IServiceProvider iface: %08x\n", VAR_12);

    VAR_12 = FUNC_5(VAR_10, &VAR_2, &VAR_2, (void**)&VAR_9);
    FUNC_7(VAR_12 == VAR_5, "QueryService(IID_IHTMLWindow2) failed: %08x\n", VAR_12);

    FUNC_3(VAR_9);

    VAR_12 = FUNC_5(VAR_10, &VAR_3, &VAR_3, (void**)&VAR_11);
    FUNC_7(VAR_12 == VAR_5, "QueryService(IID_IHlinkFrame) failed: %08x\n", VAR_12);
    FUNC_7(VAR_11 == &VAR_1, "hf != HlinkFrame\n");
    FUNC_4(VAR_11);

    FUNC_6(VAR_10);
    FUNC_3(VAR_8);
}
