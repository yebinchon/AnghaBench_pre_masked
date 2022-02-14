
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_13__ {int * argv; int db; } ;
typedef TYPE_2__ client ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int *,size_t) ;

robj *FUNC_7(client *VAR_1, size_t VAR_2) {
    size_t VAR_3 = VAR_2 >> 3;
    robj *VAR_4 = FUNC_4(VAR_1->db,VAR_1->argv[1]);

    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_1(VAR_0,FUNC_6(((void*)0), VAR_3+1));
        FUNC_2(VAR_1->db,VAR_1->argv[1],VAR_4);
    } else {
        if (FUNC_0(VAR_1,VAR_4,VAR_0)) return ((void*)0);
        VAR_4 = FUNC_3(VAR_1->db,VAR_1->argv[1],VAR_4);
        VAR_4->ptr = FUNC_5(VAR_4->ptr,VAR_3+1);
    }
    return VAR_4;
}
