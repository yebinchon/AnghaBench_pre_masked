
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cipher; int ctx_df; int ctx; } ;
struct TYPE_5__ {TYPE_4__ ctr; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_3(RAND_DRBG *VAR_0)
{
    FUNC_0(VAR_0->data.ctr.ctx);
    FUNC_0(VAR_0->data.ctr.ctx_df);
    FUNC_1(VAR_0->data.ctr.cipher);
    FUNC_2(&VAR_0->data.ctr, sizeof(VAR_0->data.ctr));
    return 1;
}
