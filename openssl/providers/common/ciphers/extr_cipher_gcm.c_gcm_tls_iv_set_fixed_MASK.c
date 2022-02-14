
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ivlen; int iv_gen; void* iv_state; scalar_t__ iv; int libctx; scalar_t__ enc; } ;
typedef TYPE_1__ PROV_GCM_CTX ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_2(PROV_GCM_CTX *VAR_3, unsigned char *VAR_4,
                                size_t VAR_5)
{

    if (VAR_5 == (size_t)-1) {
        FUNC_0(VAR_3->iv, VAR_4, VAR_3->ivlen);
        VAR_3->iv_gen = 1;
        VAR_3->iv_state = VAR_2;
        return 1;
    }

    if ((VAR_5 < VAR_1)
        || (VAR_3->ivlen - (int)VAR_5) < VAR_0)
            return 0;
    if (VAR_5 > 0)
        FUNC_0(VAR_3->iv, VAR_4, VAR_5);
    if (VAR_3->enc
        && FUNC_1(VAR_3->libctx, VAR_3->iv + VAR_5, VAR_3->ivlen - VAR_5) <= 0)
            return 0;
    VAR_3->iv_gen = 1;
    VAR_3->iv_state = VAR_2;
    return 1;
}
