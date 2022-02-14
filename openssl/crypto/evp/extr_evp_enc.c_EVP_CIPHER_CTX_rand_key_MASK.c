
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cipher; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*,int ,int ,unsigned char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;

int FUNC_3(EVP_CIPHER_CTX *VAR_2, unsigned char *VAR_3)
{
    if (VAR_2->cipher->flags & VAR_0)
        return FUNC_0(VAR_2, VAR_1, 0, VAR_3);




    {
        int VAR_4;

        VAR_4 = FUNC_1(VAR_2);
        if (VAR_4 <= 0 || FUNC_2(VAR_3, VAR_4) <= 0)
            return 0;
        return 1;
    }

}
