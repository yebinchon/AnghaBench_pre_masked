
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_obj_settings {scalar_t__ name; scalar_t__ enabled; scalar_t__* attribs; scalar_t__ label; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct m_obj_settings *VAR_0, struct m_obj_settings *VAR_1)
{
    if (VAR_0 == VAR_1 || !VAR_0 || !VAR_1)
        return VAR_0 == VAR_1;

    if (!VAR_0->name || !VAR_1->name)
        return VAR_0->name == VAR_1->name;

    if (!!VAR_0->label != !!VAR_1->label || (VAR_0->label && FUNC_0(VAR_0->label, VAR_1->label) != 0))
        return 0;

    if (VAR_0->enabled != VAR_1->enabled)
        return 0;

    if (!VAR_0->attribs || !VAR_0->attribs[0])
        return !VAR_1->attribs || !VAR_1->attribs[0];

    for (int VAR_2 = 0; VAR_0->attribs[VAR_2] || VAR_1->attribs[VAR_2]; VAR_2++) {
        if (!VAR_0->attribs[VAR_2] || !VAR_1->attribs[VAR_2])
            return 0;
        if (FUNC_0(VAR_0->attribs[VAR_2], VAR_1->attribs[VAR_2]) != 0)
            return 0;
    }

    return 1;
}
