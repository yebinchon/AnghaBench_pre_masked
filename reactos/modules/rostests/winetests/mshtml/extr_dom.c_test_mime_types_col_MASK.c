
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ LONG ;
typedef int IUnknown ;
typedef int IOmNavigator ;
typedef int IHTMLMimeTypesCollection ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_6(IOmNavigator *VAR_2)
{
    IHTMLMimeTypesCollection *VAR_3, *VAR_4;
    LONG VAR_5;
    ULONG VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_2(VAR_2, &VAR_3);
    FUNC_4(VAR_7 == VAR_1, "get_mimeTypes failed: %08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_2, &VAR_4);
    FUNC_4(VAR_7 == VAR_1, "get_mimeTypes failed: %08x\n", VAR_7);
    FUNC_4(FUNC_3((IUnknown*)VAR_3, (IUnknown*)VAR_4), "col != col2\n");
    FUNC_0(VAR_4);

    FUNC_5((IUnknown*)VAR_3, &VAR_0, "[object]");

    VAR_5 = 0xdeadbeef;
    VAR_7 = FUNC_1(VAR_3, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "get_length failed: %08x\n", VAR_7);
    FUNC_4(!VAR_5, "length = %d\n", VAR_5);

    VAR_6 = FUNC_0(VAR_3);
    FUNC_4(!VAR_6, "ref=%d\n", VAR_6);
}
