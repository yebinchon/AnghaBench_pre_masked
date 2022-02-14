
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ULONG ;
typedef int * LPDATAOBJECT ;
typedef void* HRESULT ;
typedef void* HGLOBAL ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 void* FUNC_3 (int **) ;
 void* FUNC_4 (char*,int **) ;
 scalar_t__ FUNC_5 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_6 (void*) ;
 void* FUNC_7 (int,int) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int *) ;
 void* FUNC_11 () ;
 void* FUNC_12 (int *) ;
 void* FUNC_13 (int *) ;
 void* FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 void* FUNC_17 (char*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* FUNC_18 (void*,void*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_19 (int,char*,...) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (char*) ;

__attribute__((used)) static void FUNC_26(void)
{
    HRESULT VAR_11;
    ULONG VAR_12;
    LPDATAOBJECT VAR_13, VAR_14, VAR_15;
    HGLOBAL VAR_16, VAR_17;
    void *VAR_18;

    VAR_10 = FUNC_17("stream format");
    VAR_9 = FUNC_17("storage format");
    VAR_7 = FUNC_17("global format");
    VAR_6 = FUNC_17("another format");
    VAR_8 = FUNC_17("one more format");

    VAR_11 = FUNC_4("data1", &VAR_13);
    FUNC_19(VAR_11 == VAR_5, "Failed to create data1 object: 0x%08x\n", VAR_11);
    if(FUNC_5(VAR_11))
        return;
    VAR_11 = FUNC_4("data2", &VAR_14);
    FUNC_19(VAR_11 == VAR_5, "Failed to create data2 object: 0x%08x\n", VAR_11);
    if(FUNC_5(VAR_11))
        return;
    VAR_11 = FUNC_3(&VAR_15);
    FUNC_19(VAR_11 == VAR_5, "Failed to create complex data object: 0x%08x\n", VAR_11);
    if(FUNC_5(VAR_11))
        return;

    VAR_11 = FUNC_14(VAR_13);
    FUNC_19(VAR_11 == VAR_0, "OleSetClipboard should have failed with CO_E_NOTINITIALIZED instead of 0x%08x\n", VAR_11);

    FUNC_1(((void*)0));
    VAR_11 = FUNC_14(VAR_13);
    FUNC_19(VAR_11 == VAR_0, "OleSetClipboard failed with 0x%08x\n", VAR_11);
    FUNC_2();

    VAR_11 = FUNC_12(((void*)0));
    FUNC_19(VAR_11 == VAR_5, "OleInitialize failed with error 0x%08x\n", VAR_11);

    VAR_11 = FUNC_14(VAR_13);
    FUNC_19(VAR_11 == VAR_5, "failed to set clipboard to data1, hr = 0x%08x\n", VAR_11);

    FUNC_20(VAR_13);

    VAR_11 = FUNC_13(VAR_13);
    FUNC_19(VAR_11 == VAR_5, "expected current clipboard to be data1, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(VAR_14);
    FUNC_19(VAR_11 == VAR_4, "did not expect current clipboard to be data2, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(((void*)0));
    FUNC_19(VAR_11 == VAR_4, "expect S_FALSE, hr = 0x%08x\n", VAR_11);

    FUNC_23();

    VAR_11 = FUNC_14(VAR_14);
    FUNC_19(VAR_11 == VAR_5, "failed to set clipboard to data2, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(VAR_13);
    FUNC_19(VAR_11 == VAR_4, "did not expect current clipboard to be data1, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(VAR_14);
    FUNC_19(VAR_11 == VAR_5, "expected current clipboard to be data2, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(((void*)0));
    FUNC_19(VAR_11 == VAR_4, "expect S_FALSE, hr = 0x%08x\n", VAR_11);



    VAR_16 = FUNC_7(VAR_1|VAR_2|VAR_3, 10);
    VAR_18 = FUNC_8( VAR_16 );
    FUNC_19( VAR_18 && VAR_18 != VAR_16, "got fixed block %p / %p\n", VAR_18, VAR_16 );
    FUNC_9( VAR_16 );
    FUNC_19( FUNC_16(((void*)0)), "OpenClipboard failed\n" );
    VAR_17 = FUNC_18(VAR_8, VAR_16);
    FUNC_19(VAR_17 == VAR_16, "got %p\n", VAR_17);
    VAR_17 = FUNC_6(VAR_8);
    FUNC_19(VAR_17 == VAR_16, "got %p / %p\n", VAR_17, VAR_16);
    VAR_18 = FUNC_8( VAR_17 );
    FUNC_19( VAR_18 && VAR_18 != VAR_17, "got fixed block %p / %p\n", VAR_18, VAR_17 );
    FUNC_9( VAR_16 );
    FUNC_19( FUNC_0(), "CloseClipboard failed\n" );

    VAR_11 = FUNC_11();
    FUNC_19(VAR_11 == VAR_5, "failed to flush clipboard, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(VAR_13);
    FUNC_19(VAR_11 == VAR_4, "did not expect current clipboard to be data1, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(VAR_14);
    FUNC_19(VAR_11 == VAR_4, "did not expect current clipboard to be data2, hr = 0x%08x\n", VAR_11);
    VAR_11 = FUNC_13(((void*)0));
    FUNC_19(VAR_11 == VAR_4, "expect S_FALSE, hr = 0x%08x\n", VAR_11);


    FUNC_19( FUNC_16(((void*)0)), "OpenClipboard failed\n" );
    VAR_17 = FUNC_6(VAR_8);
    FUNC_19(VAR_17 == VAR_16, "got %p\n", VAR_17);
    VAR_18 = FUNC_8( VAR_17 );
    FUNC_19( VAR_18 && VAR_18 != VAR_17, "got fixed block %p / %p\n", VAR_18, VAR_17 );
    FUNC_9( VAR_16 );
    FUNC_19( FUNC_0(), "CloseClipboard failed\n" );

    FUNC_20(((void*)0));

    FUNC_19(FUNC_14(((void*)0)) == VAR_5, "failed to clear clipboard, hr = 0x%08x\n", VAR_11);

    FUNC_16(((void*)0));
    VAR_17 = FUNC_6(VAR_8);
    FUNC_19(VAR_17 == ((void*)0), "got %p\n", VAR_17);
    FUNC_0();

    FUNC_25("setting complex\n");
    VAR_11 = FUNC_14(VAR_15);
    FUNC_19(VAR_11 == VAR_5, "failed to set clipboard to complex data, hr = 0x%08x\n", VAR_11);
    FUNC_21();
    FUNC_20(VAR_15);
    FUNC_22(VAR_15);

    FUNC_19(FUNC_14(((void*)0)) == VAR_5, "failed to clear clipboard, hr = 0x%08x\n", VAR_11);

    FUNC_24();
    FUNC_22(((void*)0));

    VAR_12 = FUNC_10(VAR_13);
    FUNC_19(VAR_12 == 0, "expected data1 ref=0, got %d\n", VAR_12);
    VAR_12 = FUNC_10(VAR_14);
    FUNC_19(VAR_12 == 0, "expected data2 ref=0, got %d\n", VAR_12);
    VAR_12 = FUNC_10(VAR_15);
    FUNC_19(VAR_12 == 0, "expected data_cmpl ref=0, got %d\n", VAR_12);

    FUNC_15();
}
