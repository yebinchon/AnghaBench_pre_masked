
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {size_t resp; TYPE_4__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_9__ {int * null; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int * FUNC_2 (TYPE_1__*,TYPE_4__*,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_3(client *VAR_2) {
    robj *VAR_3;

    if ((VAR_3 = FUNC_2(VAR_2,VAR_2->argv[1],VAR_1.null[VAR_2->resp])) == ((void*)0) ||
        FUNC_1(VAR_2,VAR_3,VAR_0)) return;

    FUNC_0(VAR_2, VAR_3, VAR_2->argv[2]->ptr);
}
