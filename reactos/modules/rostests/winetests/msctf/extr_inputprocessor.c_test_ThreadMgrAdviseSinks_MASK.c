
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int IUnknown ;
typedef int ITfSource ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int **) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int,char*,...) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_8(void)
{
    ITfSource *VAR_15 = ((void*)0);
    HRESULT VAR_16;
    IUnknown *VAR_17;

    VAR_16 = FUNC_3(VAR_9, &VAR_2, (LPVOID*)&VAR_15);
    FUNC_7(FUNC_5(VAR_16),"Failed to get IID_ITfSource for ThreadMgr\n");
    if (!VAR_15)
        return;

    VAR_16 = FUNC_6(&VAR_17);
    FUNC_7(VAR_16 == VAR_5, "got %08x\n", VAR_16);
    if(FUNC_0(VAR_16)) return;

    VAR_13 = 1;
    VAR_12 = 0;
    VAR_16 = FUNC_1(VAR_15,&VAR_3, VAR_17, &VAR_12);
    FUNC_7(VAR_16 == VAR_5, "Failed to Advise ITfThreadMgrEventSink\n");
    FUNC_7(VAR_12!=0,"Failed to get sink cookie\n");



    VAR_13 = 2;
    FUNC_4(VAR_17);

    VAR_16 = FUNC_1(VAR_15, &VAR_1, (IUnknown*)&VAR_7,
                              &VAR_10);
    FUNC_7(VAR_16 == VAR_5, "Failed to Advise ITfKeyTraceEventSink\n");

    VAR_16 = FUNC_1(VAR_15, &VAR_4, (IUnknown*)&VAR_8,
                              &VAR_14);
    FUNC_7(VAR_16 == VAR_5, "Failed to Advise ITfUIElementSink\n");

    VAR_16 = FUNC_1(VAR_15, &VAR_0, (IUnknown*)&VAR_6,
                              &VAR_11);
    FUNC_7(VAR_16 == VAR_5, "Failed to Advise ITfInputProcessorProfileActivationSink\n");

    FUNC_2(VAR_15);
}
