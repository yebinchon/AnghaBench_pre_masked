
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_8 (int *,int *,int **,int **,int *,int *) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(void)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (!FUNC_7(FUNC_5(), FUNC_4(),
                             VAR_3, VAR_2,
                             &VAR_7, &VAR_6, VAR_4, VAR_5)) {
        FUNC_9("Unable to create SSL_CTX pair\n");
        goto end;
    }

    FUNC_1(VAR_7, VAR_1);

    if (!FUNC_8(VAR_7, VAR_6, &VAR_9, &VAR_8, ((void*)0), ((void*)0))) {
        FUNC_9("Unable to create SSL objects\n");
        goto end;
    }

    if (!FUNC_6(VAR_9, VAR_8, VAR_0)) {
        FUNC_9("Creating SSL connection failed\n");
        goto end;
    }

    if (FUNC_3(VAR_9)) {
        FUNC_9("Server reports Extended Master Secret support\n");
        goto end;
    }

    if (FUNC_3(VAR_8)) {
        FUNC_9("Client reports Extended Master Secret support\n");
        goto end;
    }
    VAR_10 = 1;

end:
    FUNC_2(VAR_9);
    FUNC_2(VAR_8);
    FUNC_0(VAR_7);
    FUNC_0(VAR_6);

    return VAR_10;
}
