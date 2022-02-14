
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char const*,int) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_0, const char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
    static char VAR_4[] = "";
    BIO *VAR_5 = FUNC_1(VAR_0);
    size_t VAR_6;
    int VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        if (FUNC_0(VAR_0) == ((void*)0)) {
            FUNC_2(VAR_0, VAR_4);
            for (VAR_7 = 0; VAR_7 < FUNC_3(); VAR_7++)
                if (!FUNC_4(VAR_5, " ", 1))
                    goto err;
            if (!FUNC_4(VAR_5, "# ", 2))
                goto err;
        }
        if (!FUNC_4(VAR_5, VAR_1 + VAR_6, 1))
            goto err;
        if (VAR_1[VAR_6] == '\n')
            FUNC_2(VAR_0, ((void*)0));
    }
    *VAR_3 = VAR_6;
    return 1;

err:
    *VAR_3 = VAR_6;
    return 0;
}
