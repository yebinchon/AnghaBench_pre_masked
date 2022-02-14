
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ type; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_17__ {int argc; TYPE_3__* db; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_20__ {int dirty; int list_compress_depth; int list_max_ziplist_size; } ;
struct TYPE_19__ {int wrongtypeerr; } ;
struct TYPE_18__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_9 (TYPE_3__*,int ) ;

void FUNC_10(client *VAR_5, int VAR_6) {
    int VAR_7, VAR_8 = 0;
    robj *VAR_9 = FUNC_6(VAR_5->db,VAR_5->argv[1]);

    if (VAR_9 && VAR_9->type != VAR_2) {
        FUNC_0(VAR_5,VAR_4.wrongtypeerr);
        return;
    }

    for (VAR_7 = 2; VAR_7 < VAR_5->argc; VAR_7++) {
        if (!VAR_9) {
            VAR_9 = FUNC_2();
            FUNC_8(VAR_9->ptr, VAR_3.list_max_ziplist_size,
                                VAR_3.list_compress_depth);
            FUNC_3(VAR_5->db,VAR_5->argv[1],VAR_9);
        }
        FUNC_5(VAR_9,VAR_5->argv[VAR_7],VAR_6);
        VAR_8++;
    }
    FUNC_1(VAR_5, (VAR_9 ? FUNC_4(VAR_9) : 0));
    if (VAR_8) {
        char *VAR_10 = (VAR_6 == VAR_0) ? "lpush" : "rpush";

        FUNC_9(VAR_5->db,VAR_5->argv[1]);
        FUNC_7(VAR_1,VAR_10,VAR_5->argv[1],VAR_5->db->id);
    }
    VAR_3.dirty += VAR_8;
}
