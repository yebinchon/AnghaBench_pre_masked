
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* attribs; scalar_t__ name; int label; } ;
typedef TYPE_1__ m_obj_settings_t ;
struct TYPE_9__ {scalar_t__ len; } ;
typedef TYPE_2__ bstr ;


 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(m_obj_settings_t *VAR_0, m_obj_settings_t *VAR_1)
{
    bstr VAR_2 = FUNC_0(VAR_0->label), VAR_3 = FUNC_0(VAR_1->label);
    if (VAR_2.len || VAR_3.len)
        return FUNC_1(VAR_2, VAR_3);
    if (FUNC_2(VAR_0->name, VAR_1->name) != 0)
        return 0;

    int VAR_4 = 0;
    while (VAR_0->attribs && VAR_0->attribs[VAR_4])
        VAR_4++;
    int VAR_5 = 0;
    while (VAR_1->attribs && VAR_1->attribs[VAR_5])
        VAR_5++;
    if (VAR_4 != VAR_5)
        return 0;
    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if (FUNC_2(VAR_0->attribs[VAR_6], VAR_1->attribs[VAR_6]) != 0)
            return 0;
    }
    return 1;
}
