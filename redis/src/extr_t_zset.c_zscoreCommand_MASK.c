
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_14__ {size_t resp; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_15__ {int * null; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,double) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,double*) ;

void FUNC_5(client *VAR_3) {
    robj *VAR_4 = VAR_3->argv[1];
    robj *VAR_5;
    double VAR_6;

    if ((VAR_5 = FUNC_3(VAR_3,VAR_4,VAR_2.null[VAR_3->resp])) == ((void*)0) ||
        FUNC_2(VAR_3,VAR_5,VAR_1)) return;

    if (FUNC_4(VAR_5,VAR_3->argv[2]->ptr,&VAR_6) == VAR_0) {
        FUNC_1(VAR_3);
    } else {
        FUNC_0(VAR_3,VAR_6);
    }
}
