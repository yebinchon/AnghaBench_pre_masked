
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ivlen; int iv_gen_rand; int iv_state; scalar_t__ iv; int libctx; } ;
typedef TYPE_1__ PROV_GCM_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(PROV_GCM_CTX *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_2->ivlen - VAR_3;


    if (VAR_4 <= 0 || VAR_2->ivlen < VAR_0)
        return 0;


    if (FUNC_0(VAR_2->libctx, VAR_2->iv + VAR_3, VAR_4) <= 0)
        return 0;
    VAR_2->iv_state = VAR_1;
    VAR_2->iv_gen_rand = 1;
    return 1;
}
