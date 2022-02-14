
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hash_ctx; scalar_t__ hash; } ;
typedef TYPE_1__ jbig2dec_params_t ;
typedef int SHA1_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(jbig2dec_params_t *VAR_1)
{
    VAR_1->hash_ctx = (SHA1_CTX *) FUNC_2(sizeof(SHA1_CTX));
    if (VAR_1->hash_ctx == ((void*)0)) {
        FUNC_1(VAR_0, "unable to allocate hash state\n");
        VAR_1->hash = 0;
        return;
    } else {
        FUNC_0(VAR_1->hash_ctx);
    }
}
