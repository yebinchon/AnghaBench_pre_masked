
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lfs2_diskoff {int off; int block; } ;
struct lfs2_dir_find_match {scalar_t__ size; int name; TYPE_1__* lfs2; } ;
typedef int lfs2_tag_t ;
struct TYPE_3__ {int rcache; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_3,
        lfs2_tag_t VAR_4, const void *VAR_5) {
    struct lfs2_dir_find_match *VAR_6 = VAR_3;
    lfs2_t *VAR_7 = VAR_6->lfs2;
    const struct lfs2_diskoff *VAR_8 = VAR_5;


    lfs2_size_t VAR_9 = FUNC_1(VAR_6->size, FUNC_2(VAR_4));
    int VAR_10 = FUNC_0(VAR_7,
            ((void*)0), &VAR_7->rcache, VAR_9,
            VAR_8->block, VAR_8->off, VAR_6->name, VAR_9);
    if (VAR_10 != VAR_0) {
        return VAR_10;
    }


    if (VAR_6->size != FUNC_2(VAR_4)) {
        return (VAR_6->size < FUNC_2(VAR_4)) ? VAR_2 : VAR_1;
    }


    return VAR_0;
}
