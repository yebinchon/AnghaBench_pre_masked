
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HDEVINFO ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,char const*,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const WCHAR VAR_5[] = { 'd','u','m','m','y',0 };
    static const WCHAR VAR_6[] = { 0 };
    static char VAR_7[] = "NotNull";
    HDEVINFO VAR_8;
    BOOL VAR_9;

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_2(((void*)0), ((void*)0), ((void*)0), VAR_7);
    FUNC_4(VAR_8 == VAR_4, "Expected failure.\n");
    FUNC_4(FUNC_0() == VAR_2, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_2(((void*)0), ((void*)0), VAR_5, ((void*)0));
    FUNC_4(VAR_8 == VAR_4, "Expected failure.\n");
    FUNC_4(FUNC_0() == VAR_1
            || FUNC_0() == VAR_3
            || FUNC_0() == VAR_0,
            "Got unexpected error %#x.\n", FUNC_0());

    VAR_8 = FUNC_2(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_8 != VAR_4, "Failed to create device list, error %#x.", FUNC_0());

    VAR_9 = FUNC_3(VAR_8);
    FUNC_4(VAR_9, "Failed to destroy device list, error %#x.\n", FUNC_0());

    VAR_8 = FUNC_2(((void*)0), ((void*)0), VAR_6, ((void*)0));
    FUNC_4(VAR_8 != VAR_4, "Failed to create device list, error %#x.", FUNC_0());

    VAR_9 = FUNC_3(VAR_8);
    FUNC_4(VAR_9, "Failed to destroy device list, error %#x.\n", FUNC_0());
}
