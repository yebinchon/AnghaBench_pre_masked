
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* err; TYPE_1__* data; } ;
struct TYPE_4__ {int * pubk; int * privk; } ;
typedef TYPE_1__ KEYPAIR_TEST_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(EVP_TEST *VAR_0)
{
    int VAR_1 = 0;
    const KEYPAIR_TEST_DATA *VAR_2 = VAR_0->data;

    if (VAR_2->privk == ((void*)0) || VAR_2->pubk == ((void*)0)) {





        VAR_0->err = "KEYPAIR_TYPE_MISMATCH";
        VAR_1 = 1;
        goto end;
    }

    if ((VAR_1 = FUNC_0(VAR_2->privk, VAR_2->pubk)) != 1 ) {
        if ( 0 == VAR_1 ) {
            VAR_0->err = "KEYPAIR_MISMATCH";
        } else if ( -1 == VAR_1 ) {
            VAR_0->err = "KEYPAIR_TYPE_MISMATCH";
        } else if ( -2 == VAR_1 ) {
            VAR_0->err = "UNSUPPORTED_KEY_COMPARISON";
        } else {
            FUNC_1("Unexpected error in key comparison");
            VAR_1 = 0;
            goto end;
        }
        VAR_1 = 1;
        goto end;
    }

    VAR_1 = 1;
    VAR_0->err = ((void*)0);

end:
    return VAR_1;
}
