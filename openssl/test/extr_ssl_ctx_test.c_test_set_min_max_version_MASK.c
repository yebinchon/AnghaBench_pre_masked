
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expected_max; int expected_min; int max_ok; int max_version; int min_ok; int min_version; } ;
typedef TYPE_1__ version_test ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_14(int VAR_1)
{
    SSL_CTX *VAR_2 = ((void*)0);
    SSL *VAR_3 = ((void*)0);
    int VAR_4 = 0;
    version_test VAR_5 = VAR_0[VAR_1];

    VAR_2 = FUNC_3(FUNC_13());
    if (VAR_2 == ((void*)0))
        goto end;

    VAR_3 = FUNC_9(VAR_2);
    if (VAR_3 == ((void*)0))
        goto end;

    if (!FUNC_12(FUNC_5(VAR_2, VAR_5.min_version), VAR_5.min_ok))
        goto end;
    if (!FUNC_12(FUNC_4(VAR_2, VAR_5.max_version), VAR_5.max_ok))
        goto end;
    if (!FUNC_12(FUNC_2(VAR_2), VAR_5.expected_min))
        goto end;
    if (!FUNC_12(FUNC_1(VAR_2), VAR_5.expected_max))
        goto end;

    if (!FUNC_12(FUNC_11(VAR_3, VAR_5.min_version), VAR_5.min_ok))
        goto end;
    if (!FUNC_12(FUNC_10(VAR_3, VAR_5.max_version), VAR_5.max_ok))
        goto end;
    if (!FUNC_12(FUNC_8(VAR_3), VAR_5.expected_min))
        goto end;
    if (!FUNC_12(FUNC_7(VAR_3), VAR_5.expected_max))
        goto end;

    VAR_4 = 1;

  end:
    FUNC_6(VAR_3);
    FUNC_0(VAR_2);
    return VAR_4;
}
