
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_16__ {int block; } ;
struct TYPE_17__ {TYPE_12__ rcache; } ;
typedef TYPE_1__ lfs1_t ;
typedef scalar_t__ lfs1_ssize_t ;
typedef int lfs1_off_t ;
struct TYPE_18__ {int flags; int pos; int size; int block; int head; TYPE_12__ cache; } ;
typedef TYPE_2__ lfs1_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_12__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_12__*,TYPE_12__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_5(lfs1_t *VAR_5, lfs1_file_t *VAR_6) {
    if (VAR_6->flags & VAR_2) {

        FUNC_0(VAR_5, &VAR_6->cache);
        VAR_6->flags &= ~VAR_2;
    }

    if (VAR_6->flags & VAR_3) {
        lfs1_off_t VAR_7 = VAR_6->pos;


        lfs1_file_t VAR_8 = {
            .head = VAR_6->head,
            .size = VAR_6->size,
            .flags = VAR_4,
            .pos = VAR_6->pos,
            .cache = VAR_5->rcache,
        };
        FUNC_0(VAR_5, &VAR_5->rcache);

        while (VAR_6->pos < VAR_6->size) {


            uint8_t VAR_9;
            lfs1_ssize_t VAR_10 = FUNC_2(VAR_5, &VAR_8, &VAR_9, 1);
            if (VAR_10 < 0) {
                return VAR_10;
            }

            VAR_10 = FUNC_4(VAR_5, VAR_6, &VAR_9, 1);
            if (VAR_10 < 0) {
                return VAR_10;
            }


            if (VAR_5->rcache.block != 0xffffffff) {
                FUNC_0(VAR_5, &VAR_8.cache);
                FUNC_0(VAR_5, &VAR_5->rcache);
            }
        }


        while (1) {
            int VAR_11 = FUNC_1(VAR_5, &VAR_6->cache, &VAR_5->rcache);
            if (VAR_11) {
                if (VAR_11 == VAR_0) {
                    goto relocate;
                }
                return VAR_11;
            }

            break;
relocate:
            VAR_11 = FUNC_3(VAR_5, VAR_6);
            if (VAR_11) {
                return VAR_11;
            }
        }


        VAR_6->head = VAR_6->block;
        VAR_6->size = VAR_6->pos;
        VAR_6->flags &= ~VAR_3;
        VAR_6->flags |= VAR_1;

        VAR_6->pos = VAR_7;
    }

    return 0;
}
