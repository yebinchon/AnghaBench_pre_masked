
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enc; size_t keylen; TYPE_1__* hw; } ;
struct TYPE_4__ {int (* initkey ) (TYPE_2__*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ PROV_AES_SIV_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, const unsigned char *VAR_3, size_t VAR_4,
                    const unsigned char *VAR_5, size_t VAR_6, int VAR_7)
{
    PROV_AES_SIV_CTX *VAR_8 = (PROV_AES_SIV_CTX *)VAR_2;

    VAR_8->enc = VAR_7;

    if (VAR_5 != ((void*)0))
        return 0;

    if (VAR_3 != ((void*)0)) {
        if (VAR_4 != VAR_8->keylen) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        return VAR_8->hw->initkey(VAR_8, VAR_3, VAR_8->keylen);
    }
    return 1;
}
