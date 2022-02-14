
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ,int ,int *,int *,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (int) ;

int FUNC_7(void)
{
    char *VAR_4, *VAR_5;

    if (!FUNC_2(VAR_4 = FUNC_6(0))
            || !FUNC_2(VAR_5 = FUNC_6(1)))
        return 0;

    if (!FUNC_5(FUNC_4(), FUNC_3(),
                             VAR_0, 0,
                             &VAR_2, &VAR_1, VAR_4, VAR_5)) {
        FUNC_1("Failed to create SSL_CTX pair\n");
        return 0;
    }

    FUNC_0(VAR_3, 9);
    return 1;
}
