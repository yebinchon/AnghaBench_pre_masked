
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BG_JOB_STATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 float* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,float*) ;
 scalar_t__ FUNC_4 (int ,float*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (float*,int ) ;
 int FUNC_11 (float*,float const*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_16(void)
{
    static const WCHAR VAR_11[] = {'f','i','l','e',':','/','/', 0};
    static const int VAR_12 = 30;
    WCHAR *VAR_13, *VAR_14;
    HRESULT VAR_15;
    BG_JOB_STATE VAR_16;
    int VAR_17;

    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_13(VAR_9, "This is a WINE test file for BITS\n");
    FUNC_13(VAR_10, "This is another WINE test file for BITS\n");

    VAR_13 = FUNC_2(FUNC_1(), 0,
                     (7 + FUNC_12(VAR_9) + 1) * sizeof VAR_13[0]);
    VAR_14 = FUNC_2(FUNC_1(), 0,
                     (7 + FUNC_12(VAR_10) + 1) * sizeof VAR_14[0]);
    if (!VAR_13 || !VAR_14)
    {
        FUNC_15("Unable to allocate memory for URLs\n");
        FUNC_3(FUNC_1(), 0, VAR_13);
        FUNC_3(FUNC_1(), 0, VAR_14);
        return;
    }

    FUNC_11(VAR_13, VAR_11);
    FUNC_10(VAR_13, VAR_9);
    FUNC_11(VAR_14, VAR_11);
    FUNC_10(VAR_14, VAR_10);

    VAR_15 = FUNC_4(VAR_6, VAR_13, VAR_7);
    FUNC_14(VAR_15 == VAR_5, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_4(VAR_6, VAR_14, VAR_8);
    FUNC_14(VAR_15 == VAR_5, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_7(VAR_6);
    FUNC_14(VAR_15 == VAR_5, "IBackgroundCopyJob_Resume\n");

    for (VAR_17 = 0; VAR_17 < VAR_12; ++VAR_17)
    {
        VAR_15 = FUNC_6(VAR_6, &VAR_16);
        FUNC_14(VAR_15 == VAR_5, "IBackgroundCopyJob_GetState\n");
        FUNC_14(VAR_16 == VAR_2 || VAR_16 == VAR_1
           || VAR_16 == VAR_4 || VAR_16 == VAR_3,
           "Bad state: %d\n", VAR_16);
        if (VAR_16 == VAR_3)
            break;
        FUNC_8(1000);
    }

    FUNC_14(VAR_17 < VAR_12, "BITS jobs timed out\n");
    VAR_15 = FUNC_5(VAR_6);
    FUNC_14(VAR_15 == VAR_5, "IBackgroundCopyJob_Complete\n");
    VAR_15 = FUNC_6(VAR_6, &VAR_16);
    FUNC_14(VAR_15 == VAR_5, "IBackgroundCopyJob_GetState\n");
    FUNC_14(VAR_16 == VAR_0, "Bad state: %d\n", VAR_16);

    FUNC_9(VAR_9, VAR_7);
    FUNC_9(VAR_10, VAR_8);

    FUNC_14(FUNC_0(VAR_9), "DeleteFile\n");
    FUNC_14(FUNC_0(VAR_10), "DeleteFile\n");
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);

    FUNC_3(FUNC_1(), 0, VAR_13);
    FUNC_3(FUNC_1(), 0, VAR_14);
}
