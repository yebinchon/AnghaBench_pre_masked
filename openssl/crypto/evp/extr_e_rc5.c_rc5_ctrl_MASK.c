
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rounds; } ;
typedef int EVP_CIPHER_CTX ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;



 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(EVP_CIPHER_CTX *VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
    switch (VAR_3) {
    case 132:
        FUNC_1(VAR_2)->rounds = 130;
        return 1;

    case 133:
        *(int *)VAR_5 = FUNC_1(VAR_2)->rounds;
        return 1;

    case 131:
        switch (VAR_4) {
        case 128:
        case 130:
        case 129:
            FUNC_1(VAR_2)->rounds = VAR_4;
            return 1;

        default:
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }

    default:
        return -1;
    }
}
