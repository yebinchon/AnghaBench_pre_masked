
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* Y; void* X; } ;
struct TYPE_7__ {struct TYPE_7__* next; int type; TYPE_1__ pt; } ;
typedef TYPE_2__ path_list_node_t ;
typedef void* REAL ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static path_list_node_t* FUNC_1(path_list_node_t *VAR_0, REAL VAR_1, REAL VAR_2, BOOL VAR_3)
{
    path_list_node_t *VAR_4;

    VAR_4 = FUNC_0(sizeof(path_list_node_t));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->pt.X = VAR_1;
    VAR_4->pt.Y = VAR_2;
    VAR_4->type = VAR_3;
    VAR_4->next = VAR_0->next;
    VAR_0->next = VAR_4;

    return VAR_4;
}
