
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * (* open_block ) (TYPE_2__*,char const*,int,char const*,int) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;
typedef int BlockHandle ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (TYPE_2__*,char const*,int,char const*,int) ;

BlockHandle *
FUNC_3 (SeafBlockManager *VAR_0,
                               const char *VAR_1,
                               int VAR_2,
                               const char *VAR_3,
                               int VAR_4)
{
    if (!VAR_1 || !FUNC_1(VAR_1) ||
        !VAR_3 || !FUNC_0(VAR_3))
        return ((void*)0);

    return VAR_0->backend->open_block (VAR_0->backend,
                                     VAR_1, VAR_2,
                                     VAR_3, VAR_4);
}
