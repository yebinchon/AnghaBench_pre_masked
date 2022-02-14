
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* prefix; int linestart; } ;
typedef TYPE_1__ PREFIX_CTX ;
typedef int BIO ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,size_t,size_t*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, const char *VAR_1, size_t VAR_2,
                        size_t *VAR_3)
{
    PREFIX_CTX *VAR_4 = FUNC_0(VAR_0);

    if (VAR_4 == ((void*)0))
        return 0;


    if (VAR_4->prefix == ((void*)0) || *VAR_4->prefix == '\0') {

        if (VAR_2 > 0)
            VAR_4->linestart = (VAR_1[VAR_2-1] == '\n');
        return FUNC_2(FUNC_1(VAR_0), VAR_1, VAR_2, VAR_3);
    }

    *VAR_3 = 0;

    while (VAR_2 > 0) {
        size_t VAR_5;
        char VAR_6;


        if (VAR_4->linestart) {
            size_t VAR_7;

            if (!FUNC_2(FUNC_1(VAR_0), VAR_4->prefix, FUNC_3(VAR_4->prefix),
                              &VAR_7))
                return 0;
            VAR_4->linestart = 0;
        }


        for (VAR_5 = 0, VAR_6 = '\0'; VAR_5 < VAR_2 && (VAR_6 = VAR_1[VAR_5]) != '\n'; VAR_5++)
            continue;
        if (VAR_6 == '\n')
            VAR_5++;


        while (VAR_5 > 0) {
            size_t VAR_8 = 0;

            if (!FUNC_2(FUNC_1(VAR_0), VAR_1, VAR_5, &VAR_8))
                return 0;
            VAR_1 += VAR_8;
            VAR_2 -= VAR_8;
            *VAR_3 += VAR_8;
            VAR_5 -= VAR_8;
        }


        if (VAR_6 == '\n')
            VAR_4->linestart = 1;
    }

    return 1;
}
