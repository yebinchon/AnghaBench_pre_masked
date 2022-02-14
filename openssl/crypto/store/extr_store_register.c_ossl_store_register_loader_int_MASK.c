
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* scheme; int * close; int * error; int * eof; int * load; int * open; } ;
typedef TYPE_1__ OSSL_STORE_LOADER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (int ,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_8 (char const) ;
 scalar_t__ FUNC_9 (char const) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_10 (char*,char const) ;

int FUNC_11(OSSL_STORE_LOADER *VAR_10)
{
    const char *VAR_11 = VAR_10->scheme;
    int VAR_12 = 0;







    if (FUNC_8(*VAR_11))
        while (*VAR_11 != '\0'
               && (FUNC_8(*VAR_11)
                   || FUNC_9(*VAR_11)
                   || FUNC_10("+-.", *VAR_11) != ((void*)0)))
            VAR_11++;
    if (*VAR_11 != '\0') {
        FUNC_3(VAR_1,
                      VAR_2);
        FUNC_2(2, "scheme=", VAR_10->scheme);
        return 0;
    }


    if (VAR_10->open == ((void*)0) || VAR_10->load == ((void*)0) || VAR_10->eof == ((void*)0)
        || VAR_10->error == ((void*)0) || VAR_10->close == ((void*)0)) {
        FUNC_3(VAR_1,
                      VAR_3);
        return 0;
    }

    if (!FUNC_4(&VAR_6, VAR_4)) {
        FUNC_3(VAR_1,
                      VAR_0);
        return 0;
    }
    FUNC_1(VAR_7);

    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_7(VAR_9,
                                                   VAR_8);
    }

    if (VAR_5 != ((void*)0)
        && (FUNC_6(VAR_5, VAR_10) != ((void*)0)
            || FUNC_5(VAR_5) == 0))
        VAR_12 = 1;

    FUNC_0(VAR_7);

    return VAR_12;
}
