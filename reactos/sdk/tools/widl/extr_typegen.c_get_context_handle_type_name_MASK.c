
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char const* name; int attrs; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static const char *FUNC_6(const type_t *VAR_1)
{
    const type_t *VAR_2;
    for (VAR_2 = VAR_1;
         FUNC_2(VAR_2) || FUNC_4(VAR_2);
         VAR_2 = FUNC_4(VAR_2) ? FUNC_3(VAR_2) : FUNC_5(VAR_2))
        if (FUNC_1(VAR_2->attrs, VAR_0))
            return VAR_2->name;
    FUNC_0(0);
    return ((void*)0);
}
