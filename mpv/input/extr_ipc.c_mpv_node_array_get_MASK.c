
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* list; } ;
struct TYPE_8__ {scalar_t__ format; TYPE_2__ u; } ;
typedef TYPE_3__ mpv_node ;
struct TYPE_6__ {int num; TYPE_3__* values; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static mpv_node *FUNC_0(mpv_node *VAR_1, int VAR_2)
{
    if (VAR_1->format != VAR_0)
        return ((void*)0);

    if (VAR_1->u.list->num < (VAR_2 + 1))
        return ((void*)0);

    return &VAR_1->u.list->values[VAR_2];
}
