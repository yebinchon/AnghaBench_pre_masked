
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clsid ;
typedef int ULARGE_INTEGER ;
typedef int IXMLDOMDocument ;
typedef int IUnknown ;
typedef int IPersistStreamInit ;
typedef int IPersistStream ;
typedef int IPersist ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_8 ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void)
{
    IPersistStreamInit *VAR_9;
    IPersistStream *VAR_10;
    IXMLDOMDocument *VAR_11;
    ULARGE_INTEGER VAR_12;
    IPersist *VAR_13;
    HRESULT VAR_14;
    CLSID VAR_15;

    VAR_11 = FUNC_9(&VAR_7);

    VAR_14 = FUNC_6(VAR_11, &VAR_6, (void**)&VAR_9);
    FUNC_11(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_2(VAR_9);
    FUNC_11(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_1(VAR_9, &VAR_12);
    FUNC_11(VAR_14 == VAR_2, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_11, &VAR_5, (void **)&VAR_10);
    FUNC_11(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);
    FUNC_11((IUnknown *)VAR_10 == (IUnknown *)VAR_9, "got %p, %p\n", VAR_10, VAR_9);

    VAR_14 = FUNC_4(VAR_10, &VAR_4, (void **)&VAR_13);
    FUNC_11(VAR_14 == VAR_1, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_11, &VAR_4, (void **)&VAR_13);
    FUNC_11(VAR_14 == VAR_1, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_0(VAR_9, ((void*)0));
    FUNC_11(VAR_14 == VAR_3, "got 0x%08x\n", VAR_14);

    FUNC_10(&VAR_15, 0, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_9, &VAR_15);
    FUNC_11(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);
    FUNC_11(FUNC_8(&VAR_15, &VAR_0), "wrong clsid %s\n", FUNC_12(&VAR_15));

    FUNC_5(VAR_10);
    FUNC_3(VAR_9);
    FUNC_7(VAR_11);
}
