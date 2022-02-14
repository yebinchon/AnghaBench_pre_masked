
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STGMEDIUM ;
typedef int IDataObject ;
typedef scalar_t__ HRESULT ;
typedef int FORMATETC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    HRESULT VAR_8;
    IDataObject *VAR_9;
    FORMATETC VAR_10;
    STGMEDIUM VAR_11;

    VAR_8 = FUNC_3(&VAR_9);
    FUNC_6(VAR_8 == VAR_4, "OleGetClipboard failed with error 0x%08x\n", VAR_8);

    VAR_3 = 0;

    FUNC_2(VAR_10, VAR_1, VAR_7);
    VAR_8 = FUNC_0(VAR_9, &VAR_10, &VAR_11);
    FUNC_6(VAR_8 == VAR_4, "IDataObject_GetData failed with error 0x%08x\n", VAR_8);
    if(FUNC_5(VAR_8)) FUNC_4(&VAR_11);

    FUNC_2(VAR_10, VAR_1, VAR_6);
    VAR_8 = FUNC_0(VAR_9, &VAR_10, &VAR_11);
    FUNC_6(VAR_8 == VAR_2, "IDataObject_GetData failed with error 0x%08x\n", VAR_8);
    if(FUNC_5(VAR_8)) FUNC_4(&VAR_11);

    FUNC_2(VAR_10, VAR_0, VAR_6);
    VAR_8 = FUNC_0(VAR_9, &VAR_10, &VAR_11);
    FUNC_6(VAR_8 == VAR_2, "IDataObject_GetData failed with error 0x%08x\n", VAR_8);
    if(FUNC_5(VAR_8)) FUNC_4(&VAR_11);

    FUNC_2(VAR_10, VAR_0, VAR_5);
    VAR_8 = FUNC_0(VAR_9, &VAR_10, &VAR_11);
    FUNC_6(VAR_8 == VAR_4, "IDataObject_GetData failed with error 0x%08x\n", VAR_8);
    if(FUNC_5(VAR_8)) FUNC_4(&VAR_11);

    FUNC_6(VAR_3 == 5,
            "DataObjectImpl_GetData called 5 times instead of %d times\n",
            VAR_3);
    FUNC_1(VAR_9);
}
