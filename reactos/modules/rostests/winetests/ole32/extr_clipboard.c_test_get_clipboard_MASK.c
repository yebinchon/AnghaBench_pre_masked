
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwAspect; int lindex; } ;
typedef int STGMEDIUM ;
typedef int IDataObject ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ FORMATETC ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__,int ,int ) ;
 scalar_t__ FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_13 ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    HRESULT VAR_14;
    IDataObject *VAR_15;
    FORMATETC VAR_16;
    STGMEDIUM VAR_17;

    VAR_14 = FUNC_4(((void*)0));
    FUNC_8(VAR_14 == VAR_7, "OleGetClipboard(NULL) should return E_INVALIDARG instead of 0x%08x\n", VAR_14);

    VAR_14 = FUNC_4(&VAR_15);
    FUNC_8(VAR_14 == VAR_9, "OleGetClipboard failed with error 0x%08x\n", VAR_14);




    VAR_13 = VAR_8;

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_14 = FUNC_1(VAR_15, &VAR_16);
    FUNC_8(VAR_14 == VAR_9, "IDataObject_QueryGetData failed with error 0x%08x\n", VAR_14);

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_16.dwAspect = 0xdeadbeef;
    VAR_14 = FUNC_1(VAR_15, &VAR_16);
    FUNC_8(VAR_14 == VAR_4, "IDataObject_QueryGetData should have failed with DV_E_FORMATETC instead of 0x%08x\n", VAR_14);

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_16.dwAspect = VAR_2;
    VAR_14 = FUNC_1(VAR_15, &VAR_16);
    FUNC_8(VAR_14 == VAR_4, "IDataObject_QueryGetData should have failed with DV_E_FORMATETC instead of 0x%08x\n", VAR_14);

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_16.lindex = 256;
    VAR_14 = FUNC_1(VAR_15, &VAR_16);
    FUNC_8(VAR_14 == VAR_4 || FUNC_7(VAR_14 == VAR_9),
        "IDataObject_QueryGetData should have failed with DV_E_FORMATETC instead of 0x%08x\n", VAR_14);

    FUNC_3(VAR_16, VAR_0, VAR_12);
    VAR_14 = FUNC_1(VAR_15, &VAR_16);
    FUNC_8(VAR_14 == VAR_3, "IDataObject_QueryGetData should have failed with DV_E_CLIPFORMAT instead of 0x%08x\n", VAR_14);

    FUNC_3(VAR_16, VAR_1, VAR_11);
    VAR_14 = FUNC_1(VAR_15, &VAR_16);
    FUNC_8(VAR_14 == VAR_9, "IDataObject_QueryGetData failed with error 0x%08x\n", VAR_14);

    VAR_13 = VAR_10;



    VAR_6 = 0;

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_14 = FUNC_0(VAR_15, &VAR_16, &VAR_17);
    FUNC_8(VAR_14 == VAR_9, "IDataObject_GetData failed with error 0x%08x\n", VAR_14);
    if(FUNC_6(VAR_14)) FUNC_5(&VAR_17);

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_16.dwAspect = 0xdeadbeef;
    VAR_14 = FUNC_0(VAR_15, &VAR_16, &VAR_17);
    FUNC_8(VAR_14 == VAR_9, "IDataObject_GetData failed with error 0x%08x\n", VAR_14);
    if(FUNC_6(VAR_14)) FUNC_5(&VAR_17);

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_16.dwAspect = VAR_2;
    VAR_14 = FUNC_0(VAR_15, &VAR_16, &VAR_17);
    FUNC_8(VAR_14 == VAR_9, "IDataObject_GetData failed with error 0x%08x\n", VAR_14);
    if(FUNC_6(VAR_14)) FUNC_5(&VAR_17);

    FUNC_3(VAR_16, VAR_1, VAR_12);
    VAR_16.lindex = 256;
    VAR_14 = FUNC_0(VAR_15, &VAR_16, &VAR_17);
    FUNC_8(VAR_14 == VAR_4 || FUNC_7(VAR_14 == VAR_9), "IDataObject_GetData should have failed with DV_E_FORMATETC instead of 0x%08x\n", VAR_14);
    if (VAR_14 == VAR_9)
    {

        VAR_6--;
        FUNC_5(&VAR_17);
    }

    FUNC_3(VAR_16, VAR_0, VAR_12);
    VAR_14 = FUNC_0(VAR_15, &VAR_16, &VAR_17);
    FUNC_8(VAR_14 == VAR_4, "IDataObject_GetData should have failed with DV_E_FORMATETC instead of 0x%08x\n", VAR_14);
    if(FUNC_6(VAR_14)) FUNC_5(&VAR_17);

    FUNC_3(VAR_16, VAR_1, VAR_11);
    VAR_14 = FUNC_0(VAR_15, &VAR_16, &VAR_17);
    FUNC_8(VAR_14 == VAR_5, "IDataObject_GetData should have failed with DV_E_TYMED instead of 0x%08x\n", VAR_14);
    if(FUNC_6(VAR_14)) FUNC_5(&VAR_17);

    FUNC_8(VAR_6 == 6, "DataObjectImpl_GetData should have been called 6 times instead of %d times\n", VAR_6);

    FUNC_2(VAR_15);
}
