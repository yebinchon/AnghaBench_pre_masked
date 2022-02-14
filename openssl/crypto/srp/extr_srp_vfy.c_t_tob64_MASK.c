
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_ENCODE_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int*,unsigned char const*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
    EVP_ENCODE_CTX *VAR_5 = FUNC_1();
    int VAR_6 = 0, VAR_7 = 0;
    unsigned char VAR_8[2] = {0, 0};
    size_t VAR_9 = 0;

    if (VAR_5 == ((void*)0))
        return 0;

    FUNC_3(VAR_5);
    FUNC_5(VAR_5, VAR_0
                                  | VAR_1);






    VAR_9 = 3 - (VAR_4 % 3);
    if (VAR_9 != 3
            && !FUNC_4(VAR_5, (unsigned char *)VAR_2, &VAR_6, VAR_8,
                                 VAR_9)) {
        FUNC_0(VAR_5);
        return 0;
    }

    if (!FUNC_4(VAR_5, (unsigned char *)VAR_2 + VAR_6, &VAR_7, VAR_3,
                          VAR_4)) {
        FUNC_0(VAR_5);
        return 0;
    }
    VAR_6 += VAR_7;
    FUNC_2(VAR_5, (unsigned char *)VAR_2 + VAR_6, &VAR_7);
    VAR_6 += VAR_7;


    if (VAR_9 != 3) {
        FUNC_6(VAR_2, VAR_2 + VAR_9, VAR_6 - VAR_9);
        VAR_2[VAR_6 - VAR_9] = '\0';
    }

    FUNC_0(VAR_5);
    return 1;
}
