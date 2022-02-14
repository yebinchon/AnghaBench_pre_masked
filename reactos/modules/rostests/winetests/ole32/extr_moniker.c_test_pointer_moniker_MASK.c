
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPOLESTR ;
typedef int IUnknown ;
typedef int IStream ;
typedef int IROTData ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef int FILETIME ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int **,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *,void**) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int **) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_12 (int *,scalar_t__*) ;
 scalar_t__ FUNC_13 (int *,int *,void**) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (int,char*,scalar_t__,...) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (scalar_t__,...) ;

__attribute__((used)) static void FUNC_23(void)
{
    HRESULT VAR_12;
    IMoniker *VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    IBindCtx *VAR_16;
    FILETIME VAR_17;
    IMoniker *VAR_18;
    IUnknown *VAR_19;
    IStream *VAR_20;
    IROTData *VAR_21;
    LPOLESTR VAR_22;

    VAR_11 = 0;

    VAR_12 = FUNC_1((IUnknown *)&VAR_10, ((void*)0));
    FUNC_19(VAR_12 == VAR_0, "CreatePointerMoniker(x, NULL) should have returned E_INVALIDARG instead of 0x%08x\n", VAR_12);

    VAR_12 = FUNC_1((IUnknown *)&VAR_10, &VAR_13);
    FUNC_22(VAR_12, FUNC_1);
    if (!VAR_13) return;

    FUNC_20();



    VAR_12 = FUNC_0(0, &VAR_16);
    FUNC_22(VAR_12, FUNC_0);

    VAR_12 = FUNC_6(VAR_13, VAR_16, ((void*)0), &VAR_22);
    FUNC_19(VAR_12 == VAR_2, "IMoniker_GetDisplayName should have returned E_NOTIMPL instead of 0x%08x\n", VAR_12);

    FUNC_3(VAR_16);

    VAR_12 = FUNC_10(VAR_13);
    FUNC_19(VAR_12 == VAR_7, "IMoniker_IsDirty should return S_FALSE, not 0x%08x\n", VAR_12);



    VAR_12 = FUNC_13(VAR_13, &VAR_4, (void **)&VAR_21);
    FUNC_19(VAR_12 == VAR_1, "IMoniker_QueryInterface(IID_IROTData) should have returned E_NOINTERFACE instead of 0x%08x\n", VAR_12);



    VAR_12 = FUNC_2(((void*)0), VAR_9, &VAR_20);
    FUNC_22(VAR_12, FUNC_2);

    VAR_12 = FUNC_15(VAR_13, VAR_20, VAR_9);
    FUNC_19(VAR_12 == VAR_2, "IMoniker_Save should have returned E_NOTIMPL instead of 0x%08x\n", VAR_12);

    FUNC_16(VAR_20);


    VAR_12 = FUNC_8(VAR_13, &VAR_15);
    FUNC_22(VAR_12, FUNC_8);
    FUNC_19(VAR_15 == FUNC_18(&VAR_10),
        "Hash value should have been 0x%08x, instead of 0x%08x\n",
        FUNC_18(&VAR_10), VAR_15);


    VAR_12 = FUNC_12(VAR_13, &VAR_14);
    FUNC_22(VAR_12, FUNC_12);
    FUNC_19(VAR_14 == VAR_6,
        "dwMkSys != MKSYS_POINTERMONIKER, instead was 0x%08x\n",
        VAR_14);

    VAR_12 = FUNC_9(VAR_13, &VAR_18);
    FUNC_22(VAR_12, FUNC_9);
    FUNC_14(VAR_18);

    VAR_12 = FUNC_0(0, &VAR_16);
    FUNC_22(VAR_12, FUNC_0);


    VAR_12 = FUNC_11(VAR_13, VAR_16, ((void*)0), ((void*)0));
    FUNC_19(VAR_12 == VAR_8, "IMoniker_IsRunning should return S_OK, not 0x%08x\n", VAR_12);

    VAR_12 = FUNC_7(VAR_13, VAR_16, ((void*)0), &VAR_17);
    FUNC_19(VAR_12 == VAR_2, "IMoniker_GetTimeOfLastChange should return E_NOTIMPL, not 0x%08x\n", VAR_12);

    VAR_12 = FUNC_4(VAR_13, VAR_16, ((void*)0), &VAR_5, (void **)&VAR_19);
    FUNC_22(VAR_12, FUNC_4);
    FUNC_17(VAR_19);

    VAR_12 = FUNC_5(VAR_13, VAR_16, ((void*)0), &VAR_5, (void **)&VAR_19);
    FUNC_22(VAR_12, FUNC_5);
    FUNC_17(VAR_19);

    FUNC_14(VAR_13);

    FUNC_21();

    VAR_12 = FUNC_1(((void*)0), &VAR_13);
    FUNC_22(VAR_12, FUNC_1);

    VAR_12 = FUNC_4(VAR_13, VAR_16, ((void*)0), &VAR_5, (void **)&VAR_19);
    FUNC_19(VAR_12 == VAR_3, "IMoniker_BindToObject should have returned E_UNEXPECTED instead of 0x%08x\n", VAR_12);

    VAR_12 = FUNC_5(VAR_13, VAR_16, ((void*)0), &VAR_5, (void **)&VAR_19);
    FUNC_19(VAR_12 == VAR_3, "IMoniker_BindToStorage should have returned E_UNEXPECTED instead of 0x%08x\n", VAR_12);

    FUNC_3(VAR_16);

    FUNC_14(VAR_13);
}
