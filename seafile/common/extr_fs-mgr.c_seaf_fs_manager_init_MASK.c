
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ev_mgr; } ;
struct TYPE_4__ {int obj_store; } ;
typedef TYPE_1__ SeafFSManager ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*) ;

int
FUNC_2 (SeafFSManager *VAR_3)
{
    if (FUNC_0 (VAR_3->obj_store, VAR_1, VAR_2->ev_mgr) < 0) {
        FUNC_1 ("[fs mgr] Failed to init fs object store.\n");
        return -1;
    }


    return 0;
}
