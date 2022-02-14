
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ const ULONG ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int,int ,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__ const,scalar_t__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_8(IStorage *VAR_8)
{
    IStorage *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    IStream *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    const ULONG VAR_14 = FUNC_6(VAR_5) * sizeof(WCHAR);
    const ULONG VAR_15 = FUNC_6(VAR_6) * sizeof(WCHAR);
    const ULONG VAR_16 = FUNC_6(VAR_7) * sizeof(WCHAR);
    ULONG VAR_17;
    HRESULT VAR_18;

    VAR_18 = FUNC_1(VAR_8, VAR_3, VAR_0 | VAR_1, 0, 0, &VAR_9);
    FUNC_7(VAR_18 == VAR_2, "IStorage_CreateStorage failed: 0x%08x\n", VAR_18);
    if(FUNC_0(VAR_18))
        goto cleanup;

    VAR_18 = FUNC_2(VAR_9, VAR_5, VAR_0 | VAR_1, 0, 0, &VAR_11);
    FUNC_7(VAR_18 == VAR_2, "IStorage_CreateStream failed: 0x%08x\n", VAR_18);
    if(FUNC_0(VAR_18))
        goto cleanup;

    VAR_18 = FUNC_5(VAR_11, VAR_5, VAR_14, &VAR_17);
    FUNC_7(VAR_18 == VAR_2 && VAR_17 == VAR_14, "IStream_Write failed: 0x%08x, %d of %d bytes written\n", VAR_18, VAR_17, VAR_14);

    VAR_18 = FUNC_1(VAR_8, VAR_4, VAR_0 | VAR_1, 0, 0, &VAR_10);
    FUNC_7(VAR_18 == VAR_2, "IStorage_CreateStorage failed: 0x%08x\n", VAR_18);
    if(FUNC_0(VAR_18))
        goto cleanup;

    VAR_18 = FUNC_2(VAR_10, VAR_6, VAR_0 | VAR_1, 0, 0, &VAR_12);
    FUNC_7(VAR_18 == VAR_2, "IStorage_CreateStream failed: 0x%08x\n", VAR_18);
    if(FUNC_0(VAR_18))
        goto cleanup;

    VAR_18 = FUNC_5(VAR_12, VAR_6, VAR_15, &VAR_17);
    FUNC_7(VAR_18 == VAR_2 && VAR_17 == VAR_15, "IStream_Write failed: 0x%08x, %d of %d bytes written\n", VAR_18, VAR_17, VAR_15);

    VAR_18 = FUNC_2(VAR_8, VAR_7, VAR_0 | VAR_1, 0, 0, &VAR_13);
    FUNC_7(VAR_18 == VAR_2, "IStorage_CreateStream failed: 0x%08x\n", VAR_18);
    if(FUNC_0(VAR_18))
        goto cleanup;

    VAR_18 = FUNC_5(VAR_13, VAR_7, VAR_16, &VAR_17);
    FUNC_7(VAR_18 == VAR_2 && VAR_17 == VAR_16, "IStream_Write failed: 0x%08x, %d of %d bytes written\n", VAR_18, VAR_17, VAR_16);

cleanup:
    if(VAR_13)
        FUNC_4(VAR_13);
    if(VAR_12)
        FUNC_4(VAR_12);
    if(VAR_10)
        FUNC_3(VAR_10);
    if(VAR_11)
        FUNC_4(VAR_11);
    if(VAR_9)
        FUNC_3(VAR_9);

    return VAR_18;
}
