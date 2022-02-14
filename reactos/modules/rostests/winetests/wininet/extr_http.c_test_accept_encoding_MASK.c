
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int * HINTERNET ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int * FUNC_1 (int *,char*,char*,char*,int *,int *,int ,int ) ;
 int FUNC_2 (int *,char*,unsigned int,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int,int *,int *,int ,int ,int ) ;
 int * FUNC_5 (char*,int ,int *,int *,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,char*,int) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void FUNC_10(int VAR_4)
{
    HINTERNET VAR_5, VAR_6, VAR_7;
    char VAR_8[1000];
    BOOL VAR_9;

    VAR_5 = FUNC_5("winetest", VAR_2, ((void*)0), ((void*)0), 0);
    FUNC_6(VAR_5 != ((void*)0), "InternetOpen failed\n");

    VAR_6 = FUNC_4(VAR_5, "localhost", VAR_4, ((void*)0), ((void*)0), VAR_3, 0, 0);
    FUNC_6(VAR_6 != ((void*)0), "InternetConnect failed\n");

    VAR_7 = FUNC_1(VAR_6, "GET", "/echo_request", "HTTP/1.0", ((void*)0), ((void*)0), 0, 0);
    FUNC_6(VAR_7 != ((void*)0), "HttpOpenRequest failed\n");

    VAR_9 = FUNC_0(VAR_7, "Accept-Encoding: gzip\r\n", ~0u, VAR_1 | VAR_0);
    FUNC_6(VAR_9, "HttpAddRequestHeaders failed\n");

    VAR_9 = FUNC_2(VAR_7, ((void*)0), 0, ((void*)0), 0);
    FUNC_6(VAR_9, "HttpSendRequestA failed\n");

    FUNC_9(VAR_7, 200);
    FUNC_7(VAR_7, VAR_8, sizeof(VAR_8));
    FUNC_6(FUNC_8(VAR_8, "Accept-Encoding: gzip") != ((void*)0), "Accept-Encoding header not found in %s\n", VAR_8);

    FUNC_3(VAR_7);

    VAR_7 = FUNC_1(VAR_6, "GET", "/echo_request", "HTTP/1.0", ((void*)0), ((void*)0), 0, 0);
    FUNC_6(VAR_7 != ((void*)0), "HttpOpenRequest failed\n");

    VAR_9 = FUNC_2(VAR_7, "Accept-Encoding: gzip", ~0u, ((void*)0), 0);
    FUNC_6(VAR_9, "HttpSendRequestA failed\n");

    FUNC_9(VAR_7, 200);
    FUNC_7(VAR_7, VAR_8, sizeof(VAR_8));
    FUNC_6(FUNC_8(VAR_8, "Accept-Encoding: gzip") != ((void*)0), "Accept-Encoding header not found in %s\n", VAR_8);

    FUNC_3(VAR_7);
    FUNC_3(VAR_6);
    FUNC_3(VAR_5);
}
