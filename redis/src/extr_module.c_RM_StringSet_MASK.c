
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; int * value; int key; int db; scalar_t__ iter; } ;
typedef int RedisModuleString ;
typedef TYPE_1__ RedisModuleKey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(RedisModuleKey *VAR_3, RedisModuleString *VAR_4) {
    if (!(VAR_3->mode & VAR_2) || VAR_3->iter) return VAR_0;
    FUNC_0(VAR_3);
    FUNC_1(VAR_3->db,VAR_3->key,VAR_4);
    VAR_3->value = VAR_4;
    return VAR_1;
}
