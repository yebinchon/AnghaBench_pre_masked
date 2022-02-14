
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* bio; char* prefix; char* suffix; int type; } ;
typedef void const BIO ;


 int FUNC_0 (void const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(int VAR_6, int VAR_7, BIO **VAR_8,
                          const char **VAR_9, const char **VAR_10,
                          int (*VAR_11)(int, int, const void *),
                          int (*VAR_12)(int, int, const void *))
{
    BIO *VAR_13 = ((void*)0);
    char *VAR_14 = ((void*)0);
    char *VAR_15 = ((void*)0);


    if (!FUNC_3(&VAR_5, VAR_3))
        return 0;

    VAR_13 = VAR_4[VAR_6].bio;
    VAR_14 = VAR_4[VAR_6].prefix;
    VAR_15 = VAR_4[VAR_6].suffix;


    if (VAR_9 != ((void*)0) && VAR_14 != ((void*)0)) {
        VAR_12(VAR_6, VAR_1, VAR_14);
    }

    if (VAR_10 != ((void*)0) && VAR_15 != ((void*)0)) {
        VAR_12(VAR_6, VAR_2, VAR_15);
    }

    if (VAR_8 != ((void*)0) && VAR_13 != ((void*)0)) {
        VAR_12(VAR_6, VAR_0, VAR_13);
    }


    if (VAR_9 != ((void*)0) && VAR_14 != ((void*)0)) {
        FUNC_1(VAR_14);
        VAR_4[VAR_6].prefix = ((void*)0);
    }

    if (VAR_10 != ((void*)0) && VAR_15 != ((void*)0)) {
        FUNC_1(VAR_15);
        VAR_4[VAR_6].suffix = ((void*)0);
    }

    if (VAR_8 != ((void*)0) && VAR_13 != ((void*)0)) {
        FUNC_0(VAR_13);
        VAR_4[VAR_6].type = 0;
        VAR_4[VAR_6].bio = ((void*)0);
    }


    if (VAR_8 != ((void*)0) && *VAR_8 != ((void*)0)) {
        VAR_4[VAR_6].type = VAR_7;
        VAR_4[VAR_6].bio = *VAR_8;
    }

    if (VAR_9 != ((void*)0) && *VAR_9 != ((void*)0)) {
        if ((VAR_14 = FUNC_2(*VAR_9)) == ((void*)0))
            return 0;
        VAR_4[VAR_6].prefix = VAR_14;
    }

    if (VAR_10 != ((void*)0) && *VAR_10 != ((void*)0)) {
        if ((VAR_15 = FUNC_2(*VAR_10)) == ((void*)0))
            return 0;
        VAR_4[VAR_6].suffix = VAR_15;
    }


    if (VAR_8 != ((void*)0) && *VAR_8 != ((void*)0)) {
        VAR_11(VAR_6, VAR_0, *VAR_8);
    }

    if (VAR_9 != ((void*)0) && *VAR_9 != ((void*)0)) {
        VAR_11(VAR_6, VAR_1, *VAR_9);
    }

    if (VAR_10 != ((void*)0) && *VAR_10 != ((void*)0)) {
        VAR_11(VAR_6, VAR_2, *VAR_10);
    }

    return 1;
}
