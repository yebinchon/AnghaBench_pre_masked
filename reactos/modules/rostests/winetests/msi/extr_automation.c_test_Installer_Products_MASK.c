
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szString ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int IUnknown ;
typedef int IEnumVARIANT ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int,int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int *,int **) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (int,char*,...) ;
 int FUNC_19 (char*,int *,int ) ;
 int FUNC_20 (char*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_21(BOOL VAR_11)
{
    WCHAR VAR_12[VAR_5];
    HRESULT VAR_13;
    int VAR_14;
    IUnknown *VAR_15 = ((void*)0);
    IEnumVARIANT *VAR_16 = ((void*)0);
    VARIANT VAR_17;
    ULONG VAR_18;
    int VAR_19, VAR_20;
    IDispatch *VAR_21 = ((void*)0);
    BOOL VAR_22 = VAR_1;


    VAR_13 = FUNC_9(&VAR_21);
    FUNC_18(VAR_13 == VAR_7, "Installer_Products failed, hresult 0x%08x\n", VAR_13);
    if (VAR_13 == VAR_7)
    {

        VAR_13 = FUNC_12(VAR_21, &VAR_15);
        FUNC_18(VAR_13 == VAR_7, "StringList_NewEnum failed, hresult 0x%08x\n", VAR_13);
        if (VAR_13 == VAR_7)
        {
            VAR_13 = FUNC_6(VAR_15, &VAR_2, (void **)&VAR_16);
            FUNC_18 (VAR_13 == VAR_7, "IUnknown::QueryInterface returned 0x%08x\n", VAR_13);
        }
        if (!VAR_16)
            FUNC_20("IEnumVARIANT tests\n");


        VAR_13 = FUNC_10(VAR_21, &VAR_19);
        FUNC_18(VAR_13 == VAR_7, "StringList_Count failed, hresult 0x%08x\n", VAR_13);

        for (VAR_14=0; VAR_14<VAR_19; VAR_14++)
        {

            FUNC_17(VAR_12, 0, sizeof(VAR_12));
            VAR_13 = FUNC_11(VAR_21, VAR_14, VAR_12);
            FUNC_18(VAR_13 == VAR_7, "StringList_Item failed (idx %d, count %d), hresult 0x%08x\n", VAR_14, VAR_19, VAR_13);

            if (VAR_13 == VAR_7)
            {

                VAR_13 = FUNC_8(VAR_12, &VAR_20);
                FUNC_18(VAR_13 == VAR_7, "Installer_ProductState failed, hresult 0x%08x\n", VAR_13);
                if (VAR_13 == VAR_7)
                    FUNC_18(VAR_20 == VAR_4 || VAR_20 == VAR_3, "Installer_ProductState returned %d, expected %d or %d\n", VAR_20, VAR_4, VAR_3);


                if (!VAR_22 && !FUNC_16(VAR_12, VAR_10))
                    VAR_22 = VAR_8;


                if (VAR_16)
                {
                    VAR_13 = FUNC_2(VAR_16, 1, &VAR_17, &VAR_18);
                    FUNC_18(VAR_13 == VAR_7, "IEnumVARIANT_Next failed (idx %d, count %d), hresult 0x%08x\n", VAR_14, VAR_19, VAR_13);
                    FUNC_18(VAR_18 == 1, "%d items were retrieved, expected 1\n", VAR_18);
                    FUNC_18(FUNC_14(&VAR_17) == VAR_9, "IEnumVARIANT_Next returned variant of type %d, expected %d\n", FUNC_14(&VAR_17), VAR_9);
                    FUNC_19("%s returned by StringList_Item does not match %s returned by IEnumVARIANT_Next\n", VAR_12, FUNC_13(&VAR_17));
                    FUNC_15(&VAR_17);
                }
            }
        }

        if (VAR_11)
        {
            FUNC_18(VAR_11 == VAR_22, "Product expected to %s installed but product code was %s\n",
               VAR_11 ? "be" : "not be",
               VAR_22 ? "found" : "not found");
        }

        if (VAR_16)
        {
            IEnumVARIANT *VAR_23 = ((void*)0);

            if (0)
            {

                FUNC_1(VAR_16, ((void*)0));
            }


            VAR_13 = FUNC_1(VAR_16, &VAR_23);
            FUNC_18(VAR_13 == VAR_7, "IEnumVARIANT_Clone failed, hresult 0x%08x\n", VAR_13);
            if (VAR_13 == VAR_7)
            {



                if (VAR_19)
                {
                    VAR_13 = FUNC_2(VAR_23, 1, &VAR_17, &VAR_18);
                    FUNC_18(VAR_13 == VAR_7, "IEnumVARIANT_Next failed, hresult 0x%08x\n", VAR_13);
                    FUNC_18(VAR_18 == 1, "%d items were retrieved, expected 0\n", VAR_18);
                    FUNC_18(FUNC_14(&VAR_17) == VAR_9, "IEnumVARIANT_Next returned variant of type %d, expected %d\n", FUNC_14(&VAR_17), VAR_9);
                    FUNC_15(&VAR_17);
                }
                else
                    FUNC_20("IEnumVARIANT::Next of clone will not return success with 0 products\n");

                FUNC_3(VAR_23);
            }


            VAR_13 = FUNC_5(VAR_16, 1);
            FUNC_18(VAR_13 == VAR_6, "IEnumVARIANT_Skip failed, hresult 0x%08x\n", VAR_13);


            VAR_13 = FUNC_2(VAR_16, 1, ((void*)0), &VAR_18);
            FUNC_18(VAR_13 == VAR_6, "IEnumVARIANT_Next failed, hresult 0x%08x\n", VAR_13);
            FUNC_18(VAR_18 == 0, "%d items were retrieved, expected 0\n", VAR_18);


            VAR_13 = FUNC_2(VAR_16, 1, &VAR_17, &VAR_18);
            FUNC_18(VAR_13 == VAR_6, "IEnumVARIANT_Next failed, hresult 0x%08x\n", VAR_13);
            FUNC_18(VAR_18 == 0, "%d items were retrieved, expected 0\n", VAR_18);
            FUNC_15(&VAR_17);


            VAR_13 = FUNC_4(VAR_16);
            FUNC_18(VAR_13 == VAR_7, "IEnumVARIANT_Reset failed, hresult 0x%08x\n", VAR_13);

            if (VAR_19)
            {

                VAR_13 = FUNC_5(VAR_16, VAR_19-1);
                FUNC_18(VAR_13 == VAR_7, "IEnumVARIANT_Skip failed, hresult 0x%08x\n", VAR_13);



                VAR_13 = FUNC_2(VAR_16, 1, &VAR_17, ((void*)0));
                FUNC_18(VAR_13 == VAR_7, "IEnumVARIANT_Next failed (idx %d, count %d), hresult 0x%08x\n", VAR_14, VAR_19, VAR_13);
                FUNC_18(FUNC_14(&VAR_17) == VAR_9, "IEnumVARIANT_Next returned variant of type %d, expected %d\n", FUNC_14(&VAR_17), VAR_9);
                FUNC_19("%s returned by StringList_Item does not match %s returned by IEnumVARIANT_Next\n", VAR_12, FUNC_13(&VAR_17));
                FUNC_15(&VAR_17);
            }
            else
                FUNC_20("IEnumVARIANT::Skip impossible for 0 products\n");
        }


        FUNC_17(VAR_12, 0, sizeof(VAR_12));
        VAR_13 = FUNC_11(VAR_21, VAR_19, VAR_12);
        FUNC_18(VAR_13 == VAR_0, "StringList_Item for an invalid index did not return DISP_E_BADINDEX, hresult 0x%08x\n", VAR_13);

        if (VAR_16) FUNC_3(VAR_16);
        if (VAR_15) FUNC_7(VAR_15);
        FUNC_0(VAR_21);
    }
}
