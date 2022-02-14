
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int flags; int block; int enc; int iv; int ks; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char*,size_t,int ,int ,int*,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;

int FUNC_1(PROV_CIPHER_CTX *VAR_2, unsigned char *VAR_3,
                           const unsigned char *VAR_4, size_t VAR_5)
{
    int VAR_6 = VAR_2->num;

    if ((VAR_2->flags & VAR_0) != 0) {
        FUNC_0(VAR_4, VAR_3, VAR_5, VAR_2->ks, VAR_2->iv, &VAR_6,
                                VAR_2->enc, VAR_2->block);
        VAR_2->num = VAR_6;
        return 1;
    }

    while (VAR_5 >= VAR_1) {
        FUNC_0(VAR_4, VAR_3, VAR_1 * 8, VAR_2->ks,
                                VAR_2->iv, &VAR_6, VAR_2->enc, VAR_2->block);
        VAR_5 -= VAR_1;
        VAR_3 += VAR_1;
        VAR_4 += VAR_1;
    }
    if (VAR_5)
        FUNC_0(VAR_4, VAR_3, VAR_5 * 8, VAR_2->ks, VAR_2->iv, &VAR_6,
                                VAR_2->enc, VAR_2->block);

    VAR_2->num = VAR_6;

    return 1;
}
