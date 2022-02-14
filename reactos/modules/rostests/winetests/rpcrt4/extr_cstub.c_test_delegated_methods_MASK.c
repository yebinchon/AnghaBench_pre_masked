
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int ITest1 ;
typedef int IPSFactoryBuffer ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,void**,int *,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int) ;
 int VAR_10 ;
 int FUNC_12 (char*) ;
 int VAR_11 ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(void)
{
    HANDLE VAR_12, VAR_13, VAR_14;
    IPSFactoryBuffer *VAR_15;
    ITest1 *VAR_16;
    DWORD VAR_17;
    CLSID VAR_18;
    HRESULT VAR_19;
    int VAR_20;

    VAR_13 = FUNC_4(((void*)0), VAR_9, VAR_4, "wine_cstub_test_server_stop");
    VAR_14 = FUNC_4(((void*)0), VAR_9, VAR_4, "wine_cstub_test_server_ready");

    VAR_12 = FUNC_12("server");
    FUNC_13(!FUNC_11(VAR_14, 1000), "wait failed\n");

    VAR_19 = FUNC_9(&VAR_3, &VAR_5, (void **)&VAR_15,
        &VAR_10, &VAR_3, &VAR_11);
    FUNC_13(VAR_19 == VAR_8, "got %#x\n", VAR_19);

    VAR_19 = FUNC_1(&VAR_3, (IUnknown *)VAR_15,
        VAR_0, VAR_7, &VAR_17);
    FUNC_13(VAR_19 == VAR_8, "got %#x\n", VAR_19);

    VAR_19 = FUNC_2(&VAR_6, &VAR_3);
    FUNC_13(VAR_19 == VAR_8, "got %#x\n", VAR_19);

    VAR_19 = FUNC_0(&VAR_2, ((void*)0), VAR_1, &VAR_6, (void **)&VAR_16);
    FUNC_13(VAR_19 == VAR_8, "got %#x\n", VAR_19);

    VAR_20 = FUNC_7(VAR_16, 3);
    FUNC_13(VAR_20 == 9, "got %d\n", VAR_20);

    VAR_19 = FUNC_5(VAR_16, &VAR_18);
    FUNC_13(VAR_19 == VAR_8, "got %#x\n", VAR_19);
    FUNC_13(FUNC_8(&VAR_18, &VAR_2), "got %s\n", FUNC_14(&VAR_18));

    FUNC_6(VAR_16);

    FUNC_10(VAR_13);
    FUNC_13(!FUNC_11(VAR_12, 1000), "wait failed\n");

    VAR_19 = FUNC_3(VAR_17);
    FUNC_13(VAR_19 == VAR_8, "got %#x\n", VAR_19);
}
