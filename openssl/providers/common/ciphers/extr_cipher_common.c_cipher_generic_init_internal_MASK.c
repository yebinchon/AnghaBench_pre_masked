
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int enc; scalar_t__ mode; int flags; size_t keylen; TYPE_1__* hw; } ;
struct TYPE_6__ {int (* init ) (TYPE_2__*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_2__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_3(PROV_CIPHER_CTX *VAR_4,
                                        const unsigned char *VAR_5, size_t VAR_6,
                                        const unsigned char *VAR_7, size_t VAR_8,
                                        int VAR_9)
{
    VAR_4->enc = VAR_9 ? 1 : 0;

    if (VAR_7 != ((void*)0) && VAR_4->mode != VAR_1) {
        if (!FUNC_1(VAR_4, VAR_7, VAR_8))
            return 0;
    }
    if (VAR_5 != ((void*)0)) {
        if ((VAR_4->flags & VAR_2) == 0) {
            if (VAR_6 != VAR_4->keylen) {
                FUNC_0(VAR_0, VAR_3);
                return 0;
            }
        } else {
            VAR_4->keylen = VAR_6;
        }
        return VAR_4->hw->init(VAR_4, VAR_5, VAR_4->keylen);
    }
    return 1;
}
