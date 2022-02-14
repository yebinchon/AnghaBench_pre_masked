
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* type; } ;
typedef TYPE_1__ var_t ;
struct TYPE_14__ {int attrs; } ;
typedef TYPE_2__ type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_2 (TYPE_2__ const*) ;
 scalar_t__ FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_6 (TYPE_2__ const*) ;

const type_t* FUNC_7(const var_t* VAR_3)
{
    const type_t *VAR_4;
    for (VAR_4 = VAR_3->type;
         FUNC_1(VAR_4) || FUNC_5(VAR_4);
         VAR_4 = FUNC_5(VAR_4) ? FUNC_2(VAR_4) : FUNC_6(VAR_4))
        if ((FUNC_4(VAR_4) != VAR_1 || FUNC_3(VAR_4) != VAR_2) &&
            FUNC_0(VAR_4->attrs, VAR_0))
            return VAR_4;
    return ((void*)0);
}
