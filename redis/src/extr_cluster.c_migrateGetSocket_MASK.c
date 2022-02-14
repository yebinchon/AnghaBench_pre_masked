
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int sds ;
struct TYPE_17__ {char* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_18__ {int last_dbid; int last_use_time; int * conn; } ;
typedef TYPE_3__ migrateCachedSocket ;
typedef int dictEntry ;
typedef int connection ;
struct TYPE_19__ {TYPE_1__** argv; } ;
typedef TYPE_4__ client ;
struct TYPE_20__ {int migrate_cached_sockets; int unixtime; scalar_t__ tls_cluster; } ;
struct TYPE_16__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,long) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 TYPE_3__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 TYPE_7__ VAR_2 ;
 int FUNC_19 (TYPE_3__*) ;
 TYPE_3__* FUNC_20 (int) ;

migrateCachedSocket* FUNC_21(client *VAR_3, robj *VAR_4, robj *VAR_5, long VAR_6) {
    connection *VAR_7;
    sds VAR_8 = FUNC_15();
    migrateCachedSocket *VAR_9;


    VAR_8 = FUNC_14(VAR_8,VAR_4->ptr,FUNC_17(VAR_4->ptr));
    VAR_8 = FUNC_14(VAR_8,":",1);
    VAR_8 = FUNC_14(VAR_8,VAR_5->ptr,FUNC_17(VAR_5->ptr));
    VAR_9 = FUNC_9(VAR_2.migrate_cached_sockets,VAR_8);
    if (VAR_9) {
        FUNC_16(VAR_8);
        VAR_9->last_use_time = VAR_2.unixtime;
        return VAR_9;
    }


    if (FUNC_13(VAR_2.migrate_cached_sockets) == VAR_1) {

        dictEntry *VAR_10 = FUNC_11(VAR_2.migrate_cached_sockets);
        VAR_9 = FUNC_12(VAR_10);
        FUNC_3(VAR_9->conn);
        FUNC_19(VAR_9);
        FUNC_8(VAR_2.migrate_cached_sockets,FUNC_10(VAR_10));
    }


    VAR_7 = VAR_2.tls_cluster ? FUNC_5() : FUNC_4();
    if (FUNC_2(VAR_7, VAR_3->argv[1]->ptr, FUNC_1(VAR_3->argv[2]->ptr), VAR_6)
            != VAR_0) {
        FUNC_0(VAR_3,
            FUNC_18("-IOERR error or timeout connecting to the client\r\n"));
        FUNC_3(VAR_7);
        FUNC_16(VAR_8);
        return ((void*)0);
    }
    FUNC_6(VAR_7);


    VAR_9 = FUNC_20(sizeof(*VAR_9));
    VAR_9->conn = VAR_7;

    VAR_9->last_dbid = -1;
    VAR_9->last_use_time = VAR_2.unixtime;
    FUNC_7(VAR_2.migrate_cached_sockets,VAR_8,VAR_9);
    return VAR_9;
}
