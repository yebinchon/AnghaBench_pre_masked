
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int patterns; int passwords; } ;
typedef TYPE_1__ user ;
typedef int sds ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_6__ {int flag; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

sds FUNC_9(user *VAR_3) {
    sds VAR_4 = FUNC_7();


    for (int VAR_5 = 0; VAR_0[VAR_5].flag; VAR_5++) {


        if (VAR_0[VAR_5].flag == VAR_2 ||
            VAR_0[VAR_5].flag == VAR_1) continue;
        if (VAR_3->flags & VAR_0[VAR_5].flag) {
            VAR_4 = FUNC_4(VAR_4,VAR_0[VAR_5].name);
            VAR_4 = FUNC_5(VAR_4," ",1);
        }
    }


    listIter VAR_6;
    listNode *VAR_7;
    FUNC_3(VAR_3->passwords,&VAR_6);
    while((VAR_7 = FUNC_1(&VAR_6))) {
        sds VAR_8 = FUNC_2(VAR_7);
        VAR_4 = FUNC_5(VAR_4,"#",1);
        VAR_4 = FUNC_6(VAR_4,VAR_8);
        VAR_4 = FUNC_5(VAR_4," ",1);
    }


    if (VAR_3->flags & VAR_2) {
        VAR_4 = FUNC_5(VAR_4,"~* ",3);
    } else {
        FUNC_3(VAR_3->patterns,&VAR_6);
        while((VAR_7 = FUNC_1(&VAR_6))) {
            sds VAR_9 = FUNC_2(VAR_7);
            VAR_4 = FUNC_5(VAR_4,"~",1);
            VAR_4 = FUNC_6(VAR_4,VAR_9);
            VAR_4 = FUNC_5(VAR_4," ",1);
        }
    }


    sds VAR_10 = FUNC_0(VAR_3);
    VAR_4 = FUNC_6(VAR_4,VAR_10);
    FUNC_8(VAR_10);
    return VAR_4;
}
