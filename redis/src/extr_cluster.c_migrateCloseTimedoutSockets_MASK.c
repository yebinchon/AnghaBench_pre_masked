
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ last_use_time; int conn; } ;
typedef TYPE_1__ migrateCachedSocket ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {scalar_t__ unixtime; int migrate_cached_sockets; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void) {
    dictIterator *VAR_2 = FUNC_3(VAR_1.migrate_cached_sockets);
    dictEntry *VAR_3;

    while((VAR_3 = FUNC_5(VAR_2)) != ((void*)0)) {
        migrateCachedSocket *VAR_4 = FUNC_4(VAR_3);

        if ((VAR_1.unixtime - VAR_4->last_use_time) > VAR_0) {
            FUNC_0(VAR_4->conn);
            FUNC_7(VAR_4);
            FUNC_1(VAR_1.migrate_cached_sockets,FUNC_2(VAR_3));
        }
    }
    FUNC_6(VAR_2);
}
