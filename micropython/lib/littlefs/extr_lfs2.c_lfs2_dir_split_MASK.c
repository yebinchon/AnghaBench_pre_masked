
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct lfs2_mattr {int dummy; } ;
struct TYPE_11__ {int * root; } ;
typedef TYPE_1__ lfs2_t ;
struct TYPE_12__ {int split; int * pair; int * tail; } ;
typedef TYPE_2__ lfs2_mdir_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,struct lfs2_mattr const*,int,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(lfs2_t *VAR_0,
        lfs2_mdir_t *VAR_1, const struct lfs2_mattr *VAR_2, int VAR_3,
        lfs2_mdir_t *VAR_4, uint16_t VAR_5, uint16_t VAR_6) {

    lfs2_mdir_t VAR_7;
    int VAR_8 = FUNC_0(VAR_0, &VAR_7);
    if (VAR_8) {
        return VAR_8;
    }

    VAR_7.split = VAR_1->split;
    VAR_7.tail[0] = VAR_1->tail[0];
    VAR_7.tail[1] = VAR_1->tail[1];

    VAR_8 = FUNC_1(VAR_0, &VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_8) {
        return VAR_8;
    }

    VAR_1->tail[0] = VAR_7.pair[0];
    VAR_1->tail[1] = VAR_7.pair[1];
    VAR_1->split = 1;


    if (FUNC_2(VAR_1->pair, VAR_0->root) == 0 && VAR_5 == 0) {
        VAR_0->root[0] = VAR_7.pair[0];
        VAR_0->root[1] = VAR_7.pair[1];
    }

    return 0;
}
