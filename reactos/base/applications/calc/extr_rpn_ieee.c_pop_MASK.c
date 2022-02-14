
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int calc_node_t ;
struct TYPE_3__ {void* next; int node; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static calc_node_t *FUNC_1(void)
{
    void *VAR_2;

    if (VAR_0 == ((void*)0))
        return ((void*)0);


    VAR_1 = VAR_0->node;
    VAR_2 = VAR_0->next;


    FUNC_0(VAR_0);
    VAR_0 = VAR_2;

    return &VAR_1;
}
