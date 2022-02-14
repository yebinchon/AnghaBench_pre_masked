
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int (* exists ) (TYPE_2__*,char const*,int,char const*) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,int,char const*) ;

gboolean FUNC_3 (SeafBlockManager *VAR_1,
                                          const char *VAR_2,
                                          int VAR_3,
                                          const char *VAR_4)
{
    if (!VAR_2 || !FUNC_1(VAR_2) ||
        !VAR_4 || !FUNC_0(VAR_4))
        return VAR_0;

    return VAR_1->backend->exists (VAR_1->backend, VAR_2, VAR_3, VAR_4);
}
