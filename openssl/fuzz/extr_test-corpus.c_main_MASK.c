
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPENSSL_DIR_CTX ;


 int FUNC_0 () ;
 int FUNC_1 (int*,char***) ;
 int FUNC_2 (int **) ;
 char* FUNC_3 (int **,char*) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_1, char **VAR_2) {
    int VAR_3;

    FUNC_1(&VAR_1, &VAR_2);

    for (VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3) {
        size_t VAR_4 = FUNC_8(VAR_2[VAR_3]);
        const char *VAR_5 = ((void*)0);
        char *VAR_6 = ((void*)0);
        OPENSSL_DIR_CTX *VAR_7 = ((void*)0);
        int VAR_8 = 0;




        while ((VAR_5 = FUNC_3(&VAR_7, VAR_2[VAR_3])) != ((void*)0)) {
            VAR_8 = 1;
            if (VAR_6 == ((void*)0)) {
                VAR_6 = FUNC_5(VAR_0);
                if (VAR_6 == ((void*)0))
                    break;
                FUNC_7(VAR_6, VAR_2[VAR_3]);



                    VAR_6[VAR_4++] = '/';
                VAR_6[VAR_4] = '\0';
            }
            FUNC_7(VAR_6 + VAR_4, VAR_5);
            FUNC_9(VAR_6);
        }
        FUNC_2(&VAR_7);


        if (!VAR_8)
            FUNC_9(VAR_2[VAR_3]);

        FUNC_4(VAR_6);
    }

    FUNC_0();

    return 0;
}
