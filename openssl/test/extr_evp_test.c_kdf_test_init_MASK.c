
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int skip; TYPE_1__* data; } ;
struct TYPE_7__ {int * ctx; int * p; int * params; } ;
typedef TYPE_1__ KDF_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef int EVP_KDF ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(EVP_TEST *VAR_0, const char *VAR_1)
{
    KDF_DATA *VAR_2;
    EVP_KDF *VAR_3;
    if (!FUNC_6(VAR_2 = FUNC_4(sizeof(*VAR_2))))
        return 0;
    VAR_2->p = VAR_2->params;
    *VAR_2->p = FUNC_5();

    VAR_3 = FUNC_1(((void*)0), VAR_1, ((void*)0));
    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_2);
        return 0;
    }
    VAR_2->ctx = FUNC_0(VAR_3);
    FUNC_2(VAR_3);
    if (VAR_2->ctx == ((void*)0)) {
        FUNC_3(VAR_2);
        return 0;
    }
    VAR_0->data = VAR_2;
    return 1;
}
