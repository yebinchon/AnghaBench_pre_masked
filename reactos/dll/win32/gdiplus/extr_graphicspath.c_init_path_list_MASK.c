
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* Y; void* X; } ;
struct TYPE_6__ {int * next; int type; TYPE_1__ pt; } ;
typedef TYPE_2__ path_list_node_t ;
typedef void* REAL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static BOOL FUNC_1(path_list_node_t **VAR_3, REAL VAR_4, REAL VAR_5)
{
    *VAR_3 = FUNC_0(sizeof(path_list_node_t));
    if(!*VAR_3)
        return VAR_0;

    (*VAR_3)->pt.X = VAR_4;
    (*VAR_3)->pt.Y = VAR_5;
    (*VAR_3)->type = VAR_1;
    (*VAR_3)->next = ((void*)0);

    return VAR_2;
}
