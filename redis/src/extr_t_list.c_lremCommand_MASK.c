
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int robj ;
typedef int listTypeIterator ;
typedef int listTypeEntry ;
struct TYPE_11__ {TYPE_2__* db; int ** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_14__ {int dirty; } ;
struct TYPE_13__ {int czero; } ;
struct TYPE_12__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,long) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,long*,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (TYPE_1__*,int *,int ) ;
 int FUNC_11 (int ,char*,int *,int ) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_12 (TYPE_2__*,int *) ;

void FUNC_13(client *VAR_8) {
    robj *VAR_9, *VAR_10;
    VAR_10 = VAR_8->argv[3];
    long VAR_11;
    long VAR_12 = 0;

    if ((FUNC_3(VAR_8, VAR_8->argv[2], &VAR_11, ((void*)0)) != VAR_0))
        return;

    VAR_9 = FUNC_10(VAR_8,VAR_8->argv[1],VAR_7.czero);
    if (VAR_9 == ((void*)0) || FUNC_1(VAR_8,VAR_9,VAR_5)) return;

    listTypeIterator *VAR_13;
    if (VAR_11 < 0) {
        VAR_11 = -VAR_11;
        VAR_13 = FUNC_6(VAR_9,-1,VAR_1);
    } else {
        VAR_13 = FUNC_6(VAR_9,0,VAR_2);
    }

    listTypeEntry VAR_14;
    while (FUNC_8(VAR_13,&VAR_14)) {
        if (FUNC_5(&VAR_14,VAR_10)) {
            FUNC_4(VAR_13, &VAR_14);
            VAR_6.dirty++;
            VAR_12++;
            if (VAR_11 && VAR_12 == VAR_11) break;
        }
    }
    FUNC_9(VAR_13);

    if (VAR_12) {
        FUNC_12(VAR_8->db,VAR_8->argv[1]);
        FUNC_11(VAR_4,"lrem",VAR_8->argv[1],VAR_8->db->id);
    }

    if (FUNC_7(VAR_9) == 0) {
        FUNC_2(VAR_8->db,VAR_8->argv[1]);
        FUNC_11(VAR_3,"del",VAR_8->argv[1],VAR_8->db->id);
    }

    FUNC_0(VAR_8,VAR_12);
}
