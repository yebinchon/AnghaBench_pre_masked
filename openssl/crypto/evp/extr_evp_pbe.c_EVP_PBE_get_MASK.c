
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pbe_type; int pbe_nid; } ;
typedef TYPE_1__ EVP_PBE_CTL ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(int *VAR_1, int *VAR_2, size_t VAR_3)
{
    const EVP_PBE_CTL *VAR_4;

    if (VAR_3 >= FUNC_0(VAR_0))
        return 0;

    VAR_4 = VAR_0 + VAR_3;
    if (VAR_1)
        *VAR_1 = VAR_4->pbe_type;
    if (VAR_2)
        *VAR_2 = VAR_4->pbe_nid;
    return 1;
}
