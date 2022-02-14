
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {int ptr; } ;
struct TYPE_10__ {TYPE_1__ buffer; } ;
struct TYPE_11__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;
struct TYPE_12__ {int * argv; int db; } ;
typedef TYPE_4__ client ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 int * FUNC_3 (int ,int ) ;

void FUNC_4(client *VAR_0) {
    robj *VAR_1;
    rio VAR_2;


    if ((VAR_1 = FUNC_3(VAR_0->db,VAR_0->argv[1])) == ((void*)0)) {
        FUNC_1(VAR_0);
        return;
    }


    FUNC_2(&VAR_2,VAR_1,VAR_0->argv[1]);


    FUNC_0(VAR_0,VAR_2.io.buffer.ptr);
    return;
}
