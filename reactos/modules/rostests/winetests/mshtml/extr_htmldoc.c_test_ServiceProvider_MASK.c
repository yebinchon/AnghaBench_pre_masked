
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IServiceProvider ;
typedef int IHTMLDocument3 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    IHTMLDocument3 *VAR_8, *VAR_9;
    IServiceProvider *VAR_10;
    IHTMLDocument2 *VAR_11, *VAR_12;
    IUnknown *VAR_13;
    HRESULT VAR_14;

    VAR_11 = FUNC_6();
    if(!VAR_11)
        return;

    VAR_14 = FUNC_0(VAR_11, &VAR_3, (void**)&VAR_10);
    FUNC_8(VAR_14 == VAR_7, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_3(VAR_10, &VAR_5, &VAR_0, (void**)&VAR_12);
    FUNC_8(VAR_14 == VAR_7, "got 0x%08x\n", VAR_14);
    FUNC_8(FUNC_7((IUnknown*)VAR_12, (IUnknown*)VAR_11), "got wrong pointer\n");
    FUNC_1(VAR_12);

    VAR_14 = FUNC_3(VAR_10, &VAR_5, &VAR_1, (void**)&VAR_8);
    FUNC_8(VAR_14 == VAR_7, "got 0x%08x\n", VAR_14);
    FUNC_8(FUNC_7((IUnknown*)VAR_8, (IUnknown*)VAR_11), "got wrong pointer\n");

    VAR_14 = FUNC_0(VAR_11, &VAR_1, (void**)&VAR_9);
    FUNC_8(VAR_14 == VAR_7, "got 0x%08x\n", VAR_14);
    FUNC_8(FUNC_7((IUnknown*)VAR_9, (IUnknown*)VAR_11), "got wrong pointer\n");
    FUNC_8(FUNC_7((IUnknown*)VAR_9, (IUnknown*)VAR_8), "got wrong pointer\n");
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);

    VAR_14 = FUNC_3(VAR_10, &VAR_5, &VAR_4, (void**)&VAR_13);
    FUNC_8(VAR_14 == VAR_7, "got 0x%08x\n", VAR_14);
    FUNC_8(FUNC_7((IUnknown*)VAR_11, VAR_13), "got wrong pointer\n");
    FUNC_5(VAR_13);

    VAR_14 = FUNC_3(VAR_10, &VAR_6, &VAR_2, (void**)&VAR_13);
    FUNC_8(VAR_14 == VAR_7, "QueryService(HTMLEditServices) failed: %08x\n", VAR_14);
    FUNC_5(VAR_13);

    FUNC_4(VAR_10);
    FUNC_9(VAR_11);
}
