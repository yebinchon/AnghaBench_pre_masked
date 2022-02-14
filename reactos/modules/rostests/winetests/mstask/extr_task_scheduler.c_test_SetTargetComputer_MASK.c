
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,void**) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,char**) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,scalar_t__,...) ;
 int FUNC_11 (char*) ;
 int VAR_8 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    WCHAR VAR_9[VAR_5 + 3];
    DWORD VAR_10 = VAR_5 + 1;
    WCHAR *VAR_11 = ((void*)0);
    WCHAR *VAR_12 = ((void*)0);
    HRESULT VAR_13;


    VAR_9[0] = '\\';
    VAR_9[1] = '\\';
    if (!FUNC_4(VAR_9 + 2, &VAR_10))
        return;


    VAR_13 = FUNC_2(&VAR_1, ((void*)0), VAR_0,
            &VAR_4, (void **) &VAR_8);
    FUNC_10(VAR_13 == VAR_6, "CTaskScheduler CoCreateInstance failed: %08x\n", VAR_13);
    if (VAR_13 != VAR_6)
    {
        FUNC_11("Failed to create task scheduler.  Skipping tests.\n");
        return;
    }

    VAR_13 = FUNC_6(VAR_8, &VAR_11);
    FUNC_10(VAR_13 == VAR_6, "got 0x%x and %s (expected S_OK)\n", VAR_13, FUNC_12(VAR_11));


    VAR_13 = FUNC_8(VAR_8, ((void*)0));
    FUNC_10(VAR_13 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_13);
    VAR_13 = FUNC_6(VAR_8, &VAR_12);
    FUNC_10((VAR_13 == VAR_6 && !FUNC_9(VAR_12, VAR_9)),
        "got 0x%x with %s (expected S_OK and %s)\n",
        VAR_13, FUNC_12(VAR_12), FUNC_12(VAR_9));
    FUNC_3(VAR_12);


    VAR_13 = FUNC_8(VAR_8, VAR_7);
    FUNC_10(VAR_13 == FUNC_5(VAR_2), "got 0x%x (expected 0x80070035)\n", VAR_13);

    VAR_13 = FUNC_6(VAR_8, &VAR_12);
    FUNC_10((VAR_13 == VAR_6 && !FUNC_9(VAR_12, VAR_9)),
        "got 0x%x with %s (expected S_OK and %s)\n",
        VAR_13, FUNC_12(VAR_12), FUNC_12(VAR_9));
    FUNC_3(VAR_12);


    VAR_13 = FUNC_8(VAR_8, VAR_11 + 2);
    if (VAR_13 == VAR_3)
    {
        FUNC_11("SetTargetComputer failed with E_ACCESSDENIED (needs admin rights)\n");
        goto done;
    }
    FUNC_10(VAR_13 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_13);


    FUNC_1(VAR_9);
    VAR_13 = FUNC_8(VAR_8, VAR_9);
    FUNC_10(VAR_13 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_13);
    FUNC_0(VAR_9);
    VAR_13 = FUNC_8(VAR_8, VAR_9);
    FUNC_10(VAR_13 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_13);


    VAR_13 = FUNC_8(VAR_8, VAR_11);
    FUNC_10(VAR_13 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_13);

done:
    FUNC_3(VAR_11);
    FUNC_7(VAR_8);
    return;
}
