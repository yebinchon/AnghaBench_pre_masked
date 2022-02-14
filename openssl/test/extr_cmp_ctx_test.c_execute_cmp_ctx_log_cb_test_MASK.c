
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctx; } ;
typedef TYPE_1__ OSSL_CMP_CTX_TEST_FIXTURE ;
typedef int OSSL_CMP_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char*,char) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_11(OSSL_CMP_CTX_TEST_FIXTURE *VAR_9)
{
    int VAR_10 = 1;

    OSSL_CMP_CTX *VAR_11 = VAR_9->ctx;

    FUNC_8(VAR_0, "this general trace message is not shown by default\n");

    FUNC_6();
    FUNC_6();

    if (!FUNC_10(FUNC_0(VAR_11, ((void*)0)))) {
        VAR_10 = 0;
    } else {
        FUNC_3("this should be printed as CMP error message");
        FUNC_7("this should be printed as CMP warning message");
        FUNC_2("this should not be printed");
        FUNC_10(FUNC_1(VAR_11, VAR_3));
        FUNC_2("this should be printed as CMP debug message");
        FUNC_10(FUNC_1(VAR_11, VAR_5));
    }
    if (!FUNC_10(FUNC_0(VAR_11, VAR_6))) {
        VAR_10 = 0;
    } else {
        VAR_8 = VAR_2 + 1;
        FUNC_4(VAR_1, "%s%c", "o", 'k');
        if (!FUNC_9(VAR_7, 1))
            VAR_10 = 0;
        FUNC_1(VAR_11, VAR_4);
        VAR_7 = -1;
        VAR_8 = VAR_2 + 1;
        FUNC_4(VAR_1, "%s%c", "o", 'k');
        if (!FUNC_9(VAR_7, -1))
            VAR_10 = 0;
    }
    FUNC_5();
    FUNC_5();

    return VAR_10;
}
