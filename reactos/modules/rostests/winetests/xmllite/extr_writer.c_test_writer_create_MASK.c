
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_PTR ;
typedef int IXmlWriter ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_13;
    IXmlWriter *VAR_14;
    LONG_PTR VAR_15;
    IUnknown *VAR_16;


    if (0)
    {
        FUNC_0(&VAR_4, ((void*)0), ((void*)0));
        FUNC_0(((void*)0), (void**)&VAR_14, ((void*)0));
    }

    VAR_13 = FUNC_0(&VAR_2, (void **)&VAR_16, ((void*)0));
    FUNC_5(VAR_13 == VAR_0, "got %08x\n", VAR_13);

    VAR_13 = FUNC_0(&VAR_3, (void **)&VAR_16, ((void*)0));
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);
    VAR_13 = FUNC_1(VAR_16, &VAR_4, (void **)&VAR_14);
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);
    FUNC_5(VAR_16 == (IUnknown *)VAR_14, "unexpected interface pointer\n");
    FUNC_2(VAR_16);
    FUNC_4(VAR_14);

    VAR_13 = FUNC_0(&VAR_4, (void**)&VAR_14, ((void*)0));
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);


    VAR_15 = 0;
    VAR_13 = FUNC_3(VAR_14, VAR_9, &VAR_15);
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);
    FUNC_5(VAR_15 == VAR_6, "got %ld\n", VAR_15);

    VAR_15 = VAR_6;
    VAR_13 = FUNC_3(VAR_14, VAR_11, &VAR_15);
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);
    FUNC_5(VAR_15 == VAR_1, "got %ld\n", VAR_15);

    VAR_15 = VAR_6;
    VAR_13 = FUNC_3(VAR_14, VAR_12, &VAR_15);
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);
    FUNC_5(VAR_15 == VAR_1, "got %ld\n", VAR_15);

    VAR_15 = VAR_7;
    VAR_13 = FUNC_3(VAR_14, VAR_10, &VAR_15);
    FUNC_5(VAR_13 == VAR_5, "Expected S_OK, got %08x\n", VAR_13);
    FUNC_5(VAR_15 == VAR_8, "got %ld\n", VAR_15);

    FUNC_4(VAR_14);
}
