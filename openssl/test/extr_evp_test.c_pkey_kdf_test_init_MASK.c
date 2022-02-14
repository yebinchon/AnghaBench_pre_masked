
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int skip; TYPE_1__* data; } ;
struct TYPE_7__ {int * ctx; } ;
typedef TYPE_1__ PKEY_KDF_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(EVP_TEST *VAR_1, const char *VAR_2)
{
    PKEY_KDF_DATA *VAR_3;
    int VAR_4 = FUNC_4(VAR_2);
    if (VAR_4 == VAR_0)
        VAR_4 = FUNC_3(VAR_2);

    if (!FUNC_7(VAR_3 = FUNC_6(sizeof(*VAR_3))))
        return 0;
    VAR_3->ctx = FUNC_1(VAR_4, ((void*)0));
    if (VAR_3->ctx == ((void*)0)) {
        FUNC_5(VAR_3);
        return 0;
    }
    if (FUNC_2(VAR_3->ctx) <= 0) {
        FUNC_0(VAR_3->ctx);
        FUNC_5(VAR_3);
        return 0;
    }
    VAR_1->data = VAR_3;
    return 1;
}
