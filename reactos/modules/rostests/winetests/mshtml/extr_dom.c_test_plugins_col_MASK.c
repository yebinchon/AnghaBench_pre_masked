
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int LONG ;
typedef int IUnknown ;
typedef int IOmNavigator ;
typedef int IHTMLWindow2 ;
typedef int IHTMLPluginsCollection ;
typedef int IHTMLDocument2 ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int *,int *,int *,char*) ;

__attribute__((used)) static void FUNC_11(IHTMLDocument2 *VAR_5)
{
    IHTMLPluginsCollection *VAR_6, *VAR_7;
    IHTMLWindow2 *VAR_8;
    IOmNavigator *VAR_9;
    ULONG VAR_10;
    LONG VAR_11;
    HRESULT VAR_12;

    VAR_8 = FUNC_7(VAR_5);
    VAR_12 = FUNC_4(VAR_8, &VAR_9);
    FUNC_9(VAR_12 == VAR_2, "get_navigator failed: %08x\n", VAR_12);
    FUNC_3(VAR_8);

    VAR_12 = FUNC_6(VAR_9, &VAR_6);
    FUNC_9(VAR_12 == VAR_2, "get_plugins failed: %08x\n", VAR_12);

    VAR_12 = FUNC_6(VAR_9, &VAR_7);
    FUNC_9(VAR_12 == VAR_2, "get_plugins failed: %08x\n", VAR_12);
    FUNC_9(FUNC_8((IUnknown*)VAR_6, (IUnknown*)VAR_7), "col != col2\n");
    FUNC_0(VAR_7);

    FUNC_10((IUnknown*)VAR_6, &VAR_0, &VAR_1, "[object]");

    VAR_11 = 0xdeadbeef;
    VAR_12 = FUNC_1(VAR_6, &VAR_11);
    FUNC_9(VAR_12 == VAR_2, "get_length failed: %08x\n", VAR_12);
    FUNC_9(!VAR_11, "length = %d\n", VAR_11);

    VAR_12 = FUNC_2(VAR_6, VAR_3);
    FUNC_9(VAR_12 == VAR_2, "refresh failed: %08x\n", VAR_12);

    VAR_12 = FUNC_2(VAR_6, VAR_4);
    FUNC_9(VAR_12 == VAR_2, "refresh failed: %08x\n", VAR_12);

    VAR_10 = FUNC_0(VAR_6);
    FUNC_9(!VAR_10, "ref=%d\n", VAR_10);

    FUNC_5(VAR_9);
}
