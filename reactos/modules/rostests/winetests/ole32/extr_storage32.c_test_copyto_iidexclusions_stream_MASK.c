
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (int ,int,int ,int **) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int,char*,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_11(void)
{
    IStorage *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17;
    IStream *VAR_18;
    HRESULT VAR_19;


    VAR_19 = FUNC_8(VAR_6, VAR_1 | VAR_3 | VAR_2, 0, &VAR_15);
    FUNC_10(VAR_19 == VAR_5, "StgCreateDocfile failed: 0x%08x\n", VAR_19);
    if(FUNC_1(VAR_19))
        goto cleanup;

    VAR_19 = FUNC_9(VAR_15);
    if(FUNC_1(VAR_19))
        goto cleanup;


    VAR_19 = FUNC_8(VAR_8, VAR_1 | VAR_3 | VAR_2, 0, &VAR_16);
    FUNC_10(VAR_19 == VAR_5, "StgCreateDocfile failed: 0x%08x\n", VAR_19);
    if(FUNC_1(VAR_19))
        goto cleanup;


    VAR_19 = FUNC_2(VAR_15, 1, &VAR_0, ((void*)0), VAR_16);
    FUNC_10(VAR_19 == VAR_5, "CopyTo failed: 0x%08x\n", VAR_19);
    if(FUNC_1(VAR_19))
        goto cleanup;


    VAR_19 = FUNC_3(VAR_16, VAR_10, ((void*)0),
            VAR_2 | VAR_3, ((void*)0), 0, &VAR_17);
    FUNC_10(VAR_19 == VAR_5, "OpenStorage failed: 0x%08x\n", VAR_19);

    if(FUNC_7(VAR_19)){
        VAR_19 = FUNC_4(VAR_17, VAR_12, ((void*)0),
                VAR_2 | VAR_3, 0, &VAR_18);
        FUNC_10(VAR_19 == VAR_4, "OpenStream should give STG_E_FILENOTFOUND, gave: 0x%08x\n", VAR_19);
        if(FUNC_7(VAR_19))
            FUNC_6(VAR_18);

        FUNC_5(VAR_17);
    }

    VAR_19 = FUNC_3(VAR_16, VAR_11, ((void*)0),
            VAR_2 | VAR_3, ((void*)0), 0, &VAR_17);
    FUNC_10(VAR_19 == VAR_5, "OpenStorage failed: 0x%08x\n", VAR_19);

    if(FUNC_7(VAR_19)){
        VAR_19 = FUNC_4(VAR_17, VAR_13, ((void*)0),
                VAR_2 | VAR_3, 0, &VAR_18);
        FUNC_10(VAR_19 == VAR_4, "OpenStream should give STG_E_FILENOTFOUND, gave: 0x%08x\n", VAR_19);
        if(FUNC_7(VAR_19))
            FUNC_6(VAR_18);

        FUNC_5(VAR_17);
    }

    VAR_19 = FUNC_4(VAR_16, VAR_14, ((void*)0),
            VAR_2 | VAR_3, 0, &VAR_18);
    FUNC_10(VAR_19 == VAR_4, "OpenStream should give STG_E_FILENOTFOUND, gave: 0x%08x\n", VAR_19);
    if(FUNC_7(VAR_19))
        FUNC_6(VAR_18);

cleanup:
    if(VAR_15)
        FUNC_5(VAR_15);
    if(VAR_16)
        FUNC_5(VAR_16);

    FUNC_0(VAR_7);
    FUNC_0(VAR_9);
}
