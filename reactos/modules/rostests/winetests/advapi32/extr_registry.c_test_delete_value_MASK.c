
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int const*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    LONG VAR_5;
    char VAR_6[401];

    VAR_5 = FUNC_2( VAR_4, "test", 0, VAR_3, (const BYTE*)"value", 6 );
    FUNC_5(VAR_5 == VAR_2, "expect ERROR_SUCCESS, got %i\n", VAR_5);

    VAR_5 = FUNC_1( VAR_4, "test", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_5 == VAR_2, "expect ERROR_SUCCESS, got %i\n", VAR_5);

    VAR_5 = FUNC_0( VAR_4, "test" );
    FUNC_5(VAR_5 == VAR_2, "expect ERROR_SUCCESS, got %i\n", VAR_5);

    VAR_5 = FUNC_1( VAR_4, "test", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_5 == VAR_0, "expect ERROR_FILE_NOT_FOUND, got %i\n", VAR_5);

    VAR_5 = FUNC_0( VAR_4, "test" );
    FUNC_5(VAR_5 == VAR_0, "expect ERROR_FILE_NOT_FOUND, got %i\n", VAR_5);

    FUNC_4(VAR_6, 'a', 400);
    VAR_6[400] = 0;
    VAR_5 = FUNC_0( VAR_4, VAR_6 );
    FUNC_5(VAR_5 == VAR_0 || FUNC_3(VAR_5 == VAR_1),
       "expect ERROR_FILE_NOT_FOUND, got %i\n", VAR_5);


    VAR_5 = FUNC_2(VAR_4, "", 0, VAR_3, (const BYTE *)"value", 6);
    FUNC_5(VAR_5 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_5);

    VAR_5 = FUNC_1(VAR_4, "", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_5 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_5);

    VAR_5 = FUNC_0(VAR_4, "" );
    FUNC_5(VAR_5 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_5);

    VAR_5 = FUNC_1(VAR_4, "", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_5 == VAR_0, "expected ERROR_FILE_NOT_FOUND, got %d\n", VAR_5);
}
