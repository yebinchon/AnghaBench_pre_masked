
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nid; } ;
struct TYPE_6__ {int algs; } ;
typedef TYPE_1__ OSSL_METHOD_STORE ;
typedef TYPE_2__ ALGORITHM ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(OSSL_METHOD_STORE *VAR_0, ALGORITHM *VAR_1)
{
        return FUNC_0(VAR_0->algs, VAR_1->nid, VAR_1);
}
