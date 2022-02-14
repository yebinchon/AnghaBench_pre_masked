
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int WCHAR ;
typedef int ULONG ;
typedef scalar_t__ UINT ;
typedef scalar_t__ LONG_PTR ;
typedef int IUnknown ;
typedef int IMMDeviceEnumerator ;
typedef int IMMDeviceCollection ;
typedef int IMMDevice ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__,int **) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int FUNC_12 (int ,int ,int *,int,char*,int,int *,int *) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(IMMDeviceEnumerator *VAR_8, IMMDeviceCollection *VAR_9)
{
    IMMDeviceCollection *VAR_10;
    IMMDeviceEnumerator *VAR_11;
    IUnknown *VAR_12;
    HRESULT VAR_13;
    ULONG VAR_14;
    UINT VAR_15;
    IMMDevice *VAR_16;


    FUNC_6(VAR_8);
    VAR_14 = FUNC_8(VAR_8);
    FUNC_13(VAR_14 == 2, "Reference count on parent is %u\n", VAR_14);

    VAR_14 = FUNC_1(VAR_9);
    FUNC_5(VAR_9);
    FUNC_13(VAR_14 == 2, "Invalid reference count %u on collection\n", VAR_14);

    VAR_13 = FUNC_4(VAR_9, &VAR_6, ((void*)0));
    FUNC_13(VAR_13 == VAR_3, "Null ppv returns %08x\n", VAR_13);

    VAR_13 = FUNC_4(VAR_9, &VAR_6, (void**)&VAR_12);
    FUNC_13(VAR_13 == VAR_7, "Cannot query for IID_IUnknown: 0x%08x\n", VAR_13);
    if (VAR_13 == VAR_7)
    {
        FUNC_13((IUnknown*)VAR_9 == VAR_12, "Pointers are not identical %p/%p/%p\n", VAR_9, VAR_12, VAR_8);
        FUNC_11(VAR_12);
    }

    VAR_13 = FUNC_4(VAR_9, &VAR_4, (void**)&VAR_10);
    FUNC_13(VAR_13 == VAR_7, "Cannot query for IID_IMMDeviceCollection: 0x%08x\n", VAR_13);
    if (VAR_13 == VAR_7)
        FUNC_5(VAR_10);

    VAR_13 = FUNC_4(VAR_9, &VAR_5, (void**)&VAR_11);
    FUNC_13(VAR_13 == VAR_2, "Query for IID_IMMDeviceEnumerator returned: 0x%08x\n", VAR_13);
    if (VAR_13 == VAR_7)
        FUNC_8(VAR_11);

    VAR_13 = FUNC_2(VAR_9, ((void*)0));
    FUNC_13(VAR_13 == VAR_3, "GetCount returned 0x%08x\n", VAR_13);

    VAR_13 = FUNC_2(VAR_9, &VAR_15);
    FUNC_13(VAR_13 == VAR_7, "GetCount returned 0x%08x\n", VAR_13);

    VAR_16 = (void*)(LONG_PTR)0x12345678;
    VAR_13 = FUNC_3(VAR_9, VAR_15, &VAR_16);
    FUNC_13(VAR_13 == VAR_1, "Asking for too high device returned 0x%08x\n", VAR_13);
    FUNC_13(VAR_16 == ((void*)0), "Returned non-null device\n");

    if (VAR_15)
    {
        VAR_13 = FUNC_3(VAR_9, 0, ((void*)0));
        FUNC_13(VAR_13 == VAR_3, "Query with null pointer returned 0x%08x\n", VAR_13);

        VAR_13 = FUNC_3(VAR_9, 0, &VAR_16);
        FUNC_13(VAR_13 == VAR_7, "Valid Item returned 0x%08x\n", VAR_13);
        FUNC_13(VAR_16 != ((void*)0), "Device is null!\n");
        if (VAR_16 != ((void*)0))
        {
            char VAR_17[128];
            WCHAR *VAR_18 = ((void*)0);
            if (FUNC_9(VAR_16, &VAR_18) == VAR_7)
            {
                IMMDevice *VAR_19;

                VAR_17[sizeof(VAR_17)-1] = 0;
                FUNC_12(VAR_0, 0, VAR_18, -1, VAR_17, sizeof(VAR_17)-1, ((void*)0), ((void*)0));
                FUNC_14("Device found: %s\n", VAR_17);

                VAR_13 = FUNC_7(VAR_8, VAR_18, &VAR_19);
                FUNC_13(VAR_13 == VAR_7, "GetDevice failed: %08x\n", VAR_13);

                FUNC_10(VAR_19);

                FUNC_0(VAR_18);
            }
        }
        if (VAR_16)
            FUNC_10(VAR_16);
    }
    FUNC_5(VAR_9);
}
