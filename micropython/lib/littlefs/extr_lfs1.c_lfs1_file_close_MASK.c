
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* cfg; TYPE_5__* files; } ;
typedef TYPE_4__ lfs1_t ;
struct TYPE_12__ {int buffer; } ;
struct TYPE_14__ {TYPE_3__ cache; TYPE_1__* cfg; struct TYPE_14__* next; } ;
typedef TYPE_5__ lfs1_file_t ;
struct TYPE_11__ {int file_buffer; } ;
struct TYPE_10__ {scalar_t__ buffer; } ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (int ) ;

int FUNC_2(lfs1_t *VAR_0, lfs1_file_t *VAR_1) {
    int VAR_2 = FUNC_0(VAR_0, VAR_1);


    for (lfs1_file_t **VAR_3 = &VAR_0->files; *VAR_3; VAR_3 = &(*VAR_3)->next) {
        if (*VAR_3 == VAR_1) {
            *VAR_3 = VAR_1->next;
            break;
        }
    }


    if (!(VAR_1->cfg && VAR_1->cfg->buffer) && !VAR_0->cfg->file_buffer) {
        FUNC_1(VAR_1->cache.buffer);
    }

    return VAR_2;
}
