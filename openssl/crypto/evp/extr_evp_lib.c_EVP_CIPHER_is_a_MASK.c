
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name_id; int * prov; } ;
typedef TYPE_1__ EVP_CIPHER ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,char const*) ;

int FUNC_4(const EVP_CIPHER *VAR_0, const char *VAR_1)
{

    if (VAR_0->prov == ((void*)0)) {
        int VAR_2 = FUNC_0(VAR_0);

        return VAR_2 == FUNC_2(VAR_1) || VAR_2 == FUNC_1(VAR_1);
    }

    return FUNC_3(VAR_0->prov, VAR_0->name_id, VAR_1);
}
