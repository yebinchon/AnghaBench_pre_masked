
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int custom_ext_parse_cb_wrap ;
struct TYPE_7__ {int meths_count; TYPE_2__* meths; } ;
typedef TYPE_1__ custom_ext_methods ;
struct TYPE_8__ {scalar_t__ add_cb; struct TYPE_8__* parse_arg; struct TYPE_8__* add_arg; } ;
typedef TYPE_2__ custom_ext_method ;
typedef int custom_ext_add_cb_wrap ;


 void* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(custom_ext_methods *VAR_1, const custom_ext_methods *VAR_2)
{
    size_t VAR_3;
    int VAR_4 = 0;

    if (VAR_2->meths_count > 0) {
        VAR_1->meths =
            FUNC_0(VAR_2->meths,
                           sizeof(*VAR_2->meths) * VAR_2->meths_count);
        if (VAR_1->meths == ((void*)0))
            return 0;
        VAR_1->meths_count = VAR_2->meths_count;

        for (VAR_3 = 0; VAR_3 < VAR_2->meths_count; VAR_3++) {
            custom_ext_method *VAR_5 = VAR_2->meths + VAR_3;
            custom_ext_method *VAR_6 = VAR_1->meths + VAR_3;

            if (VAR_5->add_cb != VAR_0)
                continue;






            if (VAR_4) {
                VAR_6->add_arg = ((void*)0);
                VAR_6->parse_arg = ((void*)0);
                continue;
            }

            VAR_6->add_arg = FUNC_0(VAR_5->add_arg,
                                              sizeof(custom_ext_add_cb_wrap));
            VAR_6->parse_arg = FUNC_0(VAR_5->parse_arg,
                                            sizeof(custom_ext_parse_cb_wrap));

            if (VAR_6->add_arg == ((void*)0) || VAR_6->parse_arg == ((void*)0))
                VAR_4 = 1;
        }
    }

    if (VAR_4) {
        FUNC_1(VAR_1);
        return 0;
    }

    return 1;
}
