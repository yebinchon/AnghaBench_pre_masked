
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sds ;
struct TYPE_8__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_9__ {int conn; } ;
typedef TYPE_2__ migrateCachedSocket ;
struct TYPE_10__ {int migrate_cached_sockets; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(robj *VAR_1, robj *VAR_2) {
    sds VAR_3 = FUNC_4();
    migrateCachedSocket *VAR_4;

    VAR_3 = FUNC_3(VAR_3,VAR_1->ptr,FUNC_6(VAR_1->ptr));
    VAR_3 = FUNC_3(VAR_3,":",1);
    VAR_3 = FUNC_3(VAR_3,VAR_2->ptr,FUNC_6(VAR_2->ptr));
    VAR_4 = FUNC_2(VAR_0.migrate_cached_sockets,VAR_3);
    if (!VAR_4) {
        FUNC_5(VAR_3);
        return;
    }

    FUNC_0(VAR_4->conn);
    FUNC_7(VAR_4);
    FUNC_1(VAR_0.migrate_cached_sockets,VAR_3);
    FUNC_5(VAR_3);
}
