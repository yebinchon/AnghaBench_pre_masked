
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_cmd {int nargs; } ;
struct TYPE_13__ {int num; TYPE_6__* values; } ;
typedef TYPE_3__ mpv_node_list ;
struct TYPE_11__ {TYPE_3__* list; } ;
struct TYPE_14__ {scalar_t__ format; TYPE_1__ u; } ;
typedef TYPE_4__ mpv_node ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_5__ bstr ;
struct TYPE_12__ {int string; } ;
struct TYPE_16__ {scalar_t__ format; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mp_cmd*,TYPE_5__) ;
 int FUNC_1 (int) ;
 TYPE_5__ FUNC_2 (int ) ;
 int FUNC_3 (struct mp_log*,struct mp_cmd*,TYPE_5__) ;
 int FUNC_4 (struct mp_log*,struct mp_cmd*,int ,TYPE_6__*) ;

__attribute__((used)) static bool FUNC_5(struct mp_log *VAR_2, struct mp_cmd *VAR_3, mpv_node *VAR_4)
{
    FUNC_1(VAR_4->format == VAR_0);
    mpv_node_list *VAR_5 = VAR_4->u.list;
    int VAR_6 = 0;

    while (VAR_6 < VAR_5->num) {
        if (VAR_5->values[VAR_6].format != VAR_1)
            break;
        if (!FUNC_0(VAR_3, FUNC_2(VAR_5->values[VAR_6].u.string)))
            break;
        VAR_6++;
    }

    bstr VAR_7 = {0};
    if (VAR_6 < VAR_5->num && VAR_5->values[VAR_6].format == VAR_1)
        VAR_7 = FUNC_2(VAR_5->values[VAR_6++].u.string);
    if (!FUNC_3(VAR_2, VAR_3, VAR_7))
        return 0;

    int VAR_8 = VAR_6;
    for (int VAR_9 = 0; VAR_9 < VAR_5->num - VAR_8; VAR_9++) {
        if (!FUNC_4(VAR_2, VAR_3, VAR_3->nargs, &VAR_5->values[VAR_6++]))
            return 0;
    }

    return 1;
}
