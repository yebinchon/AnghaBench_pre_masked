
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_request {int dummy; } ;
struct info {int wait; } ;
typedef char WCHAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct test_request*,struct info*,int ) ;
 int FUNC_4 (int,struct test_request*,struct info*,char const*,int ) ;
 int FUNC_5 (int,struct test_request*,struct info*) ;
 int FUNC_6 (struct test_request*,struct info*,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct test_request*,struct info*,char*) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(int VAR_3)
{
    struct test_request VAR_4;
    struct info VAR_5;

    static const WCHAR VAR_6[] = {'/','t','e','s','t',0};

    FUNC_9("Testing persistent connection...\n");

    VAR_5.wait = FUNC_1( ((void*)0), VAR_0, VAR_0, ((void*)0) );

    FUNC_5( VAR_3, &VAR_4, &VAR_5 );
    FUNC_8( &VAR_4, &VAR_5,
                       "HTTP/1.1 200 OK\r\n"
                       "Server: winetest\r\n"
                       "Connection: keep-alive\r\n"
                       "Content-Length: 1\r\n"
                       "\r\n"
                       "X" );
    FUNC_6( &VAR_4, &VAR_5, "X", VAR_0 );
    FUNC_3( &VAR_4, &VAR_5, VAR_0 );


    FUNC_4( VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_1 );
    FUNC_7( "GET /test HTTP/1.1\r\n" );
    FUNC_8( &VAR_4, &VAR_5,
                       "HTTP/1.1 200 OK\r\n"
                       "Server: winetest\r\n"
                       "Transfer-Encoding: chunked\r\n"
                       "Connection: keep-alive\r\n"
                       "\r\n"
                       "9\r\n123456789\r\n"
                       "0\r\n\r\n" );
    FUNC_6( &VAR_4, &VAR_5, "123456789", VAR_0 );
    FUNC_3( &VAR_4, &VAR_5, VAR_0 );


    FUNC_4( VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_1 );
    FUNC_7( "GET /test HTTP/1.1\r\n" );
    FUNC_8( &VAR_4, &VAR_5,
                       "HTTP/1.1 200 OK\r\n"
                       "Server: winetest\r\n"
                       "Content-Length: 2\r\n"
                       "\r\n"
                       "xx" );
    FUNC_6( &VAR_4, &VAR_5, "xx", VAR_0 );
    FUNC_3( &VAR_4, &VAR_5, VAR_0 );

    FUNC_4( VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_1 );
    FUNC_7( "GET /test HTTP/1.1\r\n" );
    FUNC_8( &VAR_4, &VAR_5,
                       "HTTP/1.1 200 OK\r\n"
                       "Server: winetest\r\n"
                       "Content-Length: 2\r\n"
                       "Connection: close\r\n"
                       "\r\n"
                       "yy" );
    FUNC_3( &VAR_4, &VAR_5, VAR_1 );

    FUNC_2( VAR_2 );
    FUNC_0( VAR_5.wait );
}
