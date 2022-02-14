
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
struct lfs2_gstate {int dummy; } ;
typedef int lfs2_t ;
typedef scalar_t__ lfs2_stag_t ;
typedef int lfs2_mdir_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int const*,int ,int ,struct lfs2_gstate*) ;
 int FUNC_2 (struct lfs2_gstate*) ;
 int FUNC_3 (struct lfs2_gstate*,struct lfs2_gstate*) ;

__attribute__((used)) static int FUNC_4(lfs2_t *VAR_2, const lfs2_mdir_t *VAR_3,
        struct lfs2_gstate *VAR_4) {
    struct lfs2_gstate VAR_5;
    lfs2_stag_t VAR_6 = FUNC_1(VAR_2, VAR_3, FUNC_0(0x7ff, 0, 0),
            FUNC_0(VAR_1, 0, sizeof(VAR_5)), &VAR_5);
    if (VAR_6 < 0 && VAR_6 != VAR_0) {
        return VAR_6;
    }

    if (VAR_6 != VAR_0) {

        FUNC_2(&VAR_5);
        FUNC_3(VAR_4, &VAR_5);
    }

    return 0;
}
