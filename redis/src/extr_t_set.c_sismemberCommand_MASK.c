
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {TYPE_5__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_9__ {int czero; int cone; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int * FUNC_2 (TYPE_1__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 TYPE_3__ VAR_1 ;

void FUNC_4(client *VAR_2) {
    robj *VAR_3;

    if ((VAR_3 = FUNC_2(VAR_2,VAR_2->argv[1],VAR_1.czero)) == ((void*)0) ||
        FUNC_1(VAR_2,VAR_3,VAR_0)) return;

    if (FUNC_3(VAR_3,VAR_2->argv[2]->ptr))
        FUNC_0(VAR_2,VAR_1.cone);
    else
        FUNC_0(VAR_2,VAR_1.czero);
}
