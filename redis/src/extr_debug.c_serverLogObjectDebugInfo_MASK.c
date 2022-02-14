
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* zsl; } ;
typedef TYPE_2__ zset ;
typedef int sds ;
struct TYPE_12__ {int type; int encoding; int refcount; scalar_t__ ptr; } ;
typedef TYPE_3__ robj ;
struct TYPE_10__ {scalar_t__ level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*) ;
 scalar_t__ FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 scalar_t__ FUNC_8 (TYPE_3__ const*) ;
 scalar_t__ FUNC_9 (TYPE_3__ const*) ;

void FUNC_10(const robj *VAR_7) {
    FUNC_7(VAR_0,"Object type: %d", VAR_7->type);
    FUNC_7(VAR_0,"Object encoding: %d", VAR_7->encoding);
    FUNC_7(VAR_0,"Object refcount: %d", VAR_7->refcount);
    if (VAR_7->type == VAR_5 && FUNC_2(VAR_7)) {
        FUNC_7(VAR_0,"Object raw string len: %zu", FUNC_6(VAR_7->ptr));
        if (FUNC_6(VAR_7->ptr) < 4096) {
            sds VAR_8 = FUNC_3(FUNC_4(),VAR_7->ptr,FUNC_6(VAR_7->ptr));
            FUNC_7(VAR_0,"Object raw string content: %s", VAR_8);
            FUNC_5(VAR_8);
        }
    } else if (VAR_7->type == VAR_3) {
        FUNC_7(VAR_0,"List length: %d", (int) FUNC_1(VAR_7));
    } else if (VAR_7->type == VAR_4) {
        FUNC_7(VAR_0,"Set size: %d", (int) FUNC_8(VAR_7));
    } else if (VAR_7->type == VAR_2) {
        FUNC_7(VAR_0,"Hash size: %d", (int) FUNC_0(VAR_7));
    } else if (VAR_7->type == VAR_6) {
        FUNC_7(VAR_0,"Sorted set size: %d", (int) FUNC_9(VAR_7));
        if (VAR_7->encoding == VAR_1)
            FUNC_7(VAR_0,"Skiplist level: %d", (int) ((const zset*)VAR_7->ptr)->zsl->level);
    }
}
