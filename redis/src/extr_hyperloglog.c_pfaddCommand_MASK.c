
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct hllhdr {int dummy; } ;
struct TYPE_25__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_26__ {int argc; TYPE_3__* db; TYPE_4__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_30__ {int dirty; } ;
struct TYPE_29__ {int czero; int cone; } ;
struct TYPE_28__ {scalar_t__ ptr; } ;
struct TYPE_27__ {int id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hllhdr*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_3__*,TYPE_4__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,unsigned char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_9 (int ,char*,TYPE_4__*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;

void FUNC_13(client *VAR_5) {
    robj *VAR_6 = FUNC_8(VAR_5->db,VAR_5->argv[1]);
    struct hllhdr *VAR_7;
    int VAR_8 = 0, VAR_9;

    if (VAR_6 == ((void*)0)) {



        VAR_6 = FUNC_3();
        FUNC_4(VAR_5->db,VAR_5->argv[1],VAR_6);
        VAR_8++;
    } else {
        if (FUNC_7(VAR_5,VAR_6) != VAR_0) return;
        VAR_6 = FUNC_5(VAR_5->db,VAR_5->argv[1],VAR_6);
    }

    for (VAR_9 = 2; VAR_9 < VAR_5->argc; VAR_9++) {
        int VAR_10 = FUNC_6(VAR_6, (unsigned char*)VAR_5->argv[VAR_9]->ptr,
                               FUNC_10(VAR_5->argv[VAR_9]->ptr));
        switch(VAR_10) {
        case 1:
            VAR_8++;
            break;
        case -1:
            FUNC_2(VAR_5,FUNC_11(VAR_2));
            return;
        }
    }
    VAR_7 = VAR_6->ptr;
    if (VAR_8) {
        FUNC_12(VAR_5->db,VAR_5->argv[1]);
        FUNC_9(VAR_1,"pfadd",VAR_5->argv[1],VAR_5->db->id);
        VAR_3.dirty++;
        FUNC_0(VAR_7);
    }
    FUNC_1(VAR_5, VAR_8 ? VAR_4.cone : VAR_4.czero);
}
