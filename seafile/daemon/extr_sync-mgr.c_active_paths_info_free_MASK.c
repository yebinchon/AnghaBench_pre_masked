
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int synced_tree; int syncing_tree; int paths; } ;
typedef TYPE_1__ ActivePathsInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (ActivePathsInfo *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_1 (VAR_0->paths);
    FUNC_2 (VAR_0->syncing_tree);
    FUNC_2 (VAR_0->synced_tree);
    FUNC_0 (VAR_0);
}
