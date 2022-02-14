
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int const WCHAR ;
typedef int SNB ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int const* const,int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int const* const,int *,int,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int const*,int,int *) ;
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
 int FUNC_11 (int const*,int ,int) ;
 int FUNC_12 (int,char*,scalar_t__,...) ;

 int const* const VAR_9 ;
 scalar_t__ FUNC_13 (int const*,int const* const) ;
 int const* const VAR_10 ;


 int FUNC_14 (int const*) ;

__attribute__((used)) static void FUNC_15(void)
{
    static const WCHAR *VAR_11[] = {130, 129, 128, 0};

    IStorage *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14;
    IStream *VAR_15;
    WCHAR VAR_16[64];
    HRESULT VAR_17;


    VAR_17 = FUNC_9(VAR_5, VAR_0 | VAR_2 | VAR_1, 0, &VAR_12);
    FUNC_12(VAR_17 == VAR_4, "StgCreateDocfile failed: 0x%08x\n", VAR_17);
    if(FUNC_1(VAR_17))
        goto cleanup;

    VAR_17 = FUNC_10(VAR_12);
    if(FUNC_1(VAR_17))
        goto cleanup;


    VAR_17 = FUNC_9(VAR_7, VAR_0 | VAR_2 | VAR_1, 0, &VAR_13);
    FUNC_12(VAR_17 == VAR_4, "StgCreateDocfile failed: 0x%08x\n", VAR_17);
    if(FUNC_1(VAR_17))
        goto cleanup;


    VAR_17 = FUNC_2(VAR_12, 0, ((void*)0), (SNB)VAR_11, VAR_13);
    FUNC_12(VAR_17 == VAR_4, "CopyTo failed: 0x%08x\n", VAR_17);
    if(FUNC_1(VAR_17))
        goto cleanup;


    VAR_17 = FUNC_3(VAR_13, 130, ((void*)0),
            VAR_1 | VAR_2, ((void*)0), 0, &VAR_14);
    FUNC_12(VAR_17 == VAR_3, "OpenStorage should give STG_E_FILENOTFOUND, gave: 0x%08x\n", VAR_17);
    if(FUNC_8(VAR_17))
        FUNC_5(VAR_14);

    VAR_17 = FUNC_4(VAR_13, VAR_10, ((void*)0),
            VAR_1 | VAR_2, 0, &VAR_15);
    FUNC_12(VAR_17 == VAR_3, "OpenStream should give STG_E_FILENOTFOUND, gave: 0x%08x\n", VAR_17);
    if(FUNC_8(VAR_17))
        FUNC_7(VAR_15);

    VAR_17 = FUNC_3(VAR_13, VAR_9, ((void*)0),
            VAR_1 | VAR_2, ((void*)0), 0, &VAR_14);
    FUNC_12(VAR_17 == VAR_4, "OpenStorage failed: 0x%08x\n", VAR_17);

    if(FUNC_8(VAR_17)){
        VAR_17 = FUNC_4(VAR_14, 129, ((void*)0),
                VAR_1 | VAR_2, 0, &VAR_15);
        FUNC_12(VAR_17 == VAR_4, "OpenStream failed: 0x%08x\n", VAR_17);

        if(FUNC_8(VAR_17)){
            FUNC_11(VAR_16, 0, sizeof(VAR_16));
            VAR_17 = FUNC_6(VAR_15, VAR_16, sizeof(VAR_16), ((void*)0));
            FUNC_12(VAR_17 == VAR_4, "Read failed: 0x%08x\n", VAR_17);
            if(FUNC_8(VAR_17))
                FUNC_12(FUNC_13(VAR_16, 129) == 0,
                        "Expected %s to be read, got %s\n", FUNC_14(129), FUNC_14(VAR_16));

            FUNC_7(VAR_15);
        }

        FUNC_5(VAR_14);
    }

    VAR_17 = FUNC_4(VAR_13, 128, ((void*)0),
            VAR_1 | VAR_2, 0, &VAR_15);
    FUNC_12(VAR_17 == VAR_3, "OpenStream should give STG_E_FILENOTFOUND, gave: 0x%08x\n", VAR_17);
    if(FUNC_8(VAR_17))
        FUNC_7(VAR_15);

cleanup:
    if(VAR_12)
        FUNC_5(VAR_12);
    if(VAR_13)
        FUNC_5(VAR_13);

    FUNC_0(VAR_6);
    FUNC_0(VAR_8);
}
