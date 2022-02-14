
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mac; int iterationCount; int owf; int salt; } ;
typedef TYPE_1__ OSSL_CRMF_PBMPARAMETER ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ FUNC_8 (unsigned char*,int) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ,int ,int *) ;

OSSL_CRMF_PBMPARAMETER *FUNC_10(size_t VAR_7, int VAR_8,
                                           int VAR_9, int VAR_10)
{
    OSSL_CRMF_PBMPARAMETER *VAR_11 = ((void*)0);
    unsigned char *VAR_12 = ((void*)0);

    if ((VAR_11 = FUNC_7()) == ((void*)0))
        goto err;






    if ((VAR_12 = FUNC_5(VAR_7)) == ((void*)0))
        goto err;
    if (FUNC_8(VAR_12, (int)VAR_7) <= 0) {
        FUNC_2(VAR_0, VAR_2);
        goto err;
    }
    if (!FUNC_1(VAR_11->salt, VAR_12, (int)VAR_7))
        goto err;






    if (!FUNC_9(VAR_11->owf, FUNC_3(VAR_8), VAR_6, ((void*)0))) {
        FUNC_2(VAR_0, VAR_5);
        goto err;
    }
    if (VAR_9 < 100) {
        FUNC_2(VAR_0, VAR_3);
        goto err;
    }

    if (!FUNC_0(VAR_11->iterationCount, VAR_9)) {
        FUNC_2(VAR_0, VAR_1);
        goto err;
    }






    if (!FUNC_9(VAR_11->mac, FUNC_3(VAR_10), VAR_6, ((void*)0))) {
        FUNC_2(VAR_0, VAR_4);
        goto err;
    }

    FUNC_4(VAR_12);
    return VAR_11;
 err:
    FUNC_4(VAR_12);
    FUNC_6(VAR_11);
    return ((void*)0);
}
