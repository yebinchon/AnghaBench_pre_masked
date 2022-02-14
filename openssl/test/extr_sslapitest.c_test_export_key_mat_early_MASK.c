
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int skeymat2 ;
typedef int skeymat1 ;
typedef int label ;
typedef int context ;
typedef int ckeymat2 ;
typedef int ckeymat1 ;
typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int,char const*,int,unsigned char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int,size_t*) ;
 int FUNC_6 (int *,int *,int ,size_t*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (unsigned char*,int,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int,unsigned char*,int) ;
 int FUNC_10 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_11 (int **,int **,int **,int **,int **,int) ;

__attribute__((used)) static int FUNC_12(int VAR_4)
{
    static const char VAR_5[] = "test label";
    static const unsigned char VAR_6[] = "context";
    int VAR_7 = 0;
    SSL_CTX *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    SSL *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    SSL_SESSION *VAR_12 = ((void*)0);
    const unsigned char *VAR_13 = ((void*)0);
    unsigned char VAR_14[80], VAR_15[80];
    unsigned char VAR_16[80], VAR_17[80];
    unsigned char VAR_18[1];
    size_t VAR_19, VAR_20;

    if (!FUNC_10(FUNC_11(&VAR_8, &VAR_9, &VAR_10, &VAR_11,
                                        &VAR_12, VAR_4)))
        goto end;


    if (!FUNC_10(FUNC_6(VAR_10, ((void*)0), 0, &VAR_20))
            || !FUNC_7(FUNC_5(VAR_11, VAR_18, sizeof(VAR_18),
                                                &VAR_19),
                            VAR_1)
            || !FUNC_7(FUNC_4(VAR_11),
                            VAR_0))
        goto end;

    if (!FUNC_7(FUNC_2(
                     VAR_10, VAR_14, sizeof(VAR_14), VAR_5,
                     sizeof(VAR_5) - 1, VAR_6, sizeof(VAR_6) - 1), 1)
            || !FUNC_7(FUNC_2(
                            VAR_10, VAR_15, sizeof(VAR_15), VAR_5,
                            sizeof(VAR_5) - 1, VAR_13, 0), 1)
            || !FUNC_7(FUNC_2(
                            VAR_11, VAR_16, sizeof(VAR_16), VAR_5,
                            sizeof(VAR_5) - 1, VAR_6, sizeof(VAR_6) - 1), 1)
            || !FUNC_7(FUNC_2(
                            VAR_11, VAR_17, sizeof(VAR_17), VAR_5,
                            sizeof(VAR_5) - 1, VAR_13, 0), 1)




            || !FUNC_8(VAR_14, sizeof(VAR_14), VAR_16,
                            sizeof(VAR_16))




            || !FUNC_8(VAR_15, sizeof(VAR_15), VAR_17,
                            sizeof(VAR_17))

            || !FUNC_9(VAR_14, sizeof(VAR_14), VAR_15,
                            sizeof(VAR_15)))
        goto end;

    VAR_7 = 1;

 end:
    FUNC_1(VAR_12);
    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    VAR_2 = VAR_3 = ((void*)0);
    FUNC_3(VAR_11);
    FUNC_3(VAR_10);
    FUNC_0(VAR_9);
    FUNC_0(VAR_8);

    return VAR_7;
}
