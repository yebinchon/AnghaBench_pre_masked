
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int * pFilter; } ;
typedef TYPE_1__ PIN_INFO ;
typedef scalar_t__ PIN_DIRECTION ;
typedef int LPVOID ;
typedef int IPin ;
typedef int IFileSourceFilter ;
typedef int IEnumPins ;
typedef int IBaseFilter ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int FILTER_STATE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int,int **,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (int *,int **) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,scalar_t__*) ;
 scalar_t__ FUNC_20 (int *,TYPE_1__*) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int *,void**) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_23 (scalar_t__,char*,int,int*,int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int * FUNC_24 (int ) ;
 int FUNC_25 (char*,int ,int) ;
 int FUNC_26 (int,char*,scalar_t__) ;
 int VAR_16 ;
 int FUNC_27 (char*,...) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 scalar_t__ FUNC_29 (char*,char*,int) ;
 int FUNC_30 (char*,scalar_t__) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static void FUNC_33(void)
{
    IFileSourceFilter *VAR_17 = ((void*)0);
    IBaseFilter *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    IEnumPins *VAR_20 = ((void*)0);
    IPin *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    HRESULT VAR_23;
    HANDLE VAR_24 = ((void*)0);
    PIN_DIRECTION VAR_25 = VAR_12;
    char VAR_26[13];
    DWORD VAR_27;
    FILTER_STATE VAR_28;

    WCHAR *VAR_29 = FUNC_24(VAR_15);

    VAR_24 = FUNC_2(VAR_29, VAR_6, VAR_4|VAR_5,
        ((void*)0), VAR_11, 0, ((void*)0));
    if (VAR_24 == VAR_10)
    {
        FUNC_27("Could not read test file \"%s\", skipping test\n", FUNC_32(VAR_29));
        FUNC_3(VAR_29);
        return;
    }

    FUNC_25(VAR_26, 0, 13);
    VAR_27 = 12;
    FUNC_23(VAR_24, VAR_26, VAR_27, &VAR_27, ((void*)0));
    FUNC_0(VAR_24);
    if (FUNC_29(VAR_26, "RIFF", 4) || FUNC_28(VAR_26 + 8, "AVI "))
    {
        FUNC_27("%s is not an avi riff file, not doing the avi splitter test\n",
            FUNC_32(VAR_29));
        FUNC_3(VAR_29);
        return;
    }

    VAR_23 = FUNC_22(VAR_16, &VAR_8,
        (void **)&VAR_17);
    FUNC_26(VAR_23 == VAR_3,
        "Avi splitter returns unexpected error: %08x\n", VAR_23);
    if (VAR_17)
        FUNC_15(VAR_17);
    VAR_17 = ((void*)0);

    VAR_23 = FUNC_1(&VAR_1, ((void*)0), VAR_0,
        &VAR_7, (LPVOID*)&VAR_18);
    FUNC_26(VAR_23 == VAR_14, "Could not create asynchronous reader: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    VAR_23 = FUNC_7(VAR_18, &VAR_8,
        (void**)&VAR_17);
    FUNC_26(VAR_23 == VAR_14, "Could not get IFileSourceFilter: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    VAR_23 = FUNC_22(VAR_16, &VAR_7,
        (void**)&VAR_19);
    FUNC_26(VAR_23 == VAR_14, "Could not get base filter: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    VAR_23 = FUNC_14(VAR_17, VAR_29, ((void*)0));
    if (VAR_23 != VAR_14)
    {
        FUNC_30("Could not load file: %08x\n", VAR_23);
        goto fail;
    }

    VAR_23 = FUNC_4(VAR_18, &VAR_20);
    FUNC_26(VAR_23 == VAR_14, "No enumpins: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    VAR_23 = FUNC_11(VAR_20, 1, &VAR_21, ((void*)0));
    FUNC_26(VAR_23 == VAR_14, "No pin: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    FUNC_12(VAR_20);
    VAR_20 = ((void*)0);

    VAR_23 = FUNC_4(VAR_19, &VAR_20);
    FUNC_26(VAR_23 == VAR_14, "No enumpins: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    VAR_23 = FUNC_11(VAR_20, 1, &VAR_22, ((void*)0));
    FUNC_26(VAR_23 == VAR_14, "No pin: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    VAR_23 = FUNC_16(VAR_21, VAR_22, ((void*)0));
    FUNC_26(VAR_23 == VAR_14, "Could not connect: %08x\n", VAR_23);
    if (VAR_23 != VAR_14)
        goto fail;

    FUNC_21(VAR_22);
    VAR_22 = ((void*)0);

    FUNC_13(VAR_20);





    while (FUNC_11(VAR_20, 1, &VAR_22, ((void*)0)) == VAR_14)
    {
        FUNC_19(VAR_22, &VAR_25);
        if (VAR_25 == VAR_12)
        {

            IBaseFilter *VAR_30 = ((void*)0);
            IEnumPins *VAR_31 = ((void*)0);
            IPin *VAR_32 = ((void*)0);

            VAR_23 = FUNC_1(&VAR_2, ((void*)0),
                VAR_0, &VAR_7, (LPVOID*)&VAR_30);
            if (VAR_23 == VAR_13)
            {
                FUNC_31("Null renderer not registered, skipping\n");
                break;
            }
            FUNC_26(VAR_23 == VAR_14, "Could not create null renderer: %08x\n", VAR_23);

            VAR_23 = FUNC_4(VAR_30, &VAR_31);
            FUNC_26(VAR_23 == VAR_14, "Failed to enum pins, hr %#x.\n", VAR_23);
            VAR_23 = FUNC_11(VAR_31, 1, &VAR_32, ((void*)0));
            FUNC_26(VAR_23 == VAR_14, "Failed to get next pin, hr %#x.\n", VAR_23);
            FUNC_12(VAR_31);
            FUNC_19(VAR_32, &VAR_25);

            VAR_23 = FUNC_16(VAR_22, VAR_32, ((void*)0));
            FUNC_26(VAR_23 == VAR_14, "Failed to connect output pin: %08x\n", VAR_23);
            FUNC_21(VAR_32);
            if (VAR_23 != VAR_14)
            {
                FUNC_8(VAR_30);
                break;
            }
            FUNC_9(VAR_30, 0);
        }

        FUNC_21(VAR_22);
        VAR_22 = ((void*)0);
    }

    if (VAR_22)
        FUNC_21(VAR_22);
    VAR_22 = ((void*)0);

    if (VAR_23 != VAR_14)
        goto fail2;
    FUNC_9(VAR_18, 0);
    FUNC_9(VAR_19, 0);
    FUNC_5(VAR_19, VAR_9, &VAR_28);

    FUNC_6(VAR_19);
    FUNC_6(VAR_18);
    FUNC_10(VAR_19);
    FUNC_10(VAR_18);
    FUNC_5(VAR_19, VAR_9, &VAR_28);
    FUNC_5(VAR_18, VAR_9, &VAR_28);

fail2:
    FUNC_13(VAR_20);
    while (FUNC_11(VAR_20, 1, &VAR_22, ((void*)0)) == VAR_14)
    {
        IPin *VAR_33 = ((void*)0);

        FUNC_19(VAR_22, &VAR_25);
        FUNC_17(VAR_22, &VAR_33);
        if (VAR_33)
        {
            FUNC_21(VAR_33);

            if (VAR_25 == VAR_12)
            {
                PIN_INFO VAR_34;

                VAR_23 = FUNC_20(VAR_33, &VAR_34);
                FUNC_26(VAR_23 == VAR_14, "Failed to query pin info, hr %#x.\n", VAR_23);




                FUNC_10(VAR_34.pFilter);
                FUNC_18(VAR_33);
                FUNC_18(VAR_22);
                FUNC_8(VAR_34.pFilter);
                FUNC_8(VAR_34.pFilter);
            }
            else
            {
                FUNC_18(VAR_33);
                FUNC_18(VAR_22);
            }
        }
        FUNC_21(VAR_22);
        VAR_22 = ((void*)0);
    }

fail:
    if (VAR_23 != VAR_14)
        FUNC_27("Prerequisites not matched, skipping remainder of test\n");
    if (VAR_20)
        FUNC_12(VAR_20);

    if (VAR_22)
        FUNC_21(VAR_22);
    if (VAR_21)
    {
        IPin *VAR_35 = ((void*)0);

        FUNC_17(VAR_21, &VAR_35);
        if (VAR_35)
        {
            FUNC_18(VAR_21);
            FUNC_18(VAR_35);
        }
        FUNC_21(VAR_21);
    }

    if (VAR_18)
        FUNC_8(VAR_18);
    if (VAR_19)
        FUNC_8(VAR_19);
    if (VAR_17)
        FUNC_15(VAR_17);

    FUNC_3(VAR_29);
}
