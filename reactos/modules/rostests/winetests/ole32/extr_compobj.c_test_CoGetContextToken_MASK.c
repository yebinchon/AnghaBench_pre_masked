
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int IUnknown ;
typedef int IObjContext ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int *,void**) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_7;
    ULONG VAR_8;
    ULONG_PTR VAR_9, VAR_10;
    IObjContext *VAR_11;

    if (!&FUNC_7)
    {
        FUNC_10("CoGetContextToken not present\n");
        return;
    }

    VAR_9 = 0xdeadbeef;
    VAR_7 = FUNC_7(&VAR_9);
    FUNC_6(VAR_7 == VAR_3, "Expected CO_E_NOTINITIALIZED, got 0x%08x\n", VAR_7);
    FUNC_6(VAR_9 == 0xdeadbeef, "Expected 0, got 0x%lx\n", VAR_9);

    FUNC_9(VAR_1, VAR_0);

    FUNC_0(((void*)0));

    FUNC_9(VAR_2, VAR_0);

    VAR_7 = FUNC_7(((void*)0));
    FUNC_6(VAR_7 == VAR_4, "Expected E_POINTER, got 0x%08x\n", VAR_7);

    VAR_9 = 0;
    VAR_7 = FUNC_7(&VAR_9);
    FUNC_6(VAR_7 == VAR_6, "Expected S_OK, got 0x%08x\n", VAR_7);
    FUNC_6(VAR_9, "Expected token != 0\n");

    VAR_10 = 0;
    VAR_7 = FUNC_7(&VAR_10);
    FUNC_6(VAR_7 == VAR_6, "Expected S_OK, got 0x%08x\n", VAR_7);
    FUNC_6(VAR_10 == VAR_9, "got different token\n");

    VAR_8 = FUNC_4((IUnknown *)VAR_9);
    FUNC_6(VAR_8 == 1, "Expected 1, got %u\n", VAR_8);

    VAR_7 = FUNC_8(&VAR_5, (void **)&VAR_11);
    FUNC_6(VAR_7 == VAR_6, "Expected S_OK, got 0x%08x\n", VAR_7);
    FUNC_6(VAR_11 == (IObjContext *)VAR_9, "Expected interface pointers to be the same\n");

    VAR_8 = FUNC_2(VAR_11);
    FUNC_6(VAR_8 == 3, "Expected 3, got %u\n", VAR_8);

    VAR_8 = FUNC_3(VAR_11);
    FUNC_6(VAR_8 == 2, "Expected 2, got %u\n", VAR_8);

    VAR_8 = FUNC_5((IUnknown *)VAR_9);
    FUNC_6(VAR_8 == 1, "Expected 1, got %u\n", VAR_8);


    VAR_9 = 0;
    VAR_7 = FUNC_7(&VAR_9);
    FUNC_6(VAR_7 == VAR_6, "Expected S_OK, got 0x%08x\n", VAR_7);
    FUNC_6(VAR_9, "Expected token != 0\n");
    FUNC_6(VAR_11 == (IObjContext *)VAR_9, "Expected interface pointers to be the same\n");

    VAR_8 = FUNC_2(VAR_11);
    FUNC_6(VAR_8 == 2, "Expected 1, got %u\n", VAR_8);

    VAR_8 = FUNC_3(VAR_11);
    FUNC_6(VAR_8 == 1, "Expected 0, got %u\n", VAR_8);

    VAR_8 = FUNC_3(VAR_11);
    FUNC_6(VAR_8 == 0, "Expected 0, got %u\n", VAR_8);

    FUNC_1();
}
