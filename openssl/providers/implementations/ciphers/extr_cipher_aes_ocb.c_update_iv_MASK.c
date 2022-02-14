
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ivlen; int iv; } ;
struct TYPE_6__ {scalar_t__ iv_state; int taglen; TYPE_1__ base; } ;
typedef TYPE_2__ PROV_AES_OCB_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(PROV_AES_OCB_CTX *VAR_4)
{
    if (VAR_4->iv_state == VAR_2
        || VAR_4->iv_state == VAR_3)
        return 0;
    if (VAR_4->iv_state == VAR_0) {
        if (!FUNC_0(VAR_4, VAR_4->base.iv, VAR_4->base.ivlen,
                                   VAR_4->taglen))
            return 0;
        VAR_4->iv_state = VAR_1;
    }
    return 1;
}
