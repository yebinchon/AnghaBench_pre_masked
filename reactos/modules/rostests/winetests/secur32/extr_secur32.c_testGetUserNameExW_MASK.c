
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nameW ;
typedef int WCHAR ;
typedef int ULONG ;
typedef size_t UINT ;
typedef scalar_t__ BOOLEAN ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__* VAR_7 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (scalar_t__,int*,int*) ;

__attribute__((used)) static void FUNC_6(void)
{
    WCHAR VAR_8[256];
    ULONG VAR_9;
    BOOLEAN VAR_10;
    UINT VAR_11;

    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
        VAR_9 = sizeof(VAR_8);
        FUNC_2(VAR_8, sizeof(VAR_8));
        VAR_10 = FUNC_5(VAR_7[VAR_11], VAR_8, &VAR_9);
        FUNC_4(VAR_10 ||
           (VAR_7[VAR_11] == VAR_6 &&
            FUNC_1() == VAR_3) ||
           FUNC_1() == VAR_2 ||
           FUNC_3(VAR_7[VAR_11] == VAR_4 &&
                  FUNC_1() == VAR_0),
           "GetUserNameExW(%d) failed: %d\n",
           VAR_7[VAR_11], FUNC_1());
    }

    if (0)
        FUNC_5(VAR_5, ((void*)0), ((void*)0));

    VAR_9 = 0;
    VAR_10 = FUNC_5(VAR_5, ((void*)0), &VAR_9);
    FUNC_4(! VAR_10 && FUNC_1() == VAR_1, "Expected fail with ERROR_MORE_DATA, got %d with %u\n", VAR_10, FUNC_1());
    FUNC_4(VAR_9 != 0, "Expected size to be set to required size\n");

    if (0)
    {

        FUNC_5(VAR_5, ((void*)0), &VAR_9);
    }

    VAR_9 = 0;
    VAR_10 = FUNC_5(VAR_5, VAR_8, &VAR_9);
    FUNC_4(! VAR_10 && FUNC_1() == VAR_1, "Expected fail with ERROR_MORE_DATA, got %d with %u\n", VAR_10, FUNC_1());
    FUNC_4(VAR_9 != 0, "Expected size to be set to required size\n");
    VAR_9 = 1;
    VAR_8[0] = 0xff;
    VAR_10 = FUNC_5(VAR_5, VAR_8, &VAR_9);
    FUNC_4(! VAR_10 && FUNC_1() == VAR_1, "Expected fail with ERROR_MORE_DATA, got %d with %u\n", VAR_10, FUNC_1());
    FUNC_4(1 < VAR_9, "Expected size to be set to required size\n");
    FUNC_4(VAR_8[0] == (WCHAR) 0xff, "Expected unchanged buffer\n");
}
