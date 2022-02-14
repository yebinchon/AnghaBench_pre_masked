
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enc; int iv_set; size_t keylen; TYPE_1__* hw; int iv; } ;
struct TYPE_5__ {int (* setkey ) (TYPE_2__*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ PROV_CCM_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, const unsigned char *VAR_4, size_t VAR_5,
                    const unsigned char *VAR_6, size_t VAR_7, int VAR_8)
{
    PROV_CCM_CTX *VAR_9 = (PROV_CCM_CTX *)VAR_3;

    VAR_9->enc = VAR_8;

    if (VAR_6 != ((void*)0)) {
        if (VAR_7 != FUNC_1(VAR_9)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        FUNC_2(VAR_9->iv, VAR_6, VAR_7);
        VAR_9->iv_set = 1;
    }
    if (VAR_4 != ((void*)0)) {
        if (VAR_5 != VAR_9->keylen) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        return VAR_9->hw->setkey(VAR_9, VAR_4, VAR_5);
    }
    return 1;
}
