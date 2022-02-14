
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int skip; char* err; TYPE_1__* data; } ;
struct TYPE_10__ {int * keyname; struct TYPE_10__* genctx; } ;
typedef TYPE_1__ KEYGEN_TEST_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef TYPE_1__ EVP_PKEY_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(EVP_TEST *VAR_1, const char *VAR_2)
{
    KEYGEN_TEST_DATA *VAR_3;
    EVP_PKEY_CTX *VAR_4;
    int VAR_5 = FUNC_4(VAR_2);

    if (VAR_5 == VAR_0) {
        VAR_5 = FUNC_3(VAR_2);
        if (VAR_5 == VAR_0)
            return 0;
    }

    if (!FUNC_6(VAR_4 = FUNC_1(VAR_5, ((void*)0)))) {

        VAR_1->skip = 1;
        return 1;
    }

    if (FUNC_2(VAR_4) <= 0) {
        VAR_1->err = "KEYGEN_INIT_ERROR";
        goto err;
    }

    if (!FUNC_6(VAR_3 = FUNC_5(sizeof(*VAR_3))))
        goto err;
    VAR_3->genctx = VAR_4;
    VAR_3->keyname = ((void*)0);
    VAR_1->data = VAR_3;
    VAR_1->err = ((void*)0);
    return 1;

err:
    FUNC_0(VAR_4);
    return 0;
}
