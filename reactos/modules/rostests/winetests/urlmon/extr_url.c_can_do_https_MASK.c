
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *,char*,char*,int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int ,int *,int *,int ,int ,int ) ;
 int * FUNC_5 (char*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static BOOL FUNC_8(void)
{
    HINTERNET VAR_5, VAR_6, VAR_7;
    BOOL VAR_8;

    VAR_5 = FUNC_5("winetest", VAR_3, ((void*)0), ((void*)0), 0);
    FUNC_7(VAR_5 != ((void*)0), "InternetOpen failed\n");

    VAR_6 = FUNC_4(VAR_5, "test.winehq.org", VAR_1,
            ((void*)0), ((void*)0), VAR_4, 0, 0);
    FUNC_7(VAR_6 != ((void*)0), "InternetConnect failed\n");

    VAR_7 = FUNC_1(VAR_6, "GET", "/tests/hello.html", ((void*)0), ((void*)0), ((void*)0),
            VAR_2, 0);
    FUNC_7(VAR_7 != ((void*)0), "HttpOpenRequest failed\n");

    VAR_8 = FUNC_2(VAR_7, ((void*)0), 0, ((void*)0), 0);
    FUNC_7(VAR_8 || FUNC_6(FUNC_0() == VAR_0),
        "request failed: %u\n", FUNC_0());

    FUNC_3(VAR_7);
    FUNC_3(VAR_6);
    FUNC_3(VAR_5);
    return VAR_8;
}
