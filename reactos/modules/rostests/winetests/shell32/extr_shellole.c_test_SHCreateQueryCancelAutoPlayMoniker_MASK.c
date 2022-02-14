
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clsid ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CLSID ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,int *,int *,void**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (int **) ;
 int VAR_8 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(void)
{
    IBindCtx *VAR_9;
    IMoniker *VAR_10;
    IUnknown *VAR_11;
    CLSID VAR_12;
    HRESULT VAR_13;
    DWORD VAR_14;

    if (!&FUNC_11)
    {
        FUNC_12("SHCreateQueryCancelAutoPlayMoniker is not available, skipping tests.\n");
        return;
    }

    VAR_13 = FUNC_11(((void*)0));
    FUNC_10(VAR_13 == VAR_1, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_11(&VAR_10);
    FUNC_10(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);

    VAR_14 = -1;
    VAR_13 = FUNC_5(VAR_10, &VAR_14);
    FUNC_10(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);
    FUNC_10(VAR_14 == VAR_4, "got %d\n", VAR_14);

    FUNC_9(&VAR_12, 0, sizeof(VAR_12));
    VAR_13 = FUNC_4(VAR_10, &VAR_12);
    FUNC_10(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);
    FUNC_10(FUNC_7(&VAR_12, &VAR_0), "got %s\n", FUNC_13(&VAR_12));


    FUNC_8(VAR_6);
    FUNC_8(VAR_7);

    FUNC_1(0, &VAR_9);
    VAR_13 = FUNC_3(VAR_10, VAR_9, &VAR_8, &VAR_3, (void**)&VAR_11);
    FUNC_10(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
    FUNC_2(VAR_9);

    FUNC_0(VAR_6);
    FUNC_0(VAR_7);

    FUNC_6(VAR_10);
}
