
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int WCHAR ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int,int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int ,int,int ,int **) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int,char*,scalar_t__,...) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (int *,int *) ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(void)
{
    IStorage *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16;
    IStream *VAR_17;
    WCHAR VAR_18[64];
    HRESULT VAR_19;


    VAR_19 = FUNC_9(VAR_5, VAR_0 | VAR_2 | VAR_1, 0, &VAR_14);
    FUNC_12(VAR_19 == VAR_4, "StgCreateDocfile failed: 0x%08x\n", VAR_19);
    if(FUNC_1(VAR_19))
        goto cleanup;

    VAR_19 = FUNC_10(VAR_14);
    if(FUNC_1(VAR_19))
        goto cleanup;


    VAR_19 = FUNC_9(VAR_7, VAR_0 | VAR_2 | VAR_1, 0, &VAR_15);
    FUNC_12(VAR_19 == VAR_4, "StgCreateDocfile failed: 0x%08x\n", VAR_19);
    if(FUNC_1(VAR_19))
        goto cleanup;


    VAR_19 = FUNC_2(VAR_14, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_12(VAR_19 == VAR_3, "CopyTo should give STG_E_INVALIDPONITER, gave: 0x%08x\n", VAR_19);

    VAR_19 = FUNC_2(VAR_14, 0, ((void*)0), ((void*)0), VAR_15);
    FUNC_12(VAR_19 == VAR_4, "CopyTo failed: 0x%08x\n", VAR_19);
    if(FUNC_1(VAR_19))
        goto cleanup;


    VAR_19 = FUNC_3(VAR_15, VAR_9, ((void*)0),
            VAR_1 | VAR_2, ((void*)0), 0, &VAR_16);
    FUNC_12(VAR_19 == VAR_4, "OpenStorage failed: 0x%08x\n", VAR_19);

    if(FUNC_8(VAR_19)){
        VAR_19 = FUNC_4(VAR_16, VAR_11, ((void*)0),
                VAR_1 | VAR_2, 0, &VAR_17);
        FUNC_12(VAR_19 == VAR_4, "OpenStream failed: 0x%08x\n", VAR_19);

        if(FUNC_8(VAR_19)){
            FUNC_11(VAR_18, 0, sizeof(VAR_18));
            VAR_19 = FUNC_6(VAR_17, VAR_18, sizeof(VAR_18), ((void*)0));
            FUNC_12(VAR_19 == VAR_4, "Read failed: 0x%08x\n", VAR_19);
            if(FUNC_8(VAR_19))
                FUNC_12(FUNC_13(VAR_18, VAR_11) == 0,
                        "Expected %s to be read, got %s\n", FUNC_14(VAR_11), FUNC_14(VAR_18));

            FUNC_7(VAR_17);
        }

        FUNC_5(VAR_16);
    }

    VAR_19 = FUNC_3(VAR_15, VAR_10, ((void*)0),
            VAR_1 | VAR_2, ((void*)0), 0, &VAR_16);
    FUNC_12(VAR_19 == VAR_4, "OpenStorage failed: 0x%08x\n", VAR_19);

    if(FUNC_8(VAR_19)){
        VAR_19 = FUNC_4(VAR_16, VAR_12, ((void*)0),
                VAR_1 | VAR_2, 0, &VAR_17);
        FUNC_12(VAR_19 == VAR_4, "OpenStream failed: 0x%08x\n", VAR_19);

        if(FUNC_8(VAR_19)){
            FUNC_11(VAR_18, 0, sizeof(VAR_18));
            VAR_19 = FUNC_6(VAR_17, VAR_18, sizeof(VAR_18), ((void*)0));
            FUNC_12(VAR_19 == VAR_4, "Read failed: 0x%08x\n", VAR_19);
            if(FUNC_8(VAR_19))
                FUNC_12(FUNC_13(VAR_18, VAR_12) == 0,
                        "Expected %s to be read, got %s\n", FUNC_14(VAR_12), FUNC_14(VAR_18));

            FUNC_7(VAR_17);
        }

        FUNC_5(VAR_16);
    }

    VAR_19 = FUNC_4(VAR_15, VAR_13, ((void*)0),
            VAR_1 | VAR_2, 0, &VAR_17);
    FUNC_12(VAR_19 == VAR_4, "OpenStream failed: 0x%08x\n", VAR_19);

    if(FUNC_8(VAR_19)){
        FUNC_11(VAR_18, 0, sizeof(VAR_18));
        VAR_19 = FUNC_6(VAR_17, VAR_18, sizeof(VAR_18), ((void*)0));
        FUNC_12(VAR_19 == VAR_4, "Read failed: 0x%08x\n", VAR_19);
        if(FUNC_8(VAR_19))
            FUNC_12(FUNC_13(VAR_18, VAR_13) == 0,
                    "Expected %s to be read, got %s\n", FUNC_14(VAR_13), FUNC_14(VAR_18));

        FUNC_7(VAR_17);
    }

cleanup:
    if(VAR_14)
        FUNC_5(VAR_14);
    if(VAR_15)
        FUNC_5(VAR_15);

    FUNC_0(VAR_6);
    FUNC_0(VAR_8);
}
