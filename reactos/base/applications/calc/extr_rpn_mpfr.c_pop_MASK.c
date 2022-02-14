
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int calc_node_t ;
struct TYPE_5__ {int mf; } ;
struct TYPE_7__ {TYPE_1__ number; } ;
struct TYPE_6__ {TYPE_3__ node; void* next; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static calc_node_t *FUNC_3(void)
{
    void *VAR_2;

    if (VAR_0 == ((void*)0))
        return ((void*)0);


    FUNC_2(&VAR_1, &VAR_0->node);
    VAR_2 = VAR_0->next;


    FUNC_1(VAR_0->node.number.mf);
    FUNC_0(VAR_0);
    VAR_0 = VAR_2;

    return &VAR_1;
}
