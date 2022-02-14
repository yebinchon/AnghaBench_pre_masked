
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_17__ {size_t resp; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_18__ {int * null; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,long) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_5__ VAR_1 ;
 long FUNC_6 (TYPE_1__*,int ,int) ;

void FUNC_7(client *VAR_2, int VAR_3) {
    robj *VAR_4 = VAR_2->argv[1];
    robj *VAR_5 = VAR_2->argv[2];
    robj *VAR_6;
    long VAR_7;

    if ((VAR_6 = FUNC_3(VAR_2,VAR_4,VAR_1.null[VAR_2->resp])) == ((void*)0) ||
        FUNC_2(VAR_2,VAR_6,VAR_0)) return;

    FUNC_5(VAR_2,VAR_5,FUNC_4(VAR_5));
    VAR_7 = FUNC_6(VAR_6,VAR_5->ptr,VAR_3);
    if (VAR_7 >= 0) {
        FUNC_0(VAR_2,VAR_7);
    } else {
        FUNC_1(VAR_2);
    }
}
