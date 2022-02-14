
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct lfs2_info {int size; scalar_t__ type; struct lfs2_ctz* name; } ;
struct lfs2_ctz {int size; } ;
struct TYPE_4__ {int name_max; } ;
typedef TYPE_1__ lfs2_t ;
typedef scalar_t__ lfs2_stag_t ;
typedef int lfs2_mdir_t ;
typedef int ctz ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lfs2_ctz*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ,int ,struct lfs2_ctz*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct lfs2_ctz*,char*) ;

__attribute__((used)) static int FUNC_6(lfs2_t *VAR_5, lfs2_mdir_t *VAR_6,
        uint16_t VAR_7, struct lfs2_info *VAR_8) {
    if (VAR_7 == 0x3ff) {

        FUNC_5(VAR_8->name, "/");
        VAR_8->type = VAR_1;
        return 0;
    }

    lfs2_stag_t VAR_9 = FUNC_2(VAR_5, VAR_6, FUNC_0(0x780, 0x3ff, 0),
            FUNC_0(VAR_3, VAR_7, VAR_5->name_max+1), VAR_8->name);
    if (VAR_9 < 0) {
        return (int)VAR_9;
    }

    VAR_8->type = FUNC_4(VAR_9);

    struct lfs2_ctz VAR_10;
    VAR_9 = FUNC_2(VAR_5, VAR_6, FUNC_0(0x700, 0x3ff, 0),
            FUNC_0(VAR_4, VAR_7, sizeof(VAR_10)), &VAR_10);
    if (VAR_9 < 0) {
        return (int)VAR_9;
    }
    FUNC_1(&VAR_10);

    if (FUNC_4(VAR_9) == VAR_0) {
        VAR_8->size = VAR_10.size;
    } else if (FUNC_4(VAR_9) == VAR_2) {
        VAR_8->size = FUNC_3(VAR_9);
    }

    return 0;
}
