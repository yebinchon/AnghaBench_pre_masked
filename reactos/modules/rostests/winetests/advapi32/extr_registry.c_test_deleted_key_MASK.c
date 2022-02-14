
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int*,int *,int*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int *,int*,int *,int*) ;
 scalar_t__ FUNC_7 (int ,char*,int ,int ,int const*,int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void)
{
    HKEY VAR_4, VAR_5;
    char VAR_6[20];
    DWORD VAR_7, VAR_8;
    LONG VAR_9;


    FUNC_5( VAR_1, "Software\\Wine\\Test", &VAR_4 );

    FUNC_8( VAR_3 );

    VAR_7 = sizeof(VAR_6);
    VAR_8 = 0;
    VAR_9 = FUNC_3( VAR_4, 0, VAR_6, &VAR_7, ((void*)0), &VAR_8, 0, 0 );
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);

    VAR_9 = FUNC_2( VAR_4, 0, VAR_6, sizeof(VAR_6) );
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);

    VAR_7 = sizeof(VAR_6);
    VAR_8 = 0;
    VAR_9 = FUNC_6( VAR_4, "test", ((void*)0), &VAR_8, (BYTE *)VAR_6, &VAR_7 );
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);

    VAR_9 = FUNC_7( VAR_4, "test", 0, VAR_2, (const BYTE*)"value", 6);
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);

    VAR_9 = FUNC_5( VAR_4, "test", &VAR_5 );
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);
    if (VAR_9 == 0)
        FUNC_0( VAR_5 );

    VAR_9 = FUNC_1( VAR_4, "test", &VAR_5 );
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);
    if (VAR_9 == 0)
        FUNC_0( VAR_5 );

    VAR_9 = FUNC_4( VAR_4 );
    FUNC_9(VAR_9 == VAR_0, "expect ERROR_KEY_DELETED, got %i\n", VAR_9);

    FUNC_0( VAR_4 );

    FUNC_10();
}
