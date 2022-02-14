
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* remove_block ) (TYPE_2__*,char const*,int,char const*) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,int,char const*) ;

int
FUNC_3 (SeafBlockManager *VAR_0,
                                 const char *VAR_1,
                                 int VAR_2,
                                 const char *VAR_3)
{
    if (!VAR_1 || !FUNC_1(VAR_1) ||
        !VAR_3 || !FUNC_0(VAR_3))
        return -1;

    return VAR_0->backend->remove_block (VAR_0->backend, VAR_1, VAR_2, VAR_3);
}
