
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int head_commit_map_lock; int head_commit_map; } ;
typedef TYPE_1__ HttpServerState ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (HttpServerState *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_1 (VAR_0->head_commit_map);
    FUNC_2 (&VAR_0->head_commit_map_lock);
    FUNC_0 (VAR_0);
}
