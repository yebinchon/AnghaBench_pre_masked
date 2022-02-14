
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_7__ {scalar_t__ replstate; } ;
typedef TYPE_2__ client ;
struct TYPE_8__ {scalar_t__ repl_backlog; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,size_t) ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (char) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,...) ;
 TYPE_3__ VAR_1 ;

void FUNC_6(list *VAR_2, char *VAR_3, size_t VAR_4) {
    listNode *VAR_5;
    listIter VAR_6;



    if (0) {
        FUNC_5("%zu:",VAR_4);
        for (size_t VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            FUNC_5("%c", FUNC_2(VAR_3[VAR_7]) ? VAR_3[VAR_7] : '.');
        }
        FUNC_5("\n");
    }

    if (VAR_1.repl_backlog) FUNC_1(VAR_3,VAR_4);
    FUNC_4(VAR_2,&VAR_6);
    while((VAR_5 = FUNC_3(&VAR_6))) {
        client *VAR_8 = VAR_5->value;


        if (VAR_8->replstate == VAR_0) continue;
        FUNC_0(VAR_8,VAR_3,VAR_4);
    }
}
