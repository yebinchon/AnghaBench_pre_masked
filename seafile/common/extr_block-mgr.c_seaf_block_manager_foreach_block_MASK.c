
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* foreach_block ) (TYPE_2__*,char const*,int,int ,void*) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;
typedef int SeafBlockFunc ;


 int FUNC_0 (TYPE_2__*,char const*,int,int ,void*) ;

int
FUNC_1 (SeafBlockManager *VAR_0,
                                  const char *VAR_1,
                                  int VAR_2,
                                  SeafBlockFunc VAR_3,
                                  void *VAR_4)
{
    return VAR_0->backend->foreach_block (VAR_0->backend,
                                        VAR_1, VAR_2,
                                        VAR_3, VAR_4);
}
