
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

int FUNC_2(const type_t *VAR_1, const type_t *VAR_2)
{
    if (FUNC_1(VAR_1) != FUNC_1(VAR_2))
        return VAR_0;

    if (VAR_1->name && VAR_2->name)
        return !FUNC_0(VAR_1->name, VAR_2->name);
    else if ((!VAR_1->name && VAR_2->name) || (VAR_1->name && !VAR_2->name))
        return VAR_0;



    return VAR_0;
}
