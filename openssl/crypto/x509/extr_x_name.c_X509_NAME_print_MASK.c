
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (int const*,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char) ;

int FUNC_5(BIO *VAR_2, const X509_NAME *VAR_3, int VAR_4)
{
    char *VAR_5, *VAR_6, *VAR_7;
    int VAR_8, VAR_9;

    VAR_8 = 80 - 2 - VAR_4;

    VAR_7 = FUNC_2(VAR_3, ((void*)0), 0);
    if (VAR_7 == ((void*)0))
        return 0;
    if (*VAR_7 == '\0') {
        FUNC_1(VAR_7);
        return 1;
    }
    VAR_5 = VAR_7 + 1;

    VAR_6 = VAR_5;
    for (;;) {
        if (((*VAR_5 == '/') &&
             (FUNC_4(VAR_5[1]) && ((VAR_5[2] == '=') ||
                                (FUNC_4(VAR_5[2]) && (VAR_5[3] == '='))
              ))) || (*VAR_5 == '\0'))
        {
            VAR_9 = VAR_5 - VAR_6;
            if (FUNC_0(VAR_2, VAR_6, VAR_9) != VAR_9)
                goto err;
            VAR_6 = VAR_5 + 1;
            if (*VAR_5 != '\0') {
                if (FUNC_0(VAR_2, ", ", 2) != 2)
                    goto err;
            }
            VAR_8--;
        }
        if (*VAR_5 == '\0')
            break;
        VAR_5++;
        VAR_8--;
    }

    FUNC_1(VAR_7);
    return 1;
 err:
    FUNC_3(VAR_1, VAR_0);
    FUNC_1(VAR_7);
    return 0;
}
