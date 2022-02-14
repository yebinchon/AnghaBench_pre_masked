
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF_MEM ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(void)
{
    int VAR_0 = 0;
    BIO *VAR_1;
    BUF_MEM *VAR_2;
    char VAR_3[16];

    VAR_1 = FUNC_2("Hello World\n", 12);
    if (!FUNC_10(VAR_1))
        goto finish;
    if (!FUNC_6(FUNC_3(VAR_1, VAR_3, 5), 5))
        goto finish;
    if (!FUNC_9(VAR_3, 5, "Hello", 5))
        goto finish;
    if (!FUNC_7(FUNC_1(VAR_1, &VAR_2), 0))
        goto finish;
    if (!FUNC_8(FUNC_5(VAR_1, "test", 4), 0))
        goto finish;
    if (!FUNC_6(FUNC_3(VAR_1, VAR_3, 16), 7))
        goto finish;
    if (!FUNC_9(VAR_3, 7, " World\n", 7))
        goto finish;
    if (!FUNC_7(FUNC_4(VAR_1), 0))
        goto finish;
    if (!FUNC_6(FUNC_3(VAR_1, VAR_3, 16), 12))
        goto finish;
    if (!FUNC_9(VAR_3, 12, "Hello World\n", 12))
        goto finish;
    VAR_0 = 1;

finish:
    FUNC_0(VAR_1);
    return VAR_0;
}
