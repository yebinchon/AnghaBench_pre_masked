
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int robj ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int ,int *) ;

robj *FUNC_2(client *VAR_0, robj *VAR_1, robj *VAR_2) {
    robj *VAR_3 = FUNC_1(VAR_0->db, VAR_1);
    if (!VAR_3) FUNC_0(VAR_0,VAR_2);
    return VAR_3;
}
