
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* seaf; int index_dir; } ;
struct TYPE_6__ {int seaf_dir; } ;
typedef TYPE_2__ SeafRepoManager ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4 (SeafRepoManager *VAR_0)
{
    if (FUNC_0 (VAR_0->index_dir) < 0) {
        FUNC_3 ("Index dir %s does not exist and is unable to create\n",
                   VAR_0->index_dir);
        return -1;
    }


    FUNC_2 (VAR_0, VAR_0->seaf->seaf_dir);


    FUNC_1 (VAR_0);

    return 0;
}
