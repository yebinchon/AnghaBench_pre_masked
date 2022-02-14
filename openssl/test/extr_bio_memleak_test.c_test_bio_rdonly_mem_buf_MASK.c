
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF_MEM ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(void)
{
    int VAR_3 = 0;
    BIO *VAR_4, *VAR_5 = ((void*)0);
    BUF_MEM *VAR_6;
    char VAR_7[16];

    VAR_4 = FUNC_3("Hello World\n", 12);
    if (!FUNC_13(VAR_4))
        goto finish;
    if (!FUNC_10(FUNC_4(VAR_4, VAR_7, 5), 5))
        goto finish;
    if (!FUNC_12(VAR_7, 5, "Hello", 5))
        goto finish;
    if (!FUNC_11(FUNC_1(VAR_4, &VAR_6), 0))
        goto finish;
    (void)FUNC_7(VAR_4, VAR_2);

    VAR_5 = FUNC_2(FUNC_6());
    if (!FUNC_13(VAR_5))
        goto finish;
    FUNC_9(VAR_5, VAR_6, VAR_0);
    FUNC_8(VAR_5, VAR_1);

    if (!FUNC_10(FUNC_4(VAR_5, VAR_7, 16), 7))
        goto finish;
    if (!FUNC_12(VAR_7, 7, " World\n", 7))
        goto finish;
    if (!FUNC_11(FUNC_5(VAR_5), 0))
        goto finish;
    if (!FUNC_10(FUNC_4(VAR_5, VAR_7, 16), 7))
        goto finish;
    if (!FUNC_12(VAR_7, 7, " World\n", 7))
        goto finish;
    VAR_3 = 1;

finish:
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    return VAR_3;
}
