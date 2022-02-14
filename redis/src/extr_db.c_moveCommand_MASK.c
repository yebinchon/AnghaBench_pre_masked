
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int robj ;
struct TYPE_15__ {int id; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_16__ {int * argv; TYPE_1__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_18__ {int dirty; scalar_t__ cluster_enabled; } ;
struct TYPE_17__ {int cone; int czero; int sameobjecterr; int outofrangeerr; } ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 long long FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ,long long*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 TYPE_6__ VAR_3 ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int ,long long) ;
 TYPE_3__ VAR_4 ;

void FUNC_10(client *VAR_5) {
    robj *VAR_6;
    redisDb *VAR_7, *VAR_8;
    int VAR_9;
    long long VAR_10, VAR_11;

    if (VAR_3.cluster_enabled) {
        FUNC_1(VAR_5,"MOVE is not allowed in cluster mode");
        return;
    }


    VAR_7 = VAR_5->db;
    VAR_9 = VAR_5->db->id;

    if (FUNC_5(VAR_5->argv[2],&VAR_10) == VAR_0 ||
        VAR_10 < VAR_2 || VAR_10 > VAR_1 ||
        FUNC_8(VAR_5,VAR_10) == VAR_0)
    {
        FUNC_0(VAR_5,VAR_4.outofrangeerr);
        return;
    }
    VAR_8 = VAR_5->db;
    FUNC_8(VAR_5,VAR_9);



    if (VAR_7 == VAR_8) {
        FUNC_0(VAR_5,VAR_4.sameobjecterr);
        return;
    }


    VAR_6 = FUNC_7(VAR_5->db,VAR_5->argv[1]);
    if (!VAR_6) {
        FUNC_0(VAR_5,VAR_4.czero);
        return;
    }
    VAR_11 = FUNC_4(VAR_5->db,VAR_5->argv[1]);


    if (FUNC_7(VAR_8,VAR_5->argv[1]) != ((void*)0)) {
        FUNC_0(VAR_5,VAR_4.czero);
        return;
    }
    FUNC_2(VAR_8,VAR_5->argv[1],VAR_6);
    if (VAR_11 != -1) FUNC_9(VAR_5,VAR_8,VAR_5->argv[1],VAR_11);
    FUNC_6(VAR_6);


    FUNC_3(VAR_7,VAR_5->argv[1]);
    VAR_3.dirty++;
    FUNC_0(VAR_5,VAR_4.cone);
}
