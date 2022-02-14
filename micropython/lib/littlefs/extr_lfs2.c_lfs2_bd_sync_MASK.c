
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cfg; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_cache_t ;
struct TYPE_7__ {int (* sync ) (TYPE_2__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(lfs2_t *VAR_0,
        lfs2_cache_t *VAR_1, lfs2_cache_t *VAR_2, bool VAR_3) {
    FUNC_2(VAR_0, VAR_2);

    int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_4) {
        return VAR_4;
    }

    VAR_4 = VAR_0->cfg->sync(VAR_0->cfg);
    FUNC_0(VAR_4 <= 0);
    return VAR_4;
}
