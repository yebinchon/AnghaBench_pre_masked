
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ path_list_node_t ;
typedef int INT ;



__attribute__((used)) static INT FUNC_0(path_list_node_t *VAR_0)
{
    INT VAR_1 = 1;

    while((VAR_0 = VAR_0->next))
        ++VAR_1;

    return VAR_1;
}
