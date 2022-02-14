
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_8__ {TYPE_3__* elem; } ;
typedef TYPE_4__ fire_readystatechange_task_t ;
struct TYPE_6__ {int nsnode; int doc; } ;
struct TYPE_5__ {TYPE_2__ node; } ;
struct TYPE_7__ {TYPE_1__ element; scalar_t__ pending_readystatechange_event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(task_t *VAR_2)
{
    fire_readystatechange_task_t *VAR_3 = (fire_readystatechange_task_t*)VAR_2;

    if(!VAR_3->elem->pending_readystatechange_event)
        return;

    VAR_3->elem->pending_readystatechange_event = VAR_1;
    FUNC_0(VAR_3->elem->element.node.doc, VAR_0, VAR_1, VAR_3->elem->element.node.nsnode, ((void*)0), ((void*)0));
}
