
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int argc; TYPE_3__* db; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_12__ {int dirty; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {int ok; int cone; int czero; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (int ) ;

void FUNC_6(client *VAR_3, int VAR_4) {
    int VAR_5;

    if ((VAR_3->argc % 2) == 0) {
        FUNC_1(VAR_3,"wrong number of arguments for MSET");
        return;
    }



    if (VAR_4) {
        for (VAR_5 = 1; VAR_5 < VAR_3->argc; VAR_5 += 2) {
            if (FUNC_2(VAR_3->db,VAR_3->argv[VAR_5]) != ((void*)0)) {
                FUNC_0(VAR_3, VAR_2.czero);
                return;
            }
        }
    }

    for (VAR_5 = 1; VAR_5 < VAR_3->argc; VAR_5 += 2) {
        VAR_3->argv[VAR_5+1] = FUNC_5(VAR_3->argv[VAR_5+1]);
        FUNC_4(VAR_3->db,VAR_3->argv[VAR_5],VAR_3->argv[VAR_5+1]);
        FUNC_3(VAR_0,"set",VAR_3->argv[VAR_5],VAR_3->db->id);
    }
    VAR_1.dirty += (VAR_3->argc-1)/2;
    FUNC_0(VAR_3, VAR_4 ? VAR_2.cone : VAR_2.ok);
}
