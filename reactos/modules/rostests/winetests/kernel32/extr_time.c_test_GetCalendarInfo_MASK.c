
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val2 ;
typedef int val1 ;
typedef int bufferW ;
typedef int bufferA ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *,int,char*,int,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,int ,int,char*,int,int*) ;
 int FUNC_6 (int,int ,int,int *,int,int*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_7[20];
    WCHAR VAR_8[20];
    DWORD VAR_9, VAR_10;
    int VAR_11, VAR_12;

    if (!&FUNC_5 || !&FUNC_6)
    {
        FUNC_7( "GetCalendarInfo missing\n" );
        return;
    }

    VAR_11 = FUNC_5( 0x0409, VAR_0, VAR_1 | VAR_2,
                             ((void*)0), 0, &VAR_9 );
    FUNC_4( VAR_11, "GetCalendarInfoA failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == sizeof(VAR_9), "wrong size %u\n", VAR_11 );
    FUNC_4( VAR_9 >= 2000 && VAR_9 < 2100, "wrong value %u\n", VAR_9 );

    VAR_11 = FUNC_6( 0x0409, VAR_0, VAR_1 | VAR_2,
                             ((void*)0), 0, &VAR_10 );
    FUNC_4( VAR_11, "GetCalendarInfoW failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == sizeof(VAR_10)/sizeof(WCHAR), "wrong size %u\n", VAR_11 );
    FUNC_4( VAR_9 == VAR_10, "A/W mismatch %u/%u\n", VAR_9, VAR_10 );

    VAR_11 = FUNC_5( 0x0409, VAR_0, VAR_1, VAR_7, sizeof(VAR_7), ((void*)0) );
    FUNC_4( VAR_11, "GetCalendarInfoA failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == 5, "wrong size %u\n", VAR_11 );
    FUNC_4( FUNC_2( VAR_7 ) == VAR_9, "wrong value %s/%u\n", VAR_7, VAR_9 );

    VAR_11 = FUNC_6( 0x0409, VAR_0, VAR_1, VAR_8, sizeof(VAR_8), ((void*)0) );
    FUNC_4( VAR_11, "GetCalendarInfoW failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == 5, "wrong size %u\n", VAR_11 );
    FUNC_3( VAR_7, 0x55, sizeof(VAR_7) );
    FUNC_1( VAR_4, 0, VAR_8, -1, VAR_7, sizeof(VAR_7), ((void*)0), ((void*)0) );
    FUNC_4( FUNC_2( VAR_7 ) == VAR_9, "wrong value %s/%u\n", VAR_7, VAR_9 );

    VAR_11 = FUNC_5( 0x0409, VAR_0, VAR_1 | VAR_2,
                             ((void*)0), 0, ((void*)0) );
    FUNC_4( !VAR_11, "GetCalendarInfoA succeeded\n" );
    FUNC_4( FUNC_0() == VAR_5, "wrong error %u\n", FUNC_0() );

    VAR_11 = FUNC_5( 0x0409, VAR_0, VAR_1, ((void*)0), 0, ((void*)0) );
    FUNC_4( VAR_11, "GetCalendarInfoA failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == 5, "wrong size %u\n", VAR_11 );

    VAR_11 = FUNC_6( 0x0409, VAR_0, VAR_1 | VAR_2,
                             ((void*)0), 0, ((void*)0) );
    FUNC_4( !VAR_11, "GetCalendarInfoW succeeded\n" );
    FUNC_4( FUNC_0() == VAR_5, "wrong error %u\n", FUNC_0() );

    VAR_11 = FUNC_6( 0x0409, VAR_0, VAR_1, ((void*)0), 0, ((void*)0) );
    FUNC_4( VAR_11, "GetCalendarInfoW failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == 5, "wrong size %u\n", VAR_11 );

    VAR_11 = FUNC_5( VAR_6, VAR_0, VAR_3,
                             VAR_7, sizeof(VAR_7), ((void*)0));
    FUNC_4( VAR_11, "GetCalendarInfoA failed err %u\n", FUNC_0() );
    VAR_12 = FUNC_5( VAR_6, VAR_0, VAR_3,
                              VAR_7, 0, ((void*)0));
    FUNC_4( VAR_12, "GetCalendarInfoA failed err %u\n", FUNC_0() );
    FUNC_4( VAR_11 == VAR_12, "got %d, expected %d\n", VAR_12, VAR_11 );

    VAR_12 = FUNC_6( VAR_6, VAR_0, VAR_3,
                              VAR_8, sizeof(VAR_8), ((void*)0));
    FUNC_4( VAR_12, "GetCalendarInfoW failed err %u\n", FUNC_0() );
    VAR_12 = FUNC_1( VAR_4, 0, VAR_8, -1, ((void*)0), 0, ((void*)0), ((void*)0) );
    FUNC_4( VAR_11 == VAR_12, "got %d, expected %d\n", VAR_11, VAR_12 );
}
