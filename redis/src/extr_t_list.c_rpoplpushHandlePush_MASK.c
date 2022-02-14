
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_20__ {TYPE_3__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_22__ {int list_compress_depth; int list_max_ziplist_size; } ;
struct TYPE_21__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*) ;

void FUNC_7(client *VAR_3, robj *VAR_4, robj *VAR_5, robj *VAR_6) {

    if (!VAR_5) {
        VAR_5 = FUNC_1();
        FUNC_5(VAR_5->ptr, VAR_2.list_max_ziplist_size,
                            VAR_2.list_compress_depth);
        FUNC_2(VAR_3->db,VAR_4,VAR_5);
    }
    FUNC_6(VAR_3->db,VAR_4);
    FUNC_3(VAR_5,VAR_6,VAR_0);
    FUNC_4(VAR_1,"lpush",VAR_4,VAR_3->db->id);

    FUNC_0(VAR_3,VAR_6);
}
