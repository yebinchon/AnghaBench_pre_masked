
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_8__ {TYPE_3__* Peb; } ;
struct TYPE_7__ {TYPE_2__* ProcessParameters; } ;
struct TYPE_5__ {int Handle; } ;
struct TYPE_6__ {TYPE_1__ CurrentDirectory; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int VAR_5 ;
 TYPE_4__* FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    WCHAR VAR_8[VAR_5];
    WCHAR VAR_9[VAR_5];
    BOOL VAR_10;
    static const WCHAR VAR_11[] = {'P','l','e','a','s','e',' ','R','e','m','o','v','e',' ','M','e',0};
    static const WCHAR VAR_12[] = {'?',0};

    FUNC_3(VAR_5, VAR_9);
    FUNC_9(VAR_9, VAR_11);
    VAR_10 = FUNC_0(VAR_9, ((void*)0));
    if (!VAR_10 && FUNC_2() == VAR_0)
    {
        FUNC_12("CreateDirectoryW is not available\n");
        return;
    }

    FUNC_11(VAR_10 == VAR_7, "CreateDirectoryW should always succeed\n");

    FUNC_1(VAR_5, VAR_8);
    FUNC_11(FUNC_6(VAR_9), "SetCurrentDirectoryW failed\n");

    FUNC_7(0xdeadbeef);
    FUNC_11(!FUNC_5(VAR_9), "RemoveDirectoryW succeeded\n");
    FUNC_11(FUNC_2() == VAR_2,
       "Expected ERROR_SHARING_VIOLATION, got %u\n", FUNC_2());

    FUNC_8(FUNC_4()->Peb->ProcessParameters->CurrentDirectory.Handle,
                        VAR_4 | VAR_6);

    FUNC_6(VAR_8);
    VAR_10 = FUNC_5(VAR_9);
    FUNC_11(VAR_10 == VAR_7, "RemoveDirectoryW should always succeed\n");

    FUNC_9(VAR_9, VAR_12);
    VAR_10 = FUNC_5(VAR_9);
    FUNC_11(VAR_10 == VAR_3 && FUNC_2() == VAR_1,
       "RemoveDirectoryW with wildcard should fail with error 183, ret=%s error=%d\n",
       VAR_10 ? " True" : "False", FUNC_2());

    VAR_9[FUNC_10(VAR_9) - 1] = '*';
    VAR_10 = FUNC_5(VAR_9);
    FUNC_11(VAR_10 == VAR_3 && FUNC_2() == VAR_1,
       "RemoveDirectoryW with * wildcard name should fail with error 183, ret=%s error=%d\n",
       VAR_10 ? " True" : "False", FUNC_2());
}
