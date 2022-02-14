
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int ITfSource ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(void)
{
    ITfSource *VAR_8 = ((void*)0);
    HRESULT VAR_9;

    VAR_9 = FUNC_2(VAR_2, &VAR_0, (LPVOID*)&VAR_8);
    FUNC_4(FUNC_3(VAR_9),"Failed to get IID_ITfSource for ThreadMgr\n");
    if (!VAR_8)
        return;

    VAR_6 = 1;
    VAR_9 = FUNC_1(VAR_8, VAR_5);
    FUNC_4(VAR_9 == VAR_1, "Failed to unadvise ITfThreadMgrEventSink\n");

    VAR_9 = FUNC_1(VAR_8, VAR_3);
    FUNC_4(VAR_9 == VAR_1, "Failed to unadvise ITfKeyTraceEventSink\n");

    VAR_9 = FUNC_1(VAR_8, VAR_7);
    FUNC_4(VAR_9 == VAR_1, "Failed to unadvise ITfUIElementSink\n");

    VAR_9 = FUNC_1(VAR_8, VAR_4);
    FUNC_4(VAR_9 == VAR_1, "Failed to unadvise ITfInputProcessorProfileActivationSink\n");

    FUNC_0(VAR_8);
}
