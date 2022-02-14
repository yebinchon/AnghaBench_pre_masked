
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int status ;
typedef int * HINTERNET ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,char*,char*,int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *,int,int*,int*,int *) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int,char*,char*,int ,int ,int ) ;
 int * FUNC_6 (char*,int ,int *,int *,int ) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(int VAR_4)
{
    HINTERNET VAR_5, VAR_6, VAR_7;
    DWORD VAR_8, VAR_9;
    BOOL VAR_10;

    VAR_5 = FUNC_6( "winetest", VAR_2, ((void*)0), ((void*)0), 0 );
    FUNC_7( VAR_5 != ((void*)0), "InternetOpenA failed\n" );

    VAR_6 = FUNC_5( VAR_5, "localhost", VAR_4, "user", "pwd",
                            VAR_3, 0, 0 );
    FUNC_7( VAR_6 != ((void*)0), "InternetConnectA failed %u\n", FUNC_0() );

    VAR_7 = FUNC_1( VAR_6, "HEAD", "/upload.txt", ((void*)0), ((void*)0), ((void*)0), 0, 0 );
    FUNC_7( VAR_7 != ((void*)0), "HttpOpenRequestA failed %u\n", FUNC_0() );

    VAR_10 = FUNC_3( VAR_7, ((void*)0), 0, ((void*)0), 0 );
    FUNC_7( VAR_10, "HttpSendRequestA failed %u\n", FUNC_0() );

    VAR_8 = 0xdeadbeef;
    VAR_9 = sizeof(VAR_8);
    VAR_10 = FUNC_2( VAR_7, VAR_1|VAR_0, &VAR_8, &VAR_9, ((void*)0) );
    FUNC_7( VAR_10, "HttpQueryInfoA failed %u\n", FUNC_0() );
    FUNC_7( VAR_8 == 200, "got %u\n", VAR_8 );

    FUNC_4( VAR_7 );
    FUNC_4( VAR_6 );
    FUNC_4( VAR_5 );

    VAR_5 = FUNC_6( "winetest", VAR_2, ((void*)0), ((void*)0), 0 );
    FUNC_7( VAR_5 != ((void*)0), "InternetOpenA failed\n" );

    VAR_6 = FUNC_5( VAR_5, "localhost", VAR_4, ((void*)0), ((void*)0),
                            VAR_3, 0, 0 );
    FUNC_7( VAR_6 != ((void*)0), "InternetConnectA failed %u\n", FUNC_0() );

    VAR_7 = FUNC_1( VAR_6, "PUT", "/upload2.txt", ((void*)0), ((void*)0), ((void*)0), 0, 0 );
    FUNC_7( VAR_7 != ((void*)0), "HttpOpenRequestA failed %u\n", FUNC_0() );

    VAR_10 = FUNC_3( VAR_7, ((void*)0), 0, ((void*)0), 0 );
    FUNC_7( VAR_10, "HttpSendRequestA failed %u\n", FUNC_0() );

    VAR_8 = 0xdeadbeef;
    VAR_9 = sizeof(VAR_8);
    VAR_10 = FUNC_2( VAR_7, VAR_1|VAR_0, &VAR_8, &VAR_9, ((void*)0) );
    FUNC_7( VAR_10, "HttpQueryInfoA failed %u\n", FUNC_0() );
    FUNC_7( VAR_8 == 200, "got %u\n", VAR_8 );

    FUNC_4( VAR_7 );
    FUNC_4( VAR_6 );
    FUNC_4( VAR_5 );
}
