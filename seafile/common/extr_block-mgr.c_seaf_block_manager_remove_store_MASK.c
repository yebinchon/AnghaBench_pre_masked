
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* remove_store ) (TYPE_2__*,char const*) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;


 int FUNC_0 (TYPE_2__*,char const*) ;

int
FUNC_1 (SeafBlockManager *VAR_0,
                                 const char *VAR_1)
{
    return VAR_0->backend->remove_store (VAR_0->backend, VAR_1);
}
