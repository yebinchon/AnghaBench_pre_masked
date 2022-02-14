
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ivlen; int iv_set; int oiv; int iv; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;

int FUNC_2(PROV_CIPHER_CTX *VAR_2, const unsigned char *VAR_3,
                          size_t VAR_4)
{
    if (VAR_4 != VAR_2->ivlen
        || VAR_4 > sizeof(VAR_2->iv)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_2->iv_set = 1;
    FUNC_1(VAR_2->iv, VAR_3, VAR_4);
    FUNC_1(VAR_2->oiv, VAR_3, VAR_4);
    return 1;
}
