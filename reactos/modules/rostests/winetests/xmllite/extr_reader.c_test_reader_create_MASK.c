
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XmlNodeType ;
struct TYPE_3__ {scalar_t__ count; } ;
typedef int LONG_PTR ;
typedef int IXmlResolver ;
typedef int IXmlReader ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int DtdProcessing ;


 int FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (void**) ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_14(void)
{
    IXmlResolver *VAR_19;
    IUnknown *VAR_20, *VAR_21;
    IXmlReader *VAR_22;
    DtdProcessing VAR_23;
    XmlNodeType VAR_24;
    HRESULT VAR_25;


    if (0)
    {
        FUNC_0(&VAR_6, ((void*)0), ((void*)0));
        FUNC_0(((void*)0), (void**)&VAR_22, ((void*)0));
    }

    VAR_25 = FUNC_0(&VAR_4, (void **)&VAR_21, ((void*)0));
    FUNC_11(VAR_25 == VAR_2, "got %08x\n", VAR_25);

    VAR_25 = FUNC_0(&VAR_5, (void **)&VAR_21, ((void*)0));
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);
    VAR_25 = FUNC_1(VAR_21, &VAR_6, (void **)&VAR_22);
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);
    FUNC_11(VAR_21 == (IUnknown *)VAR_22, "unexpected interface\n");
    FUNC_5(VAR_22);
    FUNC_2(VAR_21);

    VAR_25 = FUNC_0(&VAR_5, (void **)&VAR_22, ((void*)0));
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);
    FUNC_5(VAR_22);

    VAR_25 = FUNC_0(&VAR_6, (void**)&VAR_22, ((void*)0));
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);

    FUNC_9(VAR_22, VAR_11);

    VAR_24 = VAR_9;
    VAR_25 = FUNC_3(VAR_22, &VAR_24);
    FUNC_11(VAR_25 == VAR_7, "got %08x\n", VAR_25);
    FUNC_11(VAR_24 == VAR_10, "got %d\n", VAR_24);


    if (0)
    {
        VAR_25 = FUNC_3(VAR_22, ((void*)0));
        FUNC_11(VAR_25 == VAR_1, "got %08x\n", VAR_25);
    }

    VAR_19 = (void*)0xdeadbeef;
    VAR_25 = FUNC_4(VAR_22, VAR_14, (LONG_PTR*)&VAR_19);
    FUNC_11(VAR_25 == VAR_8, "got 0x%08x\n", VAR_25);
    FUNC_11(VAR_19 == ((void*)0), "got %p\n", VAR_19);

    VAR_25 = FUNC_7(VAR_22, VAR_14, 0);
    FUNC_11(VAR_25 == VAR_8, "got 0x%08x\n", VAR_25);

    VAR_25 = FUNC_7(VAR_22, VAR_14, (LONG_PTR)&VAR_18);
    FUNC_11(VAR_25 == VAR_8, "got 0x%08x\n", VAR_25);

    VAR_19 = ((void*)0);
    VAR_25 = FUNC_4(VAR_22, VAR_14, (LONG_PTR*)&VAR_19);
    FUNC_11(VAR_25 == VAR_8, "got 0x%08x\n", VAR_25);
    FUNC_11(VAR_19 == &VAR_18, "got %p\n", VAR_19);
    FUNC_8(VAR_19);

    VAR_25 = FUNC_7(VAR_22, VAR_14, 0);
    FUNC_11(VAR_25 == VAR_8, "got 0x%08x\n", VAR_25);

    VAR_23 = 2;
    VAR_25 = FUNC_4(VAR_22, VAR_13, (LONG_PTR*)&VAR_23);
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);
    FUNC_11(VAR_23 == VAR_0, "got %d\n", VAR_23);

    VAR_23 = 2;
    VAR_25 = FUNC_7(VAR_22, VAR_13, VAR_23);
    FUNC_11(VAR_25 == VAR_1, "Expected E_INVALIDARG, got %08x\n", VAR_25);

    VAR_25 = FUNC_7(VAR_22, VAR_13, -1);
    FUNC_11(VAR_25 == VAR_1, "Expected E_INVALIDARG, got %08x\n", VAR_25);


    VAR_25 = FUNC_6(VAR_22, ((void*)0));
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);

    FUNC_10(VAR_22, VAR_12, VAR_11);


    VAR_25 = FUNC_13((void**)&VAR_20);
    FUNC_11(VAR_25 == VAR_8, "Expected S_OK, got %08x\n", VAR_25);

    if (VAR_25 == VAR_8)
    {
        VAR_15.count = 0;
        VAR_25 = FUNC_6(VAR_22, VAR_20);
        FUNC_11(VAR_25 == VAR_2, "Expected E_NOINTERFACE, got %08x\n", VAR_25);
        FUNC_12(&VAR_15, VAR_16, VAR_17, VAR_3);
        FUNC_2(VAR_20);
    }
    FUNC_5(VAR_22);
}
