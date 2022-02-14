
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPENSSL_DIR_CTX ;
typedef int BIO ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int **) ;
 char* FUNC_3 (int **,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char const*,size_t) ;
 char* FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static BIO *FUNC_10(const char *VAR_2, OPENSSL_DIR_CTX **VAR_3)
{
    const char *VAR_4;
    size_t VAR_5;

    VAR_5 = FUNC_9(VAR_2);
    while ((VAR_4 = FUNC_3(VAR_3, VAR_2)) != ((void*)0)) {
        size_t VAR_6;

        VAR_6 = FUNC_9(VAR_4);


        if ((VAR_6 > 5 && FUNC_8(VAR_4 + VAR_6 - 5, ".conf") == 0)
            || (VAR_6 > 4 && FUNC_8(VAR_4 + VAR_6 - 4, ".cnf") == 0)) {
            size_t VAR_7;
            char *VAR_8;
            BIO *VAR_9;

            VAR_7 = VAR_5 + VAR_6 + 2;
            VAR_8 = FUNC_7(VAR_7);
            if (VAR_8 == ((void*)0)) {
                FUNC_1(VAR_0, VAR_1);
                break;
            }
            if (VAR_8[0] == '\0') {
                FUNC_6(VAR_8, VAR_2, VAR_7);
                FUNC_5(VAR_8, "/", VAR_7);
            }
            FUNC_5(VAR_8, VAR_4, VAR_7);

            VAR_9 = FUNC_0(VAR_8, "r");
            FUNC_4(VAR_8);

            if (VAR_9 != ((void*)0))
                return VAR_9;
        }
    }
    FUNC_2(VAR_3);
    *VAR_3 = ((void*)0);
    return ((void*)0);
}
