
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int ,char*,int ) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

char *FUNC_6(void)
{
    char *VAR_1, *VAR_2 = "";
    int VAR_3;

    if ((VAR_1 = FUNC_4("OPENSSL_CONF")) != ((void*)0))
        return FUNC_2(VAR_1);

    VAR_3 = FUNC_5(FUNC_3());

    VAR_3++;
    VAR_2 = "/";

    VAR_3 += FUNC_5(VAR_0);

    VAR_1 = FUNC_1(VAR_3 + 1);

    if (VAR_1 == ((void*)0))
        return ((void*)0);
    FUNC_0(VAR_1, VAR_3 + 1, "%s%s%s", FUNC_3(),
                 VAR_2, VAR_0);

    return VAR_1;
}
