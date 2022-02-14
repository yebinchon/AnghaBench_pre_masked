
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IPSFactoryBuffer ;
typedef scalar_t__ HRESULT ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int,int,int *,scalar_t__*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int *,int *,void**,int *,int *,int *) ;
 int FUNC_8 (int ,int ,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int,char*,scalar_t__) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_11(void)
{
    DWORD VAR_13, VAR_14, VAR_15;
    HANDLE VAR_16, VAR_17;
    IPSFactoryBuffer *VAR_18;
    HRESULT VAR_19;

    VAR_16 = FUNC_8(VAR_4, VAR_5, "wine_cstub_test_server_stop");
    VAR_17 = FUNC_8(VAR_4, VAR_5, "wine_cstub_test_server_ready");

    FUNC_0(((void*)0));

    VAR_19 = FUNC_1(&VAR_2, (IUnknown *)&VAR_12,
        VAR_1, VAR_8, &VAR_13);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);

    VAR_19 = FUNC_7(&VAR_3, &VAR_6, (void **)&VAR_18,
        &VAR_10, &VAR_3, &VAR_11);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);

    VAR_19 = FUNC_1(&VAR_3, (IUnknown *)VAR_18,
        VAR_0, VAR_8, &VAR_14);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);

    VAR_19 = FUNC_2(&VAR_7, &VAR_3);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);

    FUNC_9(VAR_17);

    VAR_19 = FUNC_5(0, 1000, 1, &VAR_16, &VAR_15);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);
    FUNC_10(!VAR_15, "got %u\n", VAR_15);

    VAR_19 = FUNC_3(VAR_14);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);

    VAR_19 = FUNC_3(VAR_13);
    FUNC_10(VAR_19 == VAR_9, "got %#x\n", VAR_19);

    FUNC_4();
    FUNC_6(0);
}
