
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ name; } ;
typedef TYPE_1__ m_obj_settings_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(m_obj_settings_t *VAR_0,
                                        m_obj_settings_t *VAR_1)
{
    for (int VAR_2 = 0; VAR_0 && VAR_0[VAR_2].name; VAR_2++) {
        if (FUNC_0(&VAR_0[VAR_2], VAR_1))
            return VAR_2;
    }
    return -1;
}
