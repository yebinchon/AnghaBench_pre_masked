
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(void)
{
    int VAR_1 = 0;
    BIO *VAR_2 = ((void*)0);
    char VAR_3[16];

    VAR_2 = FUNC_2(FUNC_6());
    if (!FUNC_12(VAR_2))
        goto finish;
    if (!FUNC_8(FUNC_3(VAR_2, "Hello World\n"), 12))
        goto finish;

    FUNC_7(VAR_2, VAR_0);

    if (!FUNC_8(FUNC_4(VAR_2, VAR_3, 16), 12))
        goto finish;
    if (!FUNC_11(VAR_3, 12, "Hello World\n", 12))
        goto finish;
    if (!FUNC_9(FUNC_5(VAR_2), 0))
        goto finish;

    if (!FUNC_8(FUNC_4(VAR_2, VAR_3, 16), 12))
        goto finish;
    if (!FUNC_11(VAR_3, 12, "Hello World\n", 12))
        goto finish;

    FUNC_0(VAR_2, VAR_0);
    if (!FUNC_9(FUNC_5(VAR_2), 0))
        goto finish;

    if (!FUNC_10(FUNC_4(VAR_2, VAR_3, 16), 1))
        goto finish;

    VAR_1 = 1;

finish:
    FUNC_1(VAR_2);
    return VAR_1;
}
