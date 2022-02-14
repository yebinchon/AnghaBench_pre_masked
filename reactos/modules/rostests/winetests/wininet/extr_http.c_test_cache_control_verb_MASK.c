
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef int BOOL ;


 int FUNC_0 () ;
 int * FUNC_1 (int *,char*,char*,int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int,int *,int *,int ,int ,int ) ;
 int * FUNC_5 (char*,int ,int *,int *,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(int VAR_3)
{
    HINTERNET VAR_4, VAR_5, VAR_6;
    BOOL VAR_7;

    VAR_4 = FUNC_5("winetest", VAR_1, ((void*)0), ((void*)0), 0);
    FUNC_6(VAR_4 != ((void*)0), "InternetOpen failed\n");

    VAR_5 = FUNC_4(VAR_4, "localhost", VAR_3, ((void*)0), ((void*)0), VAR_2, 0, 0);
    FUNC_6(VAR_5 != ((void*)0), "InternetConnect failed\n");

    VAR_6 = FUNC_1(VAR_5, "RPC_OUT_DATA", "/test_cache_control_verb", ((void*)0), ((void*)0), ((void*)0),
                              VAR_0, 0);
    FUNC_6(VAR_6 != ((void*)0), "HttpOpenRequest failed\n");
    VAR_7 = FUNC_2(VAR_6, ((void*)0), 0, ((void*)0), 0);
    FUNC_6(VAR_7, "HttpSendRequest failed %u\n", FUNC_0());
    FUNC_7(VAR_6, 200);
    FUNC_3(VAR_6);

    VAR_6 = FUNC_1(VAR_5, "POST", "/test_cache_control_verb", ((void*)0), ((void*)0), ((void*)0),
                              VAR_0, 0);
    FUNC_6(VAR_6 != ((void*)0), "HttpOpenRequest failed\n");
    VAR_7 = FUNC_2(VAR_6, ((void*)0), 0, ((void*)0), 0);
    FUNC_6(VAR_7, "HttpSendRequest failed %u\n", FUNC_0());
    FUNC_7(VAR_6, 200);
    FUNC_3(VAR_6);

    VAR_6 = FUNC_1(VAR_5, "HEAD", "/test_cache_control_verb", ((void*)0), ((void*)0), ((void*)0),
                              VAR_0, 0);
    FUNC_6(VAR_6 != ((void*)0), "HttpOpenRequest failed\n");
    VAR_7 = FUNC_2(VAR_6, ((void*)0), 0, ((void*)0), 0);
    FUNC_6(VAR_7, "HttpSendRequest failed %u\n", FUNC_0());
    FUNC_7(VAR_6, 200);
    FUNC_3(VAR_6);

    VAR_6 = FUNC_1(VAR_5, "GET", "/test_cache_control_verb", ((void*)0), ((void*)0), ((void*)0),
                              VAR_0, 0);
    FUNC_6(VAR_6 != ((void*)0), "HttpOpenRequest failed\n");
    VAR_7 = FUNC_2(VAR_6, ((void*)0), 0, ((void*)0), 0);
    FUNC_6(VAR_7, "HttpSendRequest failed %u\n", FUNC_0());
    FUNC_7(VAR_6, 200);
    FUNC_3(VAR_6);

    FUNC_3(VAR_5);
    FUNC_3(VAR_4);
}
