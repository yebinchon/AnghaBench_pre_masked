
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cfg; int pcache; int rcache; } ;
typedef TYPE_1__ lfs1_t ;
struct TYPE_7__ {int (* sync ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(lfs1_t *VAR_0) {
    FUNC_0(VAR_0, &VAR_0->rcache);

    int VAR_1 = FUNC_1(VAR_0, &VAR_0->pcache, ((void*)0));
    if (VAR_1) {
        return VAR_1;
    }

    return VAR_0->cfg->sync(VAR_0->cfg);
}
