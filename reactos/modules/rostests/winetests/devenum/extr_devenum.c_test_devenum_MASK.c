
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;
typedef void* LPVOID ;
typedef int IPropertyBag ;
typedef int IMoniker ;
typedef int IEnumMoniker ;
typedef int ICreateDevEnum ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int *,int *,int **,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int **,int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int *,void**) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *,int **) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (int,char*,...) ;
 int FUNC_20 (char*,int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_23(IBindCtx *VAR_14)
{
    IEnumMoniker *VAR_15, *VAR_16;
    ICreateDevEnum* VAR_17;
    IPropertyBag *VAR_18;
    IMoniker *VAR_19;
    GUID VAR_20, VAR_21;
    WCHAR *VAR_22;
    VARIANT VAR_23;
    HRESULT VAR_24;
    int VAR_25;

    VAR_24 = FUNC_1(&VAR_3, ((void*)0), VAR_0,
                           &VAR_7, (LPVOID*)&VAR_17);
    FUNC_19(VAR_24 == VAR_10, "Failed to create devenum: %#x\n", VAR_24);

    VAR_24 = FUNC_3(VAR_17, &VAR_1, &VAR_15, 0);
    FUNC_19(VAR_24 == VAR_10, "Failed to enum categories: %#x\n", VAR_24);

    while (FUNC_5(VAR_15, 1, &VAR_19, ((void*)0)) == VAR_10)
    {
        VAR_24 = FUNC_8(VAR_19, VAR_14, ((void*)0), &VAR_8, (void **)&VAR_18);
        FUNC_19(VAR_24 == VAR_10, "IMoniker_BindToStorage failed: %#x\n", VAR_24);

        FUNC_18(&VAR_23);
        VAR_24 = FUNC_12(VAR_18, VAR_11, &VAR_23, ((void*)0));
        FUNC_19(VAR_24 == VAR_10, "Failed to read CLSID: %#x\n", VAR_24);

        VAR_24 = FUNC_0(FUNC_16(&VAR_23), &VAR_20);
        FUNC_19(VAR_24 == VAR_10, "got %#x\n", VAR_24);

        FUNC_17(&VAR_23);
        VAR_24 = FUNC_12(VAR_18, VAR_12, &VAR_23, ((void*)0));
        FUNC_19(VAR_24 == VAR_10, "Failed to read FriendlyName: %#x\n", VAR_24);

        if (VAR_13 > 1)
            FUNC_20("%s %s:\n", FUNC_21(&VAR_20), FUNC_22(FUNC_16(&VAR_23)));

        FUNC_17(&VAR_23);
        FUNC_13(VAR_18);
        FUNC_11(VAR_19);

        VAR_24 = FUNC_3(VAR_17, &VAR_20, &VAR_16, 0);
        FUNC_19(FUNC_15(VAR_24), "Failed to enum devices: %#x\n", VAR_24);

        if (VAR_24 == VAR_10)
        {
            VAR_25 = 0;

            while (FUNC_5(VAR_16, 1, &VAR_19, ((void*)0)) == VAR_10)
            {
                VAR_24 = FUNC_10(VAR_19, ((void*)0), ((void*)0), &VAR_22);
                FUNC_19(VAR_24 == VAR_10, "got %#x\n", VAR_24);

                VAR_24 = FUNC_9(VAR_19, ((void*)0));
                FUNC_19(VAR_24 == VAR_5, "IMoniker_GetClassID should failed %x\n", VAR_24);

                VAR_24 = FUNC_9(VAR_19, &VAR_21);
                FUNC_19(VAR_24 == VAR_10, "IMoniker_GetClassID failed with error %x\n", VAR_24);
                FUNC_19(FUNC_14(&VAR_21, &VAR_2),
                   "Expected CLSID_CDeviceMoniker got %s\n", FUNC_21(&VAR_21));

                FUNC_18(&VAR_23);
                VAR_24 = FUNC_8(VAR_19, VAR_14, ((void*)0), &VAR_8, (LPVOID*)&VAR_18);
                FUNC_19(VAR_24 == VAR_10, "IMoniker_BindToStorage failed with error %x\n", VAR_24);

                VAR_24 = FUNC_12(VAR_18, VAR_12, &VAR_23, ((void*)0));
                FUNC_19((VAR_24 == VAR_10) | (VAR_24 == VAR_4),
     "IPropertyBag_Read failed: %#x\n", VAR_24);

                if (VAR_13 > 1)
                    FUNC_20("  %s %s\n", FUNC_22(VAR_22), FUNC_22(FUNC_16(&VAR_23)));

                VAR_24 = FUNC_7(VAR_19, VAR_14, ((void*)0), &VAR_9, ((void*)0));
                FUNC_19(VAR_24 == VAR_6, "got %#x\n", VAR_24);

                FUNC_17(&VAR_23);
                FUNC_2(VAR_22);
                FUNC_13(VAR_18);
                FUNC_11(VAR_19);
                VAR_25++;
            }
            FUNC_6(VAR_16);

            FUNC_19(VAR_25 > 0, "CreateClassEnumerator() returned S_OK but no devices were enumerated.\n");
        }
    }

    FUNC_6(VAR_15);
    FUNC_4(VAR_17);
}
