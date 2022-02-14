
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oldprofile ;
typedef int newprofile ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int * VAR_8 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 (int *,int,char*,int*) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( char *VAR_9 )
{
    BOOL VAR_10;
    DWORD VAR_11;
    CHAR VAR_12[VAR_7];
    CHAR VAR_13[VAR_7];





    VAR_11 = sizeof(VAR_13);
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(VAR_8, VAR_6, VAR_13, &VAR_11);
    FUNC_3( !VAR_10 && FUNC_0() == VAR_5, "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    VAR_11 = sizeof(VAR_13);
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), (DWORD)-1, VAR_13, &VAR_11);
    FUNC_3( !VAR_10 && FUNC_0() == VAR_1, "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    VAR_11 = sizeof(VAR_13);
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), VAR_6, VAR_13, ((void*)0));
    FUNC_3( !VAR_10 && FUNC_0() == VAR_3, "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    VAR_11 = sizeof(VAR_13);
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), VAR_6, ((void*)0), &VAR_11);
    FUNC_3( !VAR_10 && FUNC_0() == VAR_2, "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    VAR_11 = 0;
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), VAR_6, VAR_13, &VAR_11);
    FUNC_3( !VAR_10 && (FUNC_0() == VAR_4 || FUNC_0() == VAR_2),
        "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );



    VAR_11 = 0;
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(VAR_8, 0, VAR_13, &VAR_11);
    FUNC_3( !VAR_10 && (FUNC_0() == VAR_3 || FUNC_0() == VAR_5),
        "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), 0, VAR_13, ((void*)0));
    FUNC_3( !VAR_10 && FUNC_0() == VAR_3, "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    VAR_11 = 0;
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), 0, ((void*)0), &VAR_11);
    FUNC_3( !VAR_10 && (FUNC_0() == VAR_2 || FUNC_0() == VAR_1),
        "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );

    VAR_11 = sizeof(VAR_13);
    FUNC_1(0xfaceabee);
    VAR_10 = FUNC_4(((void*)0), 0, VAR_13, &VAR_11);
    if (!VAR_10) FUNC_3( FUNC_0() == VAR_1, "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );
    else FUNC_3( !FUNC_2( VAR_13, "" ) && FUNC_0() == 0xfaceabee,
             "GetStandardColorSpaceProfileA() returns %d (GLE=%d)\n", VAR_10, FUNC_0() );



    VAR_11 = sizeof(VAR_12);
    VAR_10 = FUNC_4( ((void*)0), VAR_6, VAR_12, &VAR_11 );
    FUNC_3( VAR_10, "GetStandardColorSpaceProfileA() failed (%d)\n", FUNC_0() );

    FUNC_1(0xdeadbeef);
    VAR_10 = FUNC_5( ((void*)0), VAR_6, VAR_9 );
    if (!VAR_10 && (FUNC_0() == VAR_0))
    {
        FUNC_6("Not enough rights for SetStandardColorSpaceProfileA\n");
        return;
    }
    FUNC_3( VAR_10, "SetStandardColorSpaceProfileA() failed (%d)\n", FUNC_0() );

    VAR_11 = sizeof(VAR_13);
    VAR_10 = FUNC_4( ((void*)0), VAR_6, VAR_13, &VAR_11 );
    FUNC_3( VAR_10, "GetStandardColorSpaceProfileA() failed (%d)\n", FUNC_0() );

    VAR_10 = FUNC_5( ((void*)0), VAR_6, VAR_12 );
    FUNC_3( VAR_10, "SetStandardColorSpaceProfileA() failed (%d)\n", FUNC_0() );
}
