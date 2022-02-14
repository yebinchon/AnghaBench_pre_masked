
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int REGSAM ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef char BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int *,int ,int ,int *,int **,int *) ;
 char VAR_8 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 char* FUNC_6 () ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (char,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    UINT VAR_10;
    BOOL VAR_11, VAR_12;
    DWORD VAR_13;
    char VAR_14[39], VAR_15[39], VAR_16[39];
    char VAR_17[33], VAR_18[33];
    char VAR_19[VAR_7], VAR_20[VAR_7];
    REGSAM VAR_21 = VAR_5;
    char *VAR_22 = FUNC_6();
    HKEY VAR_23 = ((void*)0), VAR_24 = ((void*)0);

    FUNC_4( VAR_14, VAR_17 );
    FUNC_4( VAR_15, VAR_18 );

    if (VAR_9) VAR_21 |= VAR_6;

    FUNC_11( VAR_19, "Software\\Microsoft\\Windows\\CurrentVersion\\Installer\\UserData\\" );
    FUNC_9( VAR_19, "S-1-5-18\\Components\\" );
    FUNC_9( VAR_19, VAR_17 );

    VAR_10 = FUNC_3( VAR_4, VAR_19, 0, ((void*)0), 0, VAR_21, ((void*)0), &VAR_23, ((void*)0) );
    if (VAR_10 == VAR_0)
    {
        FUNC_8( "insufficient rights\n" );
        goto done;
    }
    FUNC_7( VAR_10 == VAR_2, "got %u\n", VAR_10 );

    FUNC_11( VAR_20, "Software\\Microsoft\\Windows\\CurrentVersion\\Installer\\UserData\\" );
    FUNC_9( VAR_20, VAR_22 );
    FUNC_9( VAR_20, "\\Components\\" );
    FUNC_9( VAR_20, VAR_18 );

    VAR_10 = FUNC_3( VAR_4, VAR_20, 0, ((void*)0), 0, VAR_21, ((void*)0), &VAR_24, ((void*)0) );
    if (VAR_10 == VAR_0)
    {
        FUNC_8( "insufficient rights\n" );
        goto done;
    }

    VAR_10 = FUNC_1( 0, ((void*)0) );
    FUNC_7( VAR_10 == VAR_1, "got %u\n", VAR_10 );

    VAR_13 = 0;
    VAR_16[0] = 0;
    VAR_11 = VAR_12 = VAR_3;
    while (!FUNC_1( VAR_13, VAR_16 ))
    {
        if (!FUNC_10( VAR_16, VAR_14 )) VAR_11 = VAR_8;
        if (!FUNC_10( VAR_16, VAR_15 )) VAR_12 = VAR_8;
        FUNC_7( VAR_16[0], "empty guid\n" );
        VAR_16[0] = 0;
        VAR_13++;
    }
    FUNC_7( VAR_11, "comp1 not found\n" );
    FUNC_7( VAR_12, "comp2 not found\n" );

done:
    FUNC_5( VAR_23, "", VAR_21 );
    FUNC_5( VAR_24, "", VAR_21 );
    FUNC_2( VAR_23 );
    FUNC_2( VAR_24 );
    FUNC_0( VAR_22 );
}
