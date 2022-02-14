
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*,char*,char*,char*,int,int ,int,char*) ;

int FUNC_4(UI *VAR_3, const char *VAR_4, const char *VAR_5,
                         const char *VAR_6, const char *VAR_7,
                         int VAR_8, char *VAR_9)
{
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);

    if (VAR_4 != ((void*)0)) {
        VAR_10 = FUNC_1(VAR_4);
        if (VAR_10 == ((void*)0)) {
            FUNC_2(VAR_2, VAR_0);
            goto err;
        }
    }

    if (VAR_5 != ((void*)0)) {
        VAR_11 = FUNC_1(VAR_5);
        if (VAR_11 == ((void*)0)) {
            FUNC_2(VAR_2, VAR_0);
            goto err;
        }
    }

    if (VAR_6 != ((void*)0)) {
        VAR_12 = FUNC_1(VAR_6);
        if (VAR_12 == ((void*)0)) {
            FUNC_2(VAR_2, VAR_0);
            goto err;
        }
    }

    if (VAR_7 != ((void*)0)) {
        VAR_13 = FUNC_1(VAR_7);
        if (VAR_13 == ((void*)0)) {
            FUNC_2(VAR_2, VAR_0);
            goto err;
        }
    }

    return FUNC_3(VAR_3, VAR_10, VAR_11,
                                    VAR_12, VAR_13, 1,
                                    VAR_1, VAR_8, VAR_9);
 err:
    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    FUNC_0(VAR_12);
    FUNC_0(VAR_13);
    return -1;
}
