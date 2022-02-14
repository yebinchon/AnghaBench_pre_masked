
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_NAMEMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 char const VAR_5 ;
 int FUNC_2 (int *,int,char const*,size_t) ;
 int FUNC_3 (int *,char const*,size_t) ;
 char* FUNC_4 (char const*,char const) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(OSSL_NAMEMAP *VAR_6,
                                const char *VAR_7)
{
    const char *VAR_8, *VAR_9;
    size_t VAR_10;
    int VAR_11 = 0;


    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }





    for (VAR_8 = VAR_7; *VAR_8 != '\0'; VAR_8 = (VAR_9 == ((void*)0) ? VAR_8 + VAR_10 : VAR_9 + 1)) {
        int VAR_12;

        if ((VAR_9 = FUNC_4(VAR_8, VAR_5)) == ((void*)0))
            VAR_10 = FUNC_5(VAR_8);
        else
            VAR_10 = VAR_9 - VAR_8;

        VAR_12 = FUNC_3(VAR_6, VAR_8, VAR_10);

        if (*VAR_8 == '\0' || *VAR_8 == VAR_5) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
        if (VAR_11 == 0)
            VAR_11 = VAR_12;
        else if (VAR_12 != 0 && VAR_12 != VAR_11) {
            FUNC_1(VAR_0, VAR_4,
                           "\"%.*s\" has an existing different identity %d (from \"%s\")",
                           VAR_10, VAR_8, VAR_12, VAR_7);
            return 0;
        }
    }


    for (VAR_8 = VAR_7; *VAR_8 != '\0'; VAR_8 = (VAR_9 == ((void*)0) ? VAR_8 + VAR_10 : VAR_9 + 1)) {
        int VAR_13;

        if ((VAR_9 = FUNC_4(VAR_8, VAR_5)) == ((void*)0))
            VAR_10 = FUNC_5(VAR_8);
        else
            VAR_10 = VAR_9 - VAR_8;

        VAR_13 = FUNC_2(VAR_6, VAR_11, VAR_8, VAR_10);
        if (VAR_11 == 0)
            VAR_11 = VAR_13;
        else if (VAR_13 != VAR_11) {
            FUNC_1(VAR_0, VAR_1,
                           "Got id %d when expecting %d", VAR_13, VAR_11);
            return 0;
        }
    }

    return VAR_11;
}
