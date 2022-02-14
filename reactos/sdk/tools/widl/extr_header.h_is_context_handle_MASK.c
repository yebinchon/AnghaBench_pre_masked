
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int attrs; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*) ;

__attribute__((used)) static inline int FUNC_5(const type_t *VAR_1)
{
    const type_t *VAR_2;
    for (VAR_2 = VAR_1;
         FUNC_1(VAR_2) || FUNC_3(VAR_2);
         VAR_2 = FUNC_3(VAR_2) ? FUNC_2(VAR_2) : FUNC_4(VAR_2))
        if (FUNC_0(VAR_2->attrs, VAR_0))
            return 1;
    return 0;
}
