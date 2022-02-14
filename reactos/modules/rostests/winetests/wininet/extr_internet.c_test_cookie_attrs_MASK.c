
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,int *,char*,scalar_t__*) ;
 int FUNC_4 (char*,int *,char*,scalar_t__*,int ,int *) ;
 int FUNC_5 (char*,int *,char*) ;
 scalar_t__ FUNC_6 (char*,int *,char*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    char VAR_5[100];
    DWORD VAR_6, VAR_7;
    BOOL VAR_8;

    if(!FUNC_2(FUNC_1("wininet.dll"), "DeleteWpadCacheForNetworks")) {
        FUNC_10("Skipping cookie attributes tests. Too old IE.\n");
        return;
    }

    VAR_8 = FUNC_5("http://cookie.attrs.com/bar", ((void*)0), "A=data; httponly");
    FUNC_8(!VAR_8 && FUNC_0() == VAR_2, "InternetSetCookie returned: %x (%u)\n", VAR_8, FUNC_0());

    FUNC_7(0xdeadbeef);
    VAR_7 = FUNC_6("http://cookie.attrs.com/bar", ((void*)0), "A=data; httponly", 0, 0);
    FUNC_8(VAR_7 == VAR_1 && FUNC_0() == VAR_2,
       "InternetSetCookieEx returned: %x (%u)\n", VAR_8, FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_8 = FUNC_4("http://cookie.attrs.com/", ((void*)0), VAR_5, &VAR_6, VAR_4, ((void*)0));
    FUNC_8(!VAR_8 && FUNC_0() == VAR_3, "InternetGetCookieEx returned: %x (%u)\n", VAR_8, FUNC_0());

    VAR_7 = FUNC_6("http://cookie.attrs.com/bar",((void*)0),"A=data; httponly", VAR_4, 0);
    FUNC_8(VAR_7 == VAR_0,"InternetSetCookieEx failed: %u\n", FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_8 = FUNC_3("http://cookie.attrs.com/", ((void*)0), VAR_5, &VAR_6);
    FUNC_8(!VAR_8 && FUNC_0() == VAR_3, "InternetGetCookie returned: %x (%u)\n", VAR_8, FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_8 = FUNC_4("http://cookie.attrs.com/", ((void*)0), VAR_5, &VAR_6, 0, ((void*)0));
    FUNC_8(!VAR_8 && FUNC_0() == VAR_3, "InternetGetCookieEx returned: %x (%u)\n", VAR_8, FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_8 = FUNC_4("http://cookie.attrs.com/", ((void*)0), VAR_5, &VAR_6, VAR_4, ((void*)0));
    FUNC_8(VAR_8, "InternetGetCookieEx failed: %u\n", FUNC_0());
    FUNC_8(!FUNC_9(VAR_5, "A=data"), "data = %s\n", VAR_5);


    VAR_8 = FUNC_5("http://cookie.attrs.com/bar", ((void*)0), "A=test");
    FUNC_8(!VAR_8 && FUNC_0() == VAR_2, "InternetSetCookie returned: %x (%u)\n", VAR_8, FUNC_0());

    FUNC_7(0xdeadbeef);
    VAR_7 = FUNC_6("http://cookie.attrs.com/bar", ((void*)0), "A=data", 0, 0);
    FUNC_8(VAR_7 == VAR_1 && FUNC_0() == VAR_2,
       "InternetSetCookieEx returned: %x (%u)\n", VAR_8, FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_8 = FUNC_4("http://cookie.attrs.com/", ((void*)0), VAR_5, &VAR_6, VAR_4, ((void*)0));
    FUNC_8(VAR_8, "InternetGetCookieEx failed: %u\n", FUNC_0());
    FUNC_8(!FUNC_9(VAR_5, "A=data"), "data = %s\n", VAR_5);

}
