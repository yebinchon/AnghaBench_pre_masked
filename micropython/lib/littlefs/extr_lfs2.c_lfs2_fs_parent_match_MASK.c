
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lfs2_fs_parent_match {int pair; TYPE_2__* lfs2; } ;
struct lfs2_diskoff {int off; int block; } ;
typedef int lfs2_tag_t ;
struct TYPE_5__ {TYPE_1__* cfg; int rcache; int pcache; } ;
typedef TYPE_2__ lfs2_t ;
typedef int lfs2_block_t ;
typedef int child ;
struct TYPE_4__ {int block_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int ,int ,int ,int **,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_2,
        lfs2_tag_t VAR_3, const void *VAR_4) {
    struct lfs2_fs_parent_match *VAR_5 = VAR_2;
    lfs2_t *VAR_6 = VAR_5->lfs2;
    const struct lfs2_diskoff *VAR_7 = VAR_4;
    (void)VAR_3;

    lfs2_block_t VAR_8[2];
    int VAR_9 = FUNC_0(VAR_6,
            &VAR_6->pcache, &VAR_6->rcache, VAR_6->cfg->block_size,
            VAR_7->block, VAR_7->off, &VAR_8, sizeof(VAR_8));
    if (VAR_9) {
        return VAR_9;
    }

    FUNC_2(VAR_8);
    return (FUNC_1(VAR_8, VAR_5->pair) == 0) ? VAR_0 : VAR_1;
}
