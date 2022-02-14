
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int robj ;
struct TYPE_4__ {int type; int * pattern; } ;
typedef TYPE_1__ redisSortOperation ;


 TYPE_1__* FUNC_0 (int) ;

redisSortOperation *FUNC_1(int VAR_0, robj *VAR_1) {
    redisSortOperation *VAR_2 = FUNC_0(sizeof(*VAR_2));
    VAR_2->type = VAR_0;
    VAR_2->pattern = VAR_1;
    return VAR_2;
}
