
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int argc; TYPE_2__* db; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_11__ {int dirty; } ;
struct TYPE_10__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_5 (TYPE_2__*,int ) ;

void FUNC_6(client *VAR_2, int VAR_3) {
    int VAR_4 = 0, VAR_5;

    for (VAR_5 = 1; VAR_5 < VAR_2->argc; VAR_5++) {
        FUNC_3(VAR_2->db,VAR_2->argv[VAR_5]);
        int VAR_6 = VAR_3 ? FUNC_1(VAR_2->db,VAR_2->argv[VAR_5]) :
                              FUNC_2(VAR_2->db,VAR_2->argv[VAR_5]);
        if (VAR_6) {
            FUNC_5(VAR_2->db,VAR_2->argv[VAR_5]);
            FUNC_4(VAR_0,
                "del",VAR_2->argv[VAR_5],VAR_2->db->id);
            VAR_1.dirty++;
            VAR_4++;
        }
    }
    FUNC_0(VAR_2,VAR_4);
}
