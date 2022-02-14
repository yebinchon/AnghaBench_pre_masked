
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * subjectAltNames; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;
typedef int GENERAL_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(OSSL_CMP_CTX *VAR_2,
                                      const GENERAL_NAME *VAR_3)
{
    GENERAL_NAME *VAR_4;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        FUNC_0(0, VAR_1);
        return 0;
    }

    if (FUNC_3(VAR_2) == 1) {
        FUNC_0(0, VAR_0);
        return 0;
    }

    if (VAR_2->subjectAltNames == ((void*)0)
            && (VAR_2->subjectAltNames = FUNC_4()) == ((void*)0))
        return 0;
    if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
        return 0;
    if (!FUNC_5(VAR_2->subjectAltNames, VAR_4)) {
        FUNC_2(VAR_4);
        return 0;
    }
    return 1;
}
