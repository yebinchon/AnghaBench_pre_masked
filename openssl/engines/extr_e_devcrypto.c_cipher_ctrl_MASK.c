
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key; } ;
struct cipher_ctx {TYPE_1__ sess; int op; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;


 int FUNC_2 (int *,void*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_1, int VAR_2, int VAR_3, void* VAR_4)
{
    struct cipher_ctx *VAR_5 =
        (struct cipher_ctx *)FUNC_0(VAR_1);
    EVP_CIPHER_CTX *VAR_6 = (EVP_CIPHER_CTX *)VAR_4;
    struct cipher_ctx *VAR_7;

    switch (VAR_2) {

    case 129:
        if (VAR_5 == ((void*)0))
            return 1;

        VAR_7 =
            (struct cipher_ctx *)FUNC_0(VAR_6);
        FUNC_3(&VAR_7->sess, 0, sizeof(VAR_7->sess));
        return FUNC_2(VAR_6, (void *)VAR_5->sess.key, FUNC_1(VAR_1),
                           (VAR_5->op == VAR_0));

    case 128:
        FUNC_3(&VAR_5->sess, 0, sizeof(VAR_5->sess));
        return 1;

    default:
        break;
    }

    return -1;
}
