
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int attrs; int name; int type; } ;
typedef TYPE_1__ var_t ;
typedef enum pass { ____Placeholder_pass } pass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ,int ,int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_4(const var_t *VAR_7, unsigned int *VAR_8, enum pass VAR_9)
{
    int VAR_10 = FUNC_1(VAR_7->attrs, VAR_1);
    int VAR_11 = FUNC_1(VAR_7->attrs, VAR_2);

    if (!VAR_10 && !VAR_11)
        VAR_10 = 1;

    *VAR_8 = 0;

    if ((VAR_9 == VAR_3 && VAR_10) || (VAR_9 == VAR_4 && VAR_11) ||
        VAR_9 == VAR_5)
    {
        if (FUNC_2(VAR_7, VAR_0))
        {
            *VAR_8 = 4;
            return 20;
        }

        if (!FUNC_3(VAR_7->attrs, VAR_7->type))
            return FUNC_0(VAR_7->type, VAR_7->name,
                                                 VAR_7->attrs, VAR_6, VAR_8);
    }
    return 0;
}
