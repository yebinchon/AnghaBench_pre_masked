
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_3__ {scalar_t__ flags; int issuer_cert; } ;
typedef TYPE_1__ X509V3_CTX ;
typedef int GENERAL_NAMES ;
typedef int GENERAL_NAME ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(X509V3_CTX *VAR_6, GENERAL_NAMES *VAR_7)
{
    GENERAL_NAMES *VAR_8;
    GENERAL_NAME *VAR_9;
    X509_EXTENSION *VAR_10;
    int VAR_11, VAR_12;

    if (VAR_6 && (VAR_6->flags == VAR_0))
        return 1;
    if (!VAR_6 || !VAR_6->issuer_cert) {
        FUNC_1(VAR_3, VAR_5);
        goto err;
    }
    VAR_11 = FUNC_3(VAR_6->issuer_cert, VAR_2, -1);
    if (VAR_11 < 0)
        return 1;
    if ((VAR_10 = FUNC_2(VAR_6->issuer_cert, VAR_11)) == ((void*)0)
        || (VAR_8 = FUNC_0(VAR_10)) == ((void*)0)) {
        FUNC_1(VAR_3, VAR_4);
        goto err;
    }

    VAR_12 = FUNC_5(VAR_8);
    if (!FUNC_7(VAR_7, VAR_12)) {
        FUNC_1(VAR_3, VAR_1);
        goto err;
    }

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
        VAR_9 = FUNC_8(VAR_8, VAR_11);
        FUNC_6(VAR_7, VAR_9);
    }
    FUNC_4(VAR_8);

    return 1;

 err:
    return 0;

}
