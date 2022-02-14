
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* token; struct TYPE_4__* email; struct TYPE_4__* relay_id; struct TYPE_4__* worktree; struct TYPE_4__* category; struct TYPE_4__* desc; struct TYPE_4__* name; scalar_t__ head; } ;
typedef TYPE_1__ SeafRepo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2 (SeafRepo *VAR_0)
{
    if (VAR_0->head) FUNC_1 (VAR_0->head);

    FUNC_0 (VAR_0->name);
    FUNC_0 (VAR_0->desc);
    FUNC_0 (VAR_0->category);
    FUNC_0 (VAR_0->worktree);
    FUNC_0 (VAR_0->relay_id);
    FUNC_0 (VAR_0->email);
    FUNC_0 (VAR_0->token);
    FUNC_0 (VAR_0);
}
