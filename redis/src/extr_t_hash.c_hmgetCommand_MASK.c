
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_12__ {int argc; TYPE_5__** argv; int db; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int ptr; } ;
struct TYPE_13__ {int wrongtypeerr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_3 (int ,TYPE_5__*) ;
 TYPE_3__ VAR_1 ;

void FUNC_4(client *VAR_2) {
    robj *VAR_3;
    int VAR_4;



    VAR_3 = FUNC_3(VAR_2->db, VAR_2->argv[1]);
    if (VAR_3 != ((void*)0) && VAR_3->type != VAR_0) {
        FUNC_1(VAR_2, VAR_1.wrongtypeerr);
        return;
    }

    FUNC_2(VAR_2, VAR_2->argc-2);
    for (VAR_4 = 2; VAR_4 < VAR_2->argc; VAR_4++) {
        FUNC_0(VAR_2, VAR_3, VAR_2->argv[VAR_4]->ptr);
    }
}
