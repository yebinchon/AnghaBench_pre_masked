
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* err; TYPE_2__* data; } ;
struct TYPE_10__ {int * keyname; int genctx; } ;
struct TYPE_9__ {struct TYPE_9__* next; int * key; int * name; } ;
typedef TYPE_1__ KEY_LIST ;
typedef TYPE_2__ KEYGEN_TEST_DATA ;
typedef TYPE_3__ EVP_TEST ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int *,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_6(EVP_TEST *VAR_1)
{
    KEYGEN_TEST_DATA *VAR_2 = VAR_1->data;
    EVP_PKEY *VAR_3 = ((void*)0);

    VAR_1->err = ((void*)0);
    if (FUNC_1(VAR_2->genctx, &VAR_3) <= 0) {
        VAR_1->err = "KEYGEN_GENERATE_ERROR";
        goto err;
    }

    if (VAR_2->keyname != ((void*)0)) {
        KEY_LIST *VAR_4;

        if (FUNC_5(((void*)0), VAR_2->keyname, VAR_0)) {
            FUNC_3("Duplicate key %s", VAR_2->keyname);
            goto err;
        }

        if (!FUNC_4(VAR_4 = FUNC_2(sizeof(*VAR_4))))
            goto err;
        VAR_4->name = VAR_2->keyname;
        VAR_2->keyname = ((void*)0);
        VAR_4->key = VAR_3;
        VAR_4->next = VAR_0;
        VAR_0 = VAR_4;
    } else {
        FUNC_0(VAR_3);
    }

    return 1;

err:
    FUNC_0(VAR_3);
    return 0;
}
