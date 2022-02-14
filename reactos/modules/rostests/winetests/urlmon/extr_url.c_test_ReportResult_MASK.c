
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IMoniker ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int **) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,char*,scalar_t__,...) ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_12(HRESULT VAR_17)
{
    IMoniker *VAR_18 = ((void*)0);
    IBindCtx *VAR_19 = ((void*)0);
    IUnknown *VAR_20 = (void*)0xdeadbeef;
    HRESULT VAR_21;

    FUNC_9(VAR_0, VAR_1, VAR_12);
    VAR_14 = VAR_17;

    VAR_21 = FUNC_3(((void*)0), VAR_13, &VAR_18);
    FUNC_11(VAR_21 == VAR_9, "CreateURLMoniker failed: %08x\n", VAR_21);

    FUNC_7(VAR_8);
    VAR_21 = FUNC_2(0, (IBindStatusCallback*)&VAR_15, ((void*)0), &VAR_19);
    FUNC_11(VAR_21 == VAR_9, "CreateAsyncBindCtx failed: %08x\n\n", VAR_21);
    FUNC_0(VAR_8);

    FUNC_7(VAR_6);
    FUNC_7(VAR_2);
    FUNC_7(VAR_7);
    FUNC_7(VAR_5);
    if(FUNC_10(VAR_16))
        FUNC_7(VAR_10);
    FUNC_7(VAR_11);

    VAR_21 = FUNC_5(VAR_18, VAR_19, ((void*)0), &VAR_3, (void**)&VAR_20);
    if(FUNC_8(VAR_17))
        FUNC_11(VAR_21 == VAR_9 || VAR_21 == VAR_4, "BindToStorage failed: %08x\n", VAR_21);
    else
        FUNC_11(VAR_21 == VAR_17 || VAR_21 == VAR_4,
           "BindToStorage failed: %08x, expected %08x or MK_S_ASYNCHRONOUS\n", VAR_21, VAR_17);

    FUNC_1(VAR_6);
    FUNC_0(VAR_2);
    FUNC_0(VAR_7);
    FUNC_0(VAR_5);
    if(FUNC_10(VAR_16))
        FUNC_1(VAR_10);
    FUNC_0(VAR_11);

    FUNC_11(VAR_20 == ((void*)0), "unk=%p\n", VAR_20);

    FUNC_4(VAR_19);
    FUNC_6(VAR_18);
}
