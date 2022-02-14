
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (char*,char*) ;

int FUNC_10(int VAR_4, char *VAR_5[])
{

    char *VAR_6;
    char *VAR_7;
    int VAR_8;

    VAR_6 = FUNC_8("OPENSSL_DEBUG_MEMORY");
    if (VAR_6 != ((void*)0) && FUNC_9(VAR_6, "on") == 0)
        FUNC_2(1);
    FUNC_0(VAR_0);

    VAR_7 = FUNC_4(3);
    if (!FUNC_7(VAR_7))
        return VAR_1;

    if (VAR_5[1] && FUNC_9(VAR_5[1], "freeit") == 0) {
        FUNC_3(VAR_7);
        VAR_7 = ((void*)0);
    }

    VAR_8 = FUNC_1(VAR_3);

    if (!FUNC_6(VAR_8, -1))
        return VAR_1;

    return FUNC_5(VAR_7 != ((void*)0), VAR_8 == 0) ? VAR_2 : VAR_1;



}
