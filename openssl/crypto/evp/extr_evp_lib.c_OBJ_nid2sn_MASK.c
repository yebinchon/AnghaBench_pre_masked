
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name_id; int * prov; } ;
typedef TYPE_1__ EVP_MD ;


 int FUNC_0 (TYPE_1__ const*) ;
 char const* FUNC_1 (int ) ;
 char const* FUNC_2 (int *,int ) ;

const char *FUNC_3(const EVP_MD *VAR_0)
{
    if (VAR_0->prov != ((void*)0))
        return FUNC_2(VAR_0->prov, VAR_0->name_id);

    return FUNC_1(FUNC_0(VAR_0));



}
