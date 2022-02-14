
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef scalar_t__ BG_JOB_STATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_9(void)
{
    static const int VAR_11 = 30;
    HRESULT VAR_12;
    BG_JOB_STATE VAR_13;
    int VAR_14;

    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_7(VAR_9, "This is a WINE test file for BITS\n");
    FUNC_7(VAR_10, "This is another WINE test file for BITS\n");

    VAR_12 = FUNC_1(VAR_6, VAR_9,
                                      VAR_7);
    FUNC_8(VAR_12 == VAR_5, "got 0x%08x\n", VAR_12);

    VAR_12 = FUNC_1(VAR_6, VAR_10,
                                      VAR_8);
    FUNC_8(VAR_12 == VAR_5, "got 0x%08x\n", VAR_12);

    VAR_12 = FUNC_4(VAR_6);
    FUNC_8(VAR_12 == VAR_5, "IBackgroundCopyJob_Resume\n");

    for (VAR_14 = 0; VAR_14 < VAR_11; ++VAR_14)
    {
        VAR_12 = FUNC_3(VAR_6, &VAR_13);
        FUNC_8(VAR_12 == VAR_5, "IBackgroundCopyJob_GetState\n");
        FUNC_8(VAR_13 == VAR_2 || VAR_13 == VAR_1
           || VAR_13 == VAR_4 || VAR_13 == VAR_3,
           "Bad state: %d\n", VAR_13);
        if (VAR_13 == VAR_3)
            break;
        FUNC_5(1000);
    }

    FUNC_8(VAR_14 < VAR_11, "BITS jobs timed out\n");
    VAR_12 = FUNC_2(VAR_6);
    FUNC_8(VAR_12 == VAR_5, "IBackgroundCopyJob_Complete\n");
    VAR_12 = FUNC_3(VAR_6, &VAR_13);
    FUNC_8(VAR_12 == VAR_5, "IBackgroundCopyJob_GetState\n");
    FUNC_8(VAR_13 == VAR_0, "Bad state: %d\n", VAR_13);

    FUNC_6(VAR_9, VAR_7);
    FUNC_6(VAR_10, VAR_8);

    FUNC_8(FUNC_0(VAR_9), "DeleteFile\n");
    FUNC_8(FUNC_0(VAR_10), "DeleteFile\n");
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
}
