
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ lfs1_t ;
typedef int lfs1_ssize_t ;
typedef scalar_t__ lfs1_size_t ;
struct TYPE_12__ {int flags; scalar_t__ pos; scalar_t__ size; scalar_t__ off; int block; int cache; int head; } ;
typedef TYPE_3__ lfs1_file_t ;
struct TYPE_10__ {scalar_t__ block_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int ,scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

lfs1_ssize_t FUNC_4(lfs1_t *VAR_4, lfs1_file_t *VAR_5,
        void *VAR_6, lfs1_size_t VAR_7) {
    uint8_t *VAR_8 = VAR_6;
    lfs1_size_t VAR_9 = VAR_7;

    if ((VAR_5->flags & 3) == VAR_3) {
        return VAR_0;
    }

    if (VAR_5->flags & VAR_2) {

        int VAR_10 = FUNC_2(VAR_4, VAR_5);
        if (VAR_10) {
            return VAR_10;
        }
    }

    if (VAR_5->pos >= VAR_5->size) {

        return 0;
    }

    VAR_7 = FUNC_3(VAR_7, VAR_5->size - VAR_5->pos);
    VAR_9 = VAR_7;

    while (VAR_9 > 0) {

        if (!(VAR_5->flags & VAR_1) ||
                VAR_5->off == VAR_4->cfg->block_size) {
            int VAR_11 = FUNC_1(VAR_4, &VAR_5->cache, ((void*)0),
                    VAR_5->head, VAR_5->size,
                    VAR_5->pos, &VAR_5->block, &VAR_5->off);
            if (VAR_11) {
                return VAR_11;
            }

            VAR_5->flags |= VAR_1;
        }


        lfs1_size_t VAR_12 = FUNC_3(VAR_9, VAR_4->cfg->block_size - VAR_5->off);
        int VAR_13 = FUNC_0(VAR_4, &VAR_5->cache, ((void*)0),
                VAR_5->block, VAR_5->off, VAR_8, VAR_12);
        if (VAR_13) {
            return VAR_13;
        }

        VAR_5->pos += VAR_12;
        VAR_5->off += VAR_12;
        VAR_8 += VAR_12;
        VAR_9 -= VAR_12;
    }

    return VAR_7;
}
