
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int moving; int * root; } ;
typedef TYPE_2__ lfs1_t ;
struct TYPE_20__ {int * dir; } ;
struct TYPE_16__ {int type; int elen; size_t nlen; TYPE_6__ u; scalar_t__ alen; } ;
struct TYPE_18__ {TYPE_1__ d; scalar_t__ off; } ;
typedef TYPE_3__ lfs1_entry_t ;
struct TYPE_19__ {int * pair; } ;
typedef TYPE_4__ lfs1_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,char const*,size_t) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 size_t FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(lfs1_t *VAR_4, lfs1_dir_t *VAR_5,
        lfs1_entry_t *VAR_6, const char **VAR_7) {
    const char *VAR_8 = *VAR_7;
    size_t VAR_9;
    VAR_6->d.type = VAR_2;
    VAR_6->d.elen = sizeof(VAR_6->d) - 4;
    VAR_6->d.alen = 0;
    VAR_6->d.nlen = 0;
    VAR_6->d.u.dir[0] = VAR_4->root[0];
    VAR_6->d.u.dir[1] = VAR_4->root[1];

    while (1) {
nextname:

        VAR_8 += FUNC_6(VAR_8, "/");
        VAR_9 = FUNC_5(VAR_8, "/");


        if ((VAR_9 == 1 && FUNC_4(VAR_8, ".", 1) == 0) ||
            (VAR_9 == 2 && FUNC_4(VAR_8, "..", 2) == 0)) {
            VAR_8 += VAR_9;
            goto nextname;
        }


        const char *VAR_10 = VAR_8 + VAR_9;
        size_t VAR_11;
        int VAR_12 = 1;
        while (1) {
            VAR_10 += FUNC_6(VAR_10, "/");
            VAR_11 = FUNC_5(VAR_10, "/");
            if (VAR_11 == 0) {
                break;
            }

            if (VAR_11 == 2 && FUNC_4(VAR_10, "..", 2) == 0) {
                VAR_12 -= 1;
                if (VAR_12 == 0) {
                    VAR_8 = VAR_10 + VAR_11;
                    goto nextname;
                }
            } else {
                VAR_12 += 1;
            }

            VAR_10 += VAR_11;
        }


        if (VAR_8[0] == '\0') {
            return 0;
        }


        *VAR_7 = VAR_8;


        if (VAR_6->d.type != VAR_2) {
            return VAR_1;
        }

        int VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_6->d.u.dir);
        if (VAR_13) {
            return VAR_13;
        }


        while (1) {
            VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_6);
            if (VAR_13) {
                return VAR_13;
            }

            if (((0x7f & VAR_6->d.type) != VAR_3 &&
                 (0x7f & VAR_6->d.type) != VAR_2) ||
                VAR_6->d.nlen != VAR_9) {
                continue;
            }

            int VAR_14 = FUNC_0(VAR_4, VAR_5->pair[0],
                    VAR_6->off + 4+VAR_6->d.elen+VAR_6->d.alen,
                    VAR_8, VAR_9);
            if (VAR_14 < 0) {
                return VAR_14;
            }


            if (VAR_14) {
                break;
            }
        }


        if (!VAR_4->moving && VAR_6->d.type & 0x80) {
            int VAR_15 = FUNC_3(VAR_4, &VAR_6->d.u);
            if (VAR_15 < 0 || VAR_15) {
                return (VAR_15 < 0) ? VAR_15 : VAR_0;
            }

            VAR_6->d.type &= ~0x80;
        }


        VAR_8 += VAR_9;
    }
}
