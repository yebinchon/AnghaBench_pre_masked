
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ks; } ;
struct TYPE_6__ {size_t (* wrapfn ) (int *,int *,unsigned char*,unsigned char const*,size_t,int ) ;TYPE_1__ ks; } ;
struct TYPE_5__ {int pad; int block; int * iv; scalar_t__ iv_set; scalar_t__ enc; } ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef TYPE_3__ PROV_AES_WRAP_CTX ;


 size_t FUNC_0 (int *,int *,unsigned char*,unsigned char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned char *VAR_1,
                                    const unsigned char *VAR_2, size_t VAR_3)
{
    PROV_CIPHER_CTX *VAR_4 = (PROV_CIPHER_CTX *)VAR_0;
    PROV_AES_WRAP_CTX *VAR_5 = (PROV_AES_WRAP_CTX *)VAR_0;
    size_t VAR_6;
    int VAR_7 = VAR_4->pad;


    if (VAR_2 == ((void*)0))
        return 0;


    if (VAR_3 == 0)
        return -1;


    if (!VAR_4->enc && (VAR_3 < 16 || VAR_3 & 0x7))
        return -1;


    if (!VAR_7 && VAR_3 & 0x7)
        return -1;

    if (VAR_1 == ((void*)0)) {
        if (VAR_4->enc) {

            if (VAR_7)
                VAR_3 = (VAR_3 + 7) / 8 * 8;

            return VAR_3 + 8;
        } else {





            return VAR_3 - 8;
        }
    }

    VAR_6 = VAR_5->wrapfn(&VAR_5->ks.ks, VAR_4->iv_set ? VAR_4->iv : ((void*)0), VAR_1, VAR_2,
                      VAR_3, VAR_4->block);
    return VAR_6 ? (int)VAR_6 : -1;
}
