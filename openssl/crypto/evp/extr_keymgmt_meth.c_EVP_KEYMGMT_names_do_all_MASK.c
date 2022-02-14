
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name_id; int * prov; } ;
typedef TYPE_1__ EVP_KEYMGMT ;


 int FUNC_0 (int *,int ,void (*) (char const*,void*),void*) ;

void FUNC_1(const EVP_KEYMGMT *VAR_0,
                              void (*VAR_1)(const char *VAR_2, void *VAR_3),
                              void *VAR_4)
{
    if (VAR_0->prov != ((void*)0))
        FUNC_0(VAR_0->prov, VAR_0->name_id, VAR_1, VAR_4);
}
