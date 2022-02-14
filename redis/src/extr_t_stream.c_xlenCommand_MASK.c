
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int length; } ;
typedef TYPE_1__ stream ;
struct TYPE_12__ {TYPE_1__* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_13__ {int * argv; } ;
typedef TYPE_3__ client ;
struct TYPE_14__ {int czero; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int ,int ) ;
 TYPE_5__ VAR_1 ;

void FUNC_3(client *VAR_2) {
    robj *VAR_3;
    if ((VAR_3 = FUNC_2(VAR_2,VAR_2->argv[1],VAR_1.czero)) == ((void*)0)
        || FUNC_1(VAR_2,VAR_3,VAR_0)) return;
    stream *VAR_4 = VAR_3->ptr;
    FUNC_0(VAR_2,VAR_4->length);
}
