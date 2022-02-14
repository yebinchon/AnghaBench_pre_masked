
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


struct lfs1_file_config {void* buffer; } ;
struct TYPE_27__ {TYPE_6__* files; TYPE_4__* cfg; int deorphaned; } ;
typedef TYPE_5__ lfs1_t ;
struct TYPE_22__ {int block; void* buffer; } ;
struct TYPE_28__ {int head; scalar_t__ size; int flags; struct TYPE_28__* next; TYPE_19__ cache; struct lfs1_file_config const* cfg; scalar_t__ pos; int poff; int * pair; } ;
typedef TYPE_6__ lfs1_file_t ;
struct TYPE_23__ {int head; scalar_t__ size; } ;
struct TYPE_24__ {TYPE_1__ file; } ;
struct TYPE_25__ {scalar_t__ type; int elen; TYPE_2__ u; int nlen; scalar_t__ alen; } ;
struct TYPE_29__ {TYPE_3__ d; int off; } ;
typedef TYPE_7__ lfs1_entry_t ;
struct TYPE_30__ {int * pair; } ;
typedef TYPE_8__ lfs1_dir_t ;
struct TYPE_26__ {int prog_size; int read_size; void* file_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_5__*,TYPE_19__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_19__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_8__*,TYPE_7__*,char const*) ;
 int FUNC_4 (TYPE_5__*,TYPE_8__*,TYPE_7__*,char const**) ;
 void* FUNC_5 (int ) ;
 int * FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

int FUNC_8(lfs1_t *VAR_11, lfs1_file_t *VAR_12,
        const char *VAR_13, int VAR_14,
        const struct lfs1_file_config *VAR_15) {

    if ((VAR_14 & 3) != VAR_7 && !VAR_11->deorphaned) {
        int VAR_16 = FUNC_2(VAR_11);
        if (VAR_16) {
            return VAR_16;
        }
    }


    lfs1_dir_t VAR_17;
    lfs1_entry_t VAR_18;
    int VAR_19 = FUNC_4(VAR_11, &VAR_17, &VAR_18, &VAR_13);
    if (VAR_19 && (VAR_19 != VAR_2 || FUNC_6(VAR_13, '/') != ((void*)0))) {
        return VAR_19;
    }

    if (VAR_19 == VAR_2) {
        if (!(VAR_14 & VAR_5)) {
            return VAR_2;
        }


        VAR_18.d.type = VAR_10;
        VAR_18.d.elen = sizeof(VAR_18.d) - 4;
        VAR_18.d.alen = 0;
        VAR_18.d.nlen = FUNC_7(VAR_13);
        VAR_18.d.u.file.head = 0xffffffff;
        VAR_18.d.u.file.size = 0;
        VAR_19 = FUNC_3(VAR_11, &VAR_17, &VAR_18, VAR_13);
        if (VAR_19) {
            return VAR_19;
        }
    } else if (VAR_18.d.type == VAR_9) {
        return VAR_1;
    } else if (VAR_14 & VAR_6) {
        return VAR_0;
    }


    VAR_12->cfg = VAR_15;
    VAR_12->pair[0] = VAR_17.pair[0];
    VAR_12->pair[1] = VAR_17.pair[1];
    VAR_12->poff = VAR_18.off;
    VAR_12->head = VAR_18.d.u.file.head;
    VAR_12->size = VAR_18.d.u.file.size;
    VAR_12->flags = VAR_14;
    VAR_12->pos = 0;

    if (VAR_14 & VAR_8) {
        if (VAR_12->size != 0) {
            VAR_12->flags |= VAR_4;
        }
        VAR_12->head = 0xffffffff;
        VAR_12->size = 0;
    }


    VAR_12->cache.block = 0xffffffff;
    if (VAR_12->cfg && VAR_12->cfg->buffer) {
        VAR_12->cache.buffer = VAR_12->cfg->buffer;
    } else if (VAR_11->cfg->file_buffer) {
        if (VAR_11->files) {

            return VAR_3;
        }
        VAR_12->cache.buffer = VAR_11->cfg->file_buffer;
    } else if ((VAR_12->flags & 3) == VAR_7) {
        VAR_12->cache.buffer = FUNC_5(VAR_11->cfg->read_size);
        if (!VAR_12->cache.buffer) {
            return VAR_3;
        }
    } else {
        VAR_12->cache.buffer = FUNC_5(VAR_11->cfg->prog_size);
        if (!VAR_12->cache.buffer) {
            return VAR_3;
        }
    }


    FUNC_0(VAR_11, &VAR_12->cache);
    if ((VAR_12->flags & 3) != VAR_7) {
        FUNC_1(VAR_11, &VAR_12->cache);
    }


    VAR_12->next = VAR_11->files;
    VAR_11->files = VAR_12;

    return 0;
}
