
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oldprofile ;
typedef int newprofileA ;
typedef int newprofile ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int,int *,int,int *,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 int * VAR_9 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,int,int *,int*) ;
 int FUNC_7 (int *,int,int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( WCHAR *VAR_10 )
{
    BOOL VAR_11;
    DWORD VAR_12;
    WCHAR VAR_13[VAR_8];
    WCHAR VAR_14[VAR_8];
    CHAR VAR_15[VAR_8];





    VAR_12 = sizeof(VAR_14);
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(VAR_9, VAR_7, VAR_14, &VAR_12);
    FUNC_5( !VAR_11 && FUNC_0() == VAR_6, "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );

    VAR_12 = sizeof(VAR_14);
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), (DWORD)-1, VAR_14, &VAR_12);
    FUNC_5( !VAR_11 && FUNC_0() == VAR_2, "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );

    VAR_12 = sizeof(VAR_14);
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), 0, VAR_14, &VAR_12);
    FUNC_5( (!VAR_11 && FUNC_0() == VAR_2) ||
        FUNC_3(VAR_11),
        "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );

    VAR_12 = sizeof(VAR_14);
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), VAR_7, ((void*)0), &VAR_12);
    FUNC_5( !VAR_11 || FUNC_3(VAR_11) , "GetStandardColorSpaceProfileW succeeded\n" );
    FUNC_5( FUNC_0() == VAR_3 ||
        FUNC_3(FUNC_0() == 0xfaceabee) ,
        "GetStandardColorSpaceProfileW() returns GLE=%u\n", FUNC_0() );

    VAR_12 = sizeof(VAR_14);
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_14, ((void*)0));
    FUNC_5( !VAR_11 && FUNC_0() == VAR_4, "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );

    VAR_12 = 0;
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_14, &VAR_12);
    FUNC_5( !VAR_11 || FUNC_3(VAR_11) , "GetStandardColorSpaceProfileW succeeded\n" );
    FUNC_5( FUNC_0() == VAR_5 ||
        FUNC_0() == VAR_3 ||
        FUNC_3(FUNC_0() == 0xfaceabee) ,
        "GetStandardColorSpaceProfileW() returns GLE=%u\n", FUNC_0() );



    VAR_12 = 0;
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(VAR_9, 0, VAR_14, &VAR_12);
    FUNC_5( !VAR_11 && (FUNC_0() == VAR_4 || FUNC_0() == VAR_6),
        "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );

    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), 0, VAR_14, ((void*)0));
    FUNC_5( !VAR_11 && FUNC_0() == VAR_4, "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );

    VAR_12 = 0;
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), 0, ((void*)0), &VAR_12);
    FUNC_5( !VAR_11 || FUNC_3(VAR_11) , "GetStandardColorSpaceProfileW succeeded\n" );
    FUNC_5( FUNC_0() == VAR_3 ||
        FUNC_0() == VAR_2 ||
        FUNC_3(FUNC_0() == 0xfaceabee) ,
        "GetStandardColorSpaceProfileW() returns GLE=%u\n", FUNC_0() );

    VAR_12 = sizeof(VAR_14);
    FUNC_1(0xfaceabee);
    VAR_11 = FUNC_6(((void*)0), 0, VAR_14, &VAR_12);
    if (!VAR_11) FUNC_5( FUNC_0() == VAR_2, "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );
    else
    {
        FUNC_2(VAR_0, 0, VAR_14, -1, VAR_15, sizeof(VAR_15), ((void*)0), ((void*)0));
        FUNC_5( !FUNC_4( VAR_15, "" ) && FUNC_0() == 0xfaceabee,
             "GetStandardColorSpaceProfileW() returns %d (GLE=%d)\n", VAR_11, FUNC_0() );
    }



    VAR_12 = sizeof(VAR_13);
    VAR_11 = FUNC_6( ((void*)0), VAR_7, VAR_13, &VAR_12 );
    FUNC_5( VAR_11, "GetStandardColorSpaceProfileW() failed (%d)\n", FUNC_0() );

    FUNC_1(0xdeadbeef);
    VAR_11 = FUNC_7( ((void*)0), VAR_7, VAR_10 );
    if (!VAR_11 && (FUNC_0() == VAR_1))
    {
        FUNC_8("Not enough rights for SetStandardColorSpaceProfileW\n");
        return;
    }
    FUNC_5( VAR_11, "SetStandardColorSpaceProfileW() failed (%d)\n", FUNC_0() );

    VAR_12 = sizeof(VAR_14);
    VAR_11 = FUNC_6( ((void*)0), VAR_7, VAR_14, &VAR_12 );
    FUNC_5( VAR_11, "GetStandardColorSpaceProfileW() failed (%d)\n", FUNC_0() );

    VAR_11 = FUNC_7( ((void*)0), VAR_7, VAR_13 );
    FUNC_5( VAR_11, "SetStandardColorSpaceProfileW() failed (%d)\n", FUNC_0() );
}
