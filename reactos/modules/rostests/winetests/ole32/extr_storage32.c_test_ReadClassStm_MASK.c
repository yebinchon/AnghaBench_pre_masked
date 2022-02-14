
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clsid2 ;
typedef int clsid ;
typedef int LARGE_INTEGER ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int const,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (scalar_t__,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(void)
{
    CLSID VAR_6, VAR_7;
    HRESULT VAR_8;
    IStream *VAR_9;
    static const LARGE_INTEGER VAR_10;

    VAR_8 = FUNC_4(((void*)0), &VAR_6);
    FUNC_7(VAR_8 == VAR_1, "ReadClassStm should have returned E_INVALIDARG instead of 0x%08x\n", VAR_8);

    VAR_8 = FUNC_0(((void*)0), VAR_4, &VAR_9);
    FUNC_8(VAR_8, "CreateStreamOnHGlobal");
    VAR_8 = FUNC_5(VAR_9, &VAR_5);
    FUNC_8(VAR_8, "WriteClassStm");

    VAR_8 = FUNC_4(VAR_9, ((void*)0));
    FUNC_7(VAR_8 == VAR_1, "ReadClassStm should have returned E_INVALIDARG instead of 0x%08x\n", VAR_8);

    FUNC_6(&VAR_6, 0xcc, sizeof(VAR_6));
    FUNC_6(&VAR_7, 0xcc, sizeof(VAR_7));
    VAR_8 = FUNC_4(((void*)0), &VAR_6);
    FUNC_7(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
    FUNC_7(FUNC_3(&VAR_6, &VAR_7), "got wrong clsid\n");


    VAR_8 = FUNC_4(VAR_9, &VAR_6);
    FUNC_7(VAR_8 == VAR_2, "ReadClassStm should have returned STG_E_READFAULT instead of 0x%08x\n", VAR_8);
    FUNC_7(FUNC_3(&VAR_6, &VAR_0), "clsid should have been zeroed\n");

    VAR_8 = FUNC_2(VAR_9, VAR_10, VAR_3, ((void*)0));
    FUNC_8(VAR_8, "IStream_Seek");
    VAR_8 = FUNC_4(VAR_9, &VAR_6);
    FUNC_8(VAR_8, "ReadClassStm");
    FUNC_7(FUNC_3(&VAR_6, &VAR_5), "clsid should have been set to CLSID_WineTest\n");

    FUNC_1(VAR_9);
}
