
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpv_node_list {int num; TYPE_2__* values; } ;
struct TYPE_6__ {struct mpv_node_list* list; } ;
struct mpv_node {scalar_t__ format; TYPE_3__ u; } ;
typedef int m_option_t ;
struct TYPE_4__ {int string; } ;
struct TYPE_5__ {scalar_t__ format; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const m_option_t *VAR_4, void *VAR_5, struct mpv_node *VAR_6)
{
    int VAR_7 = 0;
    if (VAR_6->format != VAR_0)
        return VAR_3;
    struct mpv_node_list *VAR_8 = VAR_6->u.list;
    for (int VAR_9 = 0; VAR_9 < VAR_8->num; VAR_9++) {
        if (VAR_8->values[VAR_9].format != VAR_1)
            return VAR_2;
        if (FUNC_0(VAR_4, &VAR_7, FUNC_1(VAR_8->values[VAR_9].u.string)) < 0)
            return VAR_2;
    }
    *(int *)VAR_5 = VAR_7;
    return 0;
}
