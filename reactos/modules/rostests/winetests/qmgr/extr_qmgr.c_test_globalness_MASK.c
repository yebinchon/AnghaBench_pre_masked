
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int LPWSTR ;
typedef int IEnumBackgroundCopyJobs ;
typedef int IBackgroundCopyManager ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,int,int **,int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_15(void)
{
    static const WCHAR VAR_7[] = {'t','e','s','t','_','%','u', 0};
    WCHAR VAR_8[VAR_4];
    IEnumBackgroundCopyJobs* VAR_9;
    IBackgroundCopyManager *VAR_10 = ((void*)0);
    HRESULT VAR_11;
    VAR_11 = FUNC_0(&VAR_1, ((void*)0),
                            VAR_0, &VAR_3,
                            (void **) &VAR_10);
    FUNC_11(VAR_11 == VAR_5, "got 0x%08x\n", VAR_11);

    FUNC_14(VAR_8, VAR_7, FUNC_2());
    FUNC_12(VAR_8);

    VAR_11 = FUNC_5(VAR_10, 0, &VAR_9);
    FUNC_11(VAR_11 == VAR_5, "EnumJobs failed: %08x\n", VAR_11);
    if(VAR_11 != VAR_5)
        FUNC_13("Unable to create job enumerator.\n");
    else
    {
        ULONG VAR_12, VAR_13;
        IBackgroundCopyJob *VAR_14;
        BOOL VAR_15 = VAR_2;

        VAR_11 = FUNC_7(VAR_9, &VAR_13);
        FUNC_11(VAR_11 == VAR_5, "GetCount failed: %08x\n", VAR_11);
        for (VAR_12 = 0; VAR_12 < VAR_13 && !VAR_15; ++VAR_12)
        {
            LPWSTR VAR_16;
            FUNC_8(VAR_9, 1, &VAR_14, ((void*)0));
            FUNC_3(VAR_14, &VAR_16);
            if (FUNC_10(VAR_16, VAR_8) == 0)
                VAR_15 = VAR_6;
            FUNC_1(VAR_16);
            FUNC_4(VAR_14);
        }

        FUNC_9(VAR_9);
        FUNC_11(VAR_15, "Adding a job in another process failed\n");
    }

    FUNC_6(VAR_10);
}
