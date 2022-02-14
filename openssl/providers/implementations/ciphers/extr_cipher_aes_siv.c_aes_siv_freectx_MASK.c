
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* hw; } ;
struct TYPE_5__ {int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_2__ PROV_AES_SIV_CTX ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    PROV_AES_SIV_CTX *VAR_1 = (PROV_AES_SIV_CTX *)VAR_0;

    if (VAR_1 != ((void*)0)) {
        VAR_1->hw->cleanup(VAR_1);
        FUNC_0(VAR_1, sizeof(*VAR_1));
    }
}
