
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int tag ;
struct lfs2_mattr {int tag; void* buffer; } ;
struct lfs2_diskoff {scalar_t__ off; int block; } ;
struct lfs2_attr {int type; void const* buffer; int size; } ;
typedef int lfs2_tag_t ;
struct TYPE_9__ {int tag; } ;
struct TYPE_7__ {TYPE_3__ gpending; int rcache; } ;
typedef TYPE_1__ lfs2_t ;
typedef scalar_t__ lfs2_off_t ;
struct TYPE_8__ {scalar_t__ off; int * pair; } ;
typedef TYPE_2__ lfs2_mdir_t ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int ,scalar_t__,int*,int) ;
 int FUNC_2 (void*,int,void const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(lfs2_t *VAR_6,
        const lfs2_mdir_t *VAR_7, lfs2_off_t VAR_8, lfs2_tag_t VAR_9,
        const struct lfs2_mattr *VAR_10, int VAR_11, bool VAR_12,
        lfs2_tag_t VAR_13, lfs2_tag_t VAR_14,
        uint16_t VAR_15, uint16_t VAR_16, int16_t VAR_17,
        int (*VAR_18)(void *VAR_19, lfs2_tag_t VAR_20, const void *VAR_21), void *VAR_22) {

    while (1) {
        lfs2_tag_t VAR_23;
        const void *VAR_24;
        struct lfs2_diskoff VAR_25;
        if (VAR_8+FUNC_5(VAR_9) < VAR_7->off) {
            VAR_8 += FUNC_5(VAR_9);
            int VAR_26 = FUNC_1(VAR_6,
                    ((void*)0), &VAR_6->rcache, sizeof(VAR_23),
                    VAR_7->pair[0], VAR_8, &VAR_23, sizeof(VAR_23));
            if (VAR_26) {
                return VAR_26;
            }

            VAR_23 = (FUNC_3(VAR_23) ^ VAR_9) | 0x80000000;
            VAR_25.block = VAR_7->pair[0];
            VAR_25.off = VAR_8+sizeof(lfs2_tag_t);
            VAR_24 = &VAR_25;
            VAR_9 = VAR_23;
        } else if (VAR_11 > 0) {
            VAR_23 = VAR_10[0].tag;
            VAR_24 = VAR_10[0].buffer;
            VAR_10 += 1;
            VAR_11 -= 1;
        } else if (!VAR_12 &&
                FUNC_4(&VAR_6->gpending, VAR_7->pair)) {


            VAR_23 = VAR_6->gpending.tag & FUNC_0(0x7ff, 0x3ff, 0);
            VAR_24 = ((void*)0);
            VAR_12 = 1;
        } else {
            return 0;
        }

        lfs2_tag_t VAR_27 = FUNC_0(0x7ff, 0, 0);
        if ((VAR_27 & VAR_13 & VAR_23) != (VAR_27 & VAR_13 & VAR_14)) {
            continue;
        }



        if (FUNC_6(VAR_13) != 0) {

            int VAR_28 = FUNC_9(VAR_6,
                    VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
                    0, 0, 0, 0, 0,
                    FUNC_2, &VAR_23);
            if (VAR_28 < 0) {
                return VAR_28;
            }

            if (VAR_28) {
                continue;
            }


            if (!(FUNC_6(VAR_23) >= VAR_15 && FUNC_6(VAR_23) < VAR_16)) {
                continue;
            }
        }


        if (FUNC_8(VAR_23) == VAR_2) {

        } else if (FUNC_8(VAR_23) == VAR_1) {
            uint16_t VAR_29 = FUNC_7(VAR_23);
            uint16_t VAR_30 = FUNC_6(VAR_23);
            int VAR_31 = FUNC_9(VAR_6,
                    VAR_24, 0, VAR_0, ((void*)0), 0, 1,
                    FUNC_0(0x600, 0x3ff, 0),
                    FUNC_0(VAR_4, 0, 0),
                    VAR_29, VAR_29+1, VAR_30-VAR_29+VAR_17,
                    VAR_18, VAR_22);
            if (VAR_31) {
                return VAR_31;
            }
        } else if (FUNC_8(VAR_23) == VAR_3) {
            for (unsigned VAR_32 = 0; VAR_32 < FUNC_7(VAR_23); VAR_32++) {
                const struct lfs2_attr *VAR_33 = VAR_24;
                int VAR_34 = VAR_18(VAR_22, FUNC_0(VAR_5 + VAR_33[VAR_32].type,
                        FUNC_6(VAR_23) + VAR_17, VAR_33[VAR_32].size), VAR_33[VAR_32].buffer);
                if (VAR_34) {
                    return VAR_34;
                }
            }
        } else {
            int VAR_35 = VAR_18(VAR_22, VAR_23 + FUNC_0(0, VAR_17, 0), VAR_24);
            if (VAR_35) {
                return VAR_35;
            }
        }
    }
}
