
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ l1; scalar_t__* pl1; scalar_t__* pc1; } ;
typedef TYPE_1__ ps1_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
    const ps1_t *VAR_3, *VAR_4;

    VAR_3 = VAR_0;
    VAR_4 = VAR_1;

    if(VAR_3->l1 != VAR_4->l1)
        return 1;

    if(VAR_3->pl1 && VAR_4->pl1)
    {
        if(*VAR_3->pl1 != *VAR_4->pl1)
            return 1;
    }
    else if(VAR_3->pl1 || VAR_4->pl1)
        return 1;

    if(VAR_3->pc1 && VAR_4->pc1)
    {
        if(*VAR_3->pc1 != *VAR_4->pc1)
            return 1;
    }
    else if(VAR_3->pc1 || VAR_4->pc1)
        return 1;

    return 0;
}
