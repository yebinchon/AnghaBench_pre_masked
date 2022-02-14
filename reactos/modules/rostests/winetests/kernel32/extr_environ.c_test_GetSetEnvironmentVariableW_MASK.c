
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int,char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    WCHAR VAR_5[256];
    BOOL VAR_6;
    DWORD VAR_7;
    static const WCHAR VAR_8[] = {'S','o','m','e','W','i','l','d','N','a','m','e',0};
    static const WCHAR VAR_9[] = {'S','o','m','e','W','i','l','d','V','a','l','u','e',0};
    static const WCHAR VAR_10[] = {'s','O','M','E','w','I','L','D','n','A','M','E',0};
    static const WCHAR VAR_11[] = { 0 };
    static const WCHAR VAR_12[] = {'f','o','o',0};

    VAR_6 = FUNC_2(VAR_8, VAR_9);
    if (VAR_6 == VAR_3 && FUNC_1()==VAR_0)
    {

        FUNC_8("SetEnvironmentVariableW is not implemented\n");
        return;
    }
    FUNC_6(VAR_6 == VAR_4,
       "unexpected error in SetEnvironmentVariableW, GetLastError=%d\n",
       FUNC_1());


    VAR_7 = FUNC_0(VAR_8, ((void*)0), 0);
    FUNC_6(VAR_7 == FUNC_5(VAR_9) + 1,
       "should return length with terminating 0 ret_size=%d\n",
       VAR_7);

    FUNC_4(VAR_5, VAR_12);
    VAR_7 = FUNC_0(VAR_8, VAR_5, FUNC_5(VAR_9));
    FUNC_7(FUNC_3(VAR_5, VAR_12) == 0 ||
         FUNC_5(VAR_5) == 0,
         "Expected untouched or empty buffer, got \"%s\"\n", VAR_5);

    FUNC_6(VAR_7 == FUNC_5(VAR_9) + 1,
       "should return length with terminating 0 ret_size=%d\n", VAR_7);

    FUNC_4(VAR_5, VAR_12);
    VAR_7 = FUNC_0(VAR_8, VAR_5, FUNC_5(VAR_9) + 1);
    FUNC_6(FUNC_3(VAR_5, VAR_9) == 0, "should touch the buffer\n");
    FUNC_6(VAR_7 == FUNC_5(VAR_9),
       "should return length without terminating 0 ret_size=%d\n", VAR_7);

    FUNC_4(VAR_5, VAR_12);
    VAR_7 = FUNC_0(VAR_10, VAR_5, FUNC_5(VAR_9) + 1);
    FUNC_6(FUNC_3(VAR_5, VAR_9) == 0, "should touch the buffer\n");
    FUNC_6(VAR_7 == FUNC_5(VAR_9),
       "should return length without terminating 0 ret_size=%d\n", VAR_7);


    VAR_6 = FUNC_2(VAR_10, ((void*)0));
    FUNC_6(VAR_6 == VAR_4, "should erase existing variable\n");

    FUNC_4(VAR_5, VAR_12);
    VAR_7 = FUNC_0(VAR_8, VAR_5, FUNC_5(VAR_9) + 1);
    FUNC_6(FUNC_3(VAR_5, VAR_12) == 0, "should not touch the buffer\n");
    FUNC_6(VAR_7 == 0 && FUNC_1() == VAR_1,
       "should not find variable but ret_size=%d GetLastError=%d\n",
       VAR_7, FUNC_1());


    VAR_6 = FUNC_2(VAR_8, VAR_9);
    FUNC_6(VAR_6 == VAR_4,
       "unexpected error in SetEnvironmentVariableW, GetLastError=%d\n",
       FUNC_1());

    FUNC_4(VAR_5, VAR_12);
    VAR_7 = FUNC_0(VAR_8, VAR_5, FUNC_5(VAR_9) + 1);
    FUNC_6(FUNC_3(VAR_5, VAR_9) == 0, "should touch the buffer\n");
    FUNC_6(VAR_7 == FUNC_5(VAR_9),
       "should return length without terminating 0 ret_size=%d\n", VAR_7);

    VAR_6 = FUNC_2(VAR_10, VAR_11);
    FUNC_6(VAR_6 == VAR_4, "should not fail with empty value but GetLastError=%d\n", FUNC_1());

    FUNC_4(VAR_5, VAR_12);
    VAR_7 = FUNC_0(VAR_8, VAR_5, FUNC_5(VAR_9) + 1);
    FUNC_6(VAR_7 == 0 && FUNC_1() == VAR_1,
       "should not find variable but ret_size=%d GetLastError=%d\n",
       VAR_7, FUNC_1());
    FUNC_6(FUNC_3(VAR_5, VAR_11) == 0, "should copy an empty string\n");


    VAR_7 = FUNC_0(((void*)0), ((void*)0), 0);
    FUNC_6(VAR_7 == 0 && FUNC_1() == VAR_1,
       "should not find variable but ret_size=%d GetLastError=%d\n",
       VAR_7, FUNC_1());

    if (0)
    {
        VAR_7 = FUNC_0(((void*)0), VAR_5, FUNC_5(VAR_9) + 1);
        FUNC_6(VAR_7 == 0 && FUNC_1() == VAR_1,
           "should not find variable but ret_size=%d GetLastError=%d\n",
           VAR_7, FUNC_1());

        VAR_6 = FUNC_2(((void*)0), ((void*)0));
        FUNC_6(VAR_6 == VAR_3 && (FUNC_1() == VAR_2 || FUNC_1() == VAR_1),
           "should fail with NULL, NULL but ret=%d and GetLastError=%d\n",
           VAR_6, FUNC_1());
    }
}
