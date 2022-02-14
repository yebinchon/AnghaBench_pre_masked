
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tag ;
typedef int ntag ;
typedef int lfs2_tag_t ;
struct TYPE_9__ {int tag; } ;
struct TYPE_7__ {int rcache; TYPE_3__ gstate; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_stag_t ;
typedef int lfs2_size_t ;
typedef scalar_t__ lfs2_off_t ;
struct TYPE_8__ {scalar_t__ off; int etag; int * pair; } ;
typedef TYPE_2__ lfs2_mdir_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int ,scalar_t__,void*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static lfs2_stag_t FUNC_12(lfs2_t *VAR_3, const lfs2_mdir_t *VAR_4,
        lfs2_tag_t VAR_5, lfs2_tag_t VAR_6,
        lfs2_off_t VAR_7, void *VAR_8, lfs2_size_t VAR_9) {
    lfs2_off_t VAR_10 = VAR_4->off;
    lfs2_tag_t VAR_11 = VAR_4->etag;
    lfs2_stag_t VAR_12 = 0;

    if (FUNC_3(&VAR_3->gstate, VAR_4->pair) &&
            FUNC_6(VAR_6) <= FUNC_6(VAR_3->gstate.tag)) {

        VAR_12 -= FUNC_0(0, 1, 0);
    }


    while (VAR_10 >= sizeof(lfs2_tag_t) + FUNC_5(VAR_11)) {
        VAR_10 -= FUNC_5(VAR_11);
        lfs2_tag_t VAR_13 = VAR_11;
        int VAR_14 = FUNC_1(VAR_3,
                ((void*)0), &VAR_3->rcache, sizeof(VAR_11),
                VAR_4->pair[0], VAR_10, &VAR_11, sizeof(VAR_11));
        if (VAR_14) {
            return VAR_14;
        }

        VAR_11 = (FUNC_2(VAR_11) ^ VAR_13) & 0x7fffffff;

        if (FUNC_6(VAR_5) != 0 &&
                FUNC_10(VAR_13) == VAR_2 &&
                FUNC_6(VAR_13) <= FUNC_6(VAR_6 - VAR_12)) {
            if (VAR_13 == (FUNC_0(VAR_1, 0, 0) |
                    (FUNC_0(0, 0x3ff, 0) & (VAR_6 - VAR_12)))) {

                return VAR_0;
            }


            VAR_12 += FUNC_0(0, FUNC_9(VAR_13), 0);
        }

        if ((VAR_5 & VAR_13) == (VAR_5 & (VAR_6 - VAR_12))) {
            if (FUNC_7(VAR_13)) {
                return VAR_0;
            }

            lfs2_size_t VAR_15 = FUNC_4(FUNC_8(VAR_13), VAR_9);
            VAR_14 = FUNC_1(VAR_3,
                    ((void*)0), &VAR_3->rcache, VAR_15,
                    VAR_4->pair[0], VAR_10+sizeof(VAR_13)+VAR_7, VAR_8, VAR_15);
            if (VAR_14) {
                return VAR_14;
            }

            FUNC_11((uint8_t*)VAR_8 + VAR_15, 0, VAR_9 - VAR_15);

            return VAR_13 + VAR_12;
        }
    }

    return VAR_0;
}
